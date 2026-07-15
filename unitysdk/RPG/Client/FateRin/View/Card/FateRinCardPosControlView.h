#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/View/Card/FateRinCardPosControlView_OffsetAnimState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1274;
class Class_3_3F1B1DE9D9F51912;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GETCARDHEIGHT_OFFSET UNITYSDK_OFFSET(0x19717C10)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_EVENTTRIGGERNODE_OFFSET UNITYSDK_OFFSET(0x1970D530)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_HANDCARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1970BB00)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_OFFSETNODE_OFFSET UNITYSDK_OFFSET(0x19716D30)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1970ED50)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYFLYIN_OFFSET UNITYSDK_OFFSET(0x1970B200)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYREFLOW_OFFSET UNITYSDK_OFFSET(0x19717340)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYRETURNFROMFREECARD_OFFSET UNITYSDK_OFFSET(0x197177D0)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_RESETTOIDLE_OFFSET UNITYSDK_OFFSET(0x197179C0)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETEVENTTRIGGEROFFSET_OFFSET UNITYSDK_OFFSET(0x19717B10)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETHANDCARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19716D70)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETOFFSETNODEWORLDPOSE_OFFSET UNITYSDK_OFFSET(0x19717C80)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETROOTLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19716E10)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_WORLDTOOFFSETLOCAL_OFFSET UNITYSDK_OFFSET(0x1970B040)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__CANCELCURRENTKEEPVISUALPOS_OFFSET UNITYSDK_OFFSET(0x197172C0)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19717E30)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__ENTERMOTIONWITHSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19717010)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__ONMOTIONFINISHED_OFFSET UNITYSDK_OFFSET(0x19717DC0)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__REBUILDCURRENTSTRATEGY_OFFSET UNITYSDK_OFFSET(0x197174D0)
#define RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__WRITERETURNSTARTPOSE_OFFSET UNITYSDK_OFFSET(0x197178A0)

namespace RPG::Client::FateRin::View::Card
{
	inline static constexpr unsigned int FateRinCardPosControlView_TypeDefinitionIndex = 75685;

	class FateRinCardPosControlView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _HandCardVm; // 0x18
		::UnityEngine::RectTransform* _OffsetNode; // 0x20
		::UnityEngine::RectTransform* _EventTriggerNode; // 0x28
		::System::Single _EaseTime; // 0x30
		::System::String* _ReflowReturnEaseName; // 0x38
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView_OffsetAnimState _State; // 0x40
		::Class_0_16E4307DCC419505_1274* _CurrentStrategy; // 0x48
		::Class_3_3F1B1DE9D9F51912* _CurrentPlanMotion; // 0x50
		::System::Action* _PendingOnComplete; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Root()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_ROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_OffsetNode()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_OFFSETNODE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_EventTriggerNode()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_EVENTTRIGGERNODE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* get_HandCardViewModel()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GET_HANDCARDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetHandCardViewModel(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETHANDCARDVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void SetRootLocalTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETROOTLOCALTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void PlayFlyIn(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_1274* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1274*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYFLYIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayReflow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYREFLOW_OFFSET))(this, a1);
		}

		::System::Void PlayReturnFromFreeCard(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_PLAYRETURNFROMFREECARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetToIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_RESETTOIDLE_OFFSET))(this);
		}

		::System::Void SetEventTriggerOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETEVENTTRIGGEROFFSET_OFFSET))(this, a1);
		}

		::System::Single GetCardHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_GETCARDHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 WorldToOffsetLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_WORLDTOOFFSETLOCAL_OFFSET))(this, a1);
		}

		::System::Void SetOffsetNodeWorldPose(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW_SETOFFSETNODEWORLDPOSE_OFFSET))(this, a1, a2);
		}

		::System::Void _WriteReturnStartPose(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__WRITERETURNSTARTPOSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _EnterMotionWithStrategy(::Class_0_16E4307DCC419505_1274* a1, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView_OffsetAnimState a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1274*, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView_OffsetAnimState, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__ENTERMOTIONWITHSTRATEGY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RebuildCurrentStrategy(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__REBUILDCURRENTSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void _CancelCurrentKeepVisualPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__CANCELCURRENTKEEPVISUALPOS_OFFSET))(this);
		}

		::System::Void _OnMotionFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_CARD_FATERINCARDPOSCONTROLVIEW__ONMOTIONFINISHED_OFFSET))(this);
		}
	};
}
