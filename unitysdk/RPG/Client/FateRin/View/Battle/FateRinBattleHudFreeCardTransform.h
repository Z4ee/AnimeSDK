#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/IFateRinBattleHudFreeCardViewModel_CardState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudTargetingCurve; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1A3A0BC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1A3A0C70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A3A0D60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_INIT_OFFSET UNITYSDK_OFFSET(0x1A3A0650)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3A0190)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_REFRESHSTATEANDPOS_OFFSET UNITYSDK_OFFSET(0x1A3A06F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_SETCARDINDECKPOS_OFFSET UNITYSDK_OFFSET(0x1A3A0E30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_SETCARDSIZEREFNODE_OFFSET UNITYSDK_OFFSET(0x1A3A0D10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__BEGINEASEWITHSOURCE_OFFSET UNITYSDK_OFFSET(0x1A3A1370)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__BEGINEASE_OFFSET UNITYSDK_OFFSET(0x1A3A1760)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__COMPUTELARGEWORLDHALFHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A3A15B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A1960)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1A3A0810)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1A3A0790)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCENTERANCHORSPACE_OFFSET UNITYSDK_OFFSET(0x1A3A1140)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCENTERANCHOR_OFFSET UNITYSDK_OFFSET(0x1A3A11D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCURRENTCARDLOGICALWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1A3A1470)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETLARGESCALE_OFFSET UNITYSDK_OFFSET(0x1A3A12F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__REFRESHEASETARGETFORCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1A3A0310)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__REFRESHTARGETINGCURVE_OFFSET UNITYSDK_OFFSET(0x1A3A04E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__SETCARDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A3A03E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1A3A0AE0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFreeCardTransform_TypeDefinitionIndex = 75710;

	class FateRinBattleHudFreeCardTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _CardNode; // 0x18
		::UnityEngine::RectTransform* _PivotCenter; // 0x20
		::UnityEngine::RectTransform* _PivotTargeting; // 0x28
		::System::Single _LargeScale; // 0x30
		::System::Single _PCLargeScale; // 0x34
		::System::Single _MediumScale; // 0x38
		::System::Single _SmallScale; // 0x3C
		::RPG::Client::FateRin::View::Battle::FateRinBattleHudTargetingCurve* _TargetingCurve; // 0x40
		::UnityEngine::RectTransform* _TargetingCurveStartPoint; // 0x48
		::System::Single _EaseTime; // 0x50
		::UnityEngine::AnimationCurve* _EaseCurve; // 0x58
		::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState _CurState; // 0x60
		::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState _LastState; // 0x64
		::UnityEngine::Vector3 _PosEaseSource; // 0x68
		::UnityEngine::Vector3 _PosEaseTarget; // 0x74
		::System::Single _ScaleEaseSource; // 0x80
		::System::Single _ScaleEaseTarget; // 0x84
		::System::Single _CurElapsedTime; // 0x88
		::System::Boolean _ShowTargetingCurve; // 0x8C
		::UnityEngine::Vector2 _LastPointerPos; // 0x90
		::UnityEngine::Vector3 _CurCardLogicalWorldPos; // 0x98
		::UnityEngine::Vector3 _CurCardLogicalLocalPos; // 0xA4
		::System::Boolean _HasCardLogicalWorldPos; // 0xB0
		::UnityEngine::RectTransform* _CardSizeRefNode; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_INIT_OFFSET))(this);
		}

		::System::Void RefreshStateAndPos(::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_REFRESHSTATEANDPOS_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCardWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDPOS_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetCardWorldRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDROTATION_OFFSET))(this);
		}

		::System::Void SetCardSizeRefNode(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_SETCARDSIZEREFNODE_OFFSET))(this, a1);
		}

		::System::Single GetCardWorldWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_GETCARDWORLDWIDTH_OFFSET))(this);
		}

		::System::Void SetCardInDeckPos(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM_SETCARDINDECKPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _GetCenterAnchor()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCENTERANCHOR_OFFSET))(this);
		}

		::System::Single _GetLargeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETLARGESCALE_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetCenterAnchorSpace()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCENTERANCHORSPACE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetCurrentCardLogicalWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__GETCURRENTCARDLOGICALWORLDPOS_OFFSET))(this);
		}

		::System::Single _ComputeLargeWorldHalfHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__COMPUTELARGEWORLDHALFHEIGHT_OFFSET))(this);
		}

		::System::Void _EnterState(::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__ENTERSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _ExitState(::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__EXITSTATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateState(::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__UPDATESTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshEaseTargetForCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__REFRESHEASETARGETFORCURRENTSTATE_OFFSET))(this);
		}

		::System::Void _BeginEase(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__BEGINEASE_OFFSET))(this, a1, a2);
		}

		::System::Void _BeginEaseWithSource(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__BEGINEASEWITHSOURCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetCardTransform(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__SETCARDTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshTargetingCurve(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDFREECARDTRANSFORM__REFRESHTARGETINGCURVE_OFFSET))(this, a1);
		}
	};
}
