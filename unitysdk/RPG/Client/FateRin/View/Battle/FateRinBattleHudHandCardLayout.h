#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/View/Battle/FateRinBattleHudHandCardLayout_CardLayoutEntry.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_GETCARDPOSCONTROL_OFFSET UNITYSDK_OFFSET(0x1A3A2070)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_INITLAYOUTPARAMS_OFFSET UNITYSDK_OFFSET(0x1A3A1970)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_PLAYCARDUNSELECTANIMFROMPOS_OFFSET UNITYSDK_OFFSET(0x1A3A21A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_REFLOWHANDCARDS_OFFSET UNITYSDK_OFFSET(0x1A3A1EC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_SETCARDS_OFFSET UNITYSDK_OFFSET(0x1A3A1B70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_SETINTERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A3A1CF0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDANGLES_OFFSET UNITYSDK_OFFSET(0x1A3A3200)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDFILTEREDLAYOUTENTRIES_OFFSET UNITYSDK_OFFSET(0x1A3A3520)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDREFLOWLAYOUTENTRIES_OFFSET UNITYSDK_OFFSET(0x1A3A25C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__CALCANGLESTEPFORCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3A3850)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__COLLECTACTIVECARDS_OFFSET UNITYSDK_OFFSET(0x1A3A2ED0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__COMPUTESPREADOFFSETBYSLOTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A3A3460)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A3B50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__FINDCARDBYVM_OFFSET UNITYSDK_OFFSET(0x1A3A2420)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__FINDCARDSLOT_OFFSET UNITYSDK_OFFSET(0x1A3A33B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__GETCARDTRANSFORMBYANGLE_OFFSET UNITYSDK_OFFSET(0x1A3A38C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__GETCURRENTCARDVM_OFFSET UNITYSDK_OFFSET(0x1A3A1E50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__HASEXCLUDEDCARD_OFFSET UNITYSDK_OFFSET(0x1A3A2E10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISCARDINPRELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A3A37C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISCARDSKIPLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A3A2C30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISEXCLUDEDCARD_OFFSET UNITYSDK_OFFSET(0x1A3A2CC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISSAMEHANDVM_OFFSET UNITYSDK_OFFSET(0x1A3A2D80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISVALIDCARDINDEX_OFFSET UNITYSDK_OFFSET(0x1A3A2140)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__REFRESHLAYERORDER_OFFSET UNITYSDK_OFFSET(0x1A3A1BD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__SETCARDPOSBYANGLE_OFFSET UNITYSDK_OFFSET(0x1A3A2B50)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleHudHandCardLayout_TypeDefinitionIndex = 75711;

	class FateRinBattleHudHandCardLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _CardWidthToMaxDisRatio; // 0x18
		::UnityEngine::RectTransform* _DeckArea; // 0x20
		::System::Single _DeckAreaMargin; // 0x28
		::UnityEngine::Transform* _PivotYMax; // 0x30
		::UnityEngine::Transform* _PivotYMin; // 0x38
		::System::Single _SpreadMaxOffset; // 0x40
		::System::Single _SpreadFalloffRange; // 0x44
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* _Cards; // 0x48
		::UnityEngine::Vector3 _PosO; // 0x50
		::System::Single _R; // 0x5C
		::System::Single _FurthestAngle; // 0x60
		::System::Single _MaxAdjacentAngle; // 0x64
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _HoveredHandVm; // 0x68
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _ExcludedHandVm; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* _FullCardsBuffer; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* _LayoutCardsBuffer; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* _FullAnglesBuffer; // 0x88
		::System::Collections::Generic::List_1<::System::Single>* _LayoutAnglesBuffer; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout_CardLayoutEntry>* _LayoutEntriesBuffer; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void InitLayoutParams(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_INITLAYOUTPARAMS_OFFSET))(this, a1);
		}

		::System::Void SetCards(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_SETCARDS_OFFSET))(this, a1);
		}

		::System::Void SetInteractionState(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_SETINTERACTIONSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* GetCardPosControl(::System::Int32 a1)
		{
			return ((::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_GETCARDPOSCONTROL_OFFSET))(this, a1);
		}

		::System::Void PlayCardUnselectAnimFromPos(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_PLAYCARDUNSELECTANIMFROMPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReflowHandCards(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_REFLOWHANDCARDS_OFFSET))(this, a1);
		}

		::System::Void _RefreshLayerOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__REFRESHLAYERORDER_OFFSET))(this);
		}

		static ::System::Boolean _IsCardSkipLayout(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISCARDSKIPLAYOUT_OFFSET))(a1);
		}

		::System::Boolean _IsExcludedCard(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISEXCLUDEDCARD_OFFSET))(this, a1);
		}

		::System::Boolean _HasExcludedCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__HASEXCLUDEDCARD_OFFSET))(this);
		}

		static ::System::Boolean _IsSameHandVm(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISSAMEHANDVM_OFFSET))(a1, a2);
		}

		::System::Void _BuildReflowLayoutEntries(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout_CardLayoutEntry>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout_CardLayoutEntry>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDREFLOWLAYOUTENTRIES_OFFSET))(this, a1);
		}

		::System::Void _BuildFilteredLayoutEntries(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout_CardLayoutEntry>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout_CardLayoutEntry>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDFILTEREDLAYOUTENTRIES_OFFSET))(this, a1);
		}

		::System::Void _CollectActiveCards(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__COLLECTACTIVECARDS_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _IsCardInPreLayout(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISCARDINPRELAYOUT_OFFSET))(a1);
		}

		::System::Void _BuildAngles(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__BUILDANGLES_OFFSET))(this, a1, a2);
		}

		::System::Single _CalcAngleStepForCount(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__CALCANGLESTEPFORCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean _IsValidCardIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__ISVALIDCARDINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _GetCurrentCardVm(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__GETCURRENTCARDVM_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* _FindCardByVm(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__FINDCARDBYVM_OFFSET))(this, a1);
		}

		static ::System::Int32 _FindCardSlot(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__FINDCARDSLOT_OFFSET))(a1, a2);
		}

		::System::Void _SetCardPosByAngle(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__SETCARDPOSBYANGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GetCardTransformByAngle(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__GETCARDTRANSFORMBYANGLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 _ComputeSpreadOffsetBySlotDistance(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT__COMPUTESPREADOFFSETBYSLOTDISTANCE_OFFSET))(this, a1);
		}
	};
}
