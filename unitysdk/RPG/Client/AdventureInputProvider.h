#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class InputDataController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB22CE60)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xB22E370)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0xB22E390)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_REGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0xB22CD50)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xB22E380)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0xB22E3A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_TICK_OFFSET UNITYSDK_OFFSET(0xB22B2A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_UNREGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0xB22CDF0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB22B140)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CHECKISNEEDSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xB22C5D0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB22A780)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xB22DAF0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETGOTOID_OFFSET UNITYSDK_OFFSET(0xB22D930)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISACTIONNAMEENABLE_OFFSET UNITYSDK_OFFSET(0xB22D7C0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWCHESSROGUEWHEEL_OFFSET UNITYSDK_OFFSET(0xB22CAA0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWWHEEL_OFFSET UNITYSDK_OFFSET(0xB22CA00)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISINSAFEZOOM_OFFSET UNITYSDK_OFFSET(0xB22DF00)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB22DC40)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONDISABLEADVENTUREINPUTHOTKEY_OFFSET UNITYSDK_OFFSET(0xB22DD10)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0xB22DBE0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xB22E1C0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xB22E0E0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0xB22E150)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSIMPLETAP_OFFSET UNITYSDK_OFFSET(0xB22DE20)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xB22E070)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xB22DE70)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPE_OFFSET UNITYSDK_OFFSET(0xB22DFF0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0xB22E220)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xB22E2C0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0xB22DB50)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xB22A9A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB22D660)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__TRYSHOWORCLOSEPAGE_OFFSET UNITYSDK_OFFSET(0xB22CB80)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__UNREGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xB22CEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureInputProvider_TypeDefinitionIndex = 57311;

	class AdventureInputProvider : public ::System::Object
	{
	public:
		// static const ::System::Single _TopSafeZoomPix; // 0x0
		// static const ::System::Single _BottomSafeZoomPix; // 0x0
		// static const ::System::Single _SideSafeZoomPix; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameModeType>* _GameModeTypeList; // 0x10
		::RPG::Client::GamePlayLockTargetFunc* _PlayerControl; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* _OverrideFunctions; // 0x20
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x28
		::System::String* _ShortCutWheelDialog; // 0x30
		::RPG::Client::InputDataController* _InputController; // 0x38
		::RPG::GameCore::GameModeType _AdventrueModeType; // 0x40
		::System::Boolean _IsExitTopPageOrDialog; // 0x44
		::System::Boolean _IsBlocked_k__BackingField; // 0x45
		::System::Boolean _DisableAdventureInputHotKey; // 0x46
		::System::Boolean _IsLockInteractSelect; // 0x47
		::System::Boolean bInSafeZoom; // 0x48
		::System::Single _TickTime; // 0x4C
		::System::Single _MaxTickTime; // 0x50

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_TICK_OFFSET))(this, a1);
		}

		::System::Void RegisterOverriderAction(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_REGISTEROVERRIDERACTION_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterOverriderAction(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_UNREGISTEROVERRIDERACTION_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RegisterEasyTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__REGISTEREASYTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void _UnRegisterEasyTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__UNREGISTEREASYTOUCHEVENTS_OFFSET))(this);
		}

		::System::Boolean _CheckIsNeedShowCursor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__CHECKISNEEDSHOWCURSOR_OFFSET))(this);
		}

		::System::Void _TryShowOrClosePage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__TRYSHOWORCLOSEPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetGotoID(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETGOTOID_OFFSET))(this, a1);
		}

		::System::Boolean _IsCanShowWheel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWWHEEL_OFFSET))(this);
		}

		::System::Boolean _IsCanShowChessRogueWheel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWCHESSROGUEWHEEL_OFFSET))(this);
		}

		::System::UInt32 _GetActionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETACTIONTYPE_OFFSET))(this);
		}

		::System::Boolean _IsActionNameEnable(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISACTIONNAMEENABLE_OFFSET))(this, a1);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONUIINCONTROLTIPUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransitBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONMAZETOBATTLETRANSITBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnApplicationFocusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnDisableAdventureInputHotKey(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONDISABLEADVENTUREINPUTHOTKEY_OFFSET))(this, a1);
		}

		::System::Void _OnSimpleTap(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSIMPLETAP_OFFSET))(this, a1);
		}

		::System::Void _OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPESTART_OFFSET))(this, a1);
		}

		::System::Void _OnSwipe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPE_OFFSET))(this, a1);
		}

		::System::Void _OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPEEND_OFFSET))(this, a1);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void _OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHOUT_OFFSET))(this, a1);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHEND_OFFSET))(this, a1);
		}

		::System::Void _OnTouchDown(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHUP_OFFSET))(this, a1);
		}

		::System::Boolean _IsInSafeZoom(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISINSAFEZOOM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsBlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISBLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLockInteractSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISLOCKINTERACTSELECT_OFFSET))(this);
		}

		::System::Void set_IsLockInteractSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISLOCKINTERACTSELECT_OFFSET))(this, a1);
		}
	};
}
