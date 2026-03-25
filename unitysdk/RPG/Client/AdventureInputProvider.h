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

#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902DDF0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x902F190)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0x902F1B0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_REGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0x902DCE0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x902F1A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0x902F1C0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_TICK_OFFSET UNITYSDK_OFFSET(0x902C030)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_UNREGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0x902DD80)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x902BF20)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CHECKISNEEDSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x902D5B0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x902B6A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x902E930)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETGOTOID_OFFSET UNITYSDK_OFFSET(0x902E750)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISACTIONNAMEENABLE_OFFSET UNITYSDK_OFFSET(0x902E5E0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWCHESSROGUEWHEEL_OFFSET UNITYSDK_OFFSET(0x902DA20)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWWHEEL_OFFSET UNITYSDK_OFFSET(0x902D980)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISINSAFEZOOM_OFFSET UNITYSDK_OFFSET(0x902ED30)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x902EA80)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONDISABLEADVENTUREINPUTHOTKEY_OFFSET UNITYSDK_OFFSET(0x902EB50)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0x902EA20)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x902EFE0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x902EF00)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0x902EF70)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSIMPLETAP_OFFSET UNITYSDK_OFFSET(0x902EC50)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0x902EE90)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0x902ECA0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPE_OFFSET UNITYSDK_OFFSET(0x902EE10)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x902F040)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0x902F0E0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0x902E990)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x902B8A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x902E4D0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__TRYSHOWORCLOSEPAGE_OFFSET UNITYSDK_OFFSET(0x902DB00)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__UNREGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x902DE50)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureInputProvider_TypeDefinitionIndex = 49713;

	class AdventureInputProvider : public ::System::Object
	{
	public:
		// static const ::System::Single _TopSafeZoomPix; // 0x0
		// static const ::System::Single _BottomSafeZoomPix; // 0x0
		// static const ::System::Single _SideSafeZoomPix; // 0x0
		::System::String* _ShortCutWheelDialog; // 0x10
		::RPG::Client::GamePlayLockTargetFunc* _PlayerControl; // 0x18
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x20
		::RPG::Client::InputDataController* _InputController; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameModeType>* _GameModeTypeList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* _OverrideFunctions; // 0x38
		::RPG::GameCore::GameModeType _AdventrueModeType; // 0x40
		::System::Single _TickTime; // 0x44
		::System::Single _MaxTickTime; // 0x48
		::System::Boolean _IsLockInteractSelect; // 0x4C
		::System::Boolean _IsExitTopPageOrDialog; // 0x4D
		::System::Boolean _IsBlocked_k__BackingField; // 0x4E
		::System::Boolean _DisableAdventureInputHotKey; // 0x4F
		::System::Boolean bInSafeZoom; // 0x50

		::System::Void _ctor(::RPG::Client::AdventurePhase* adventurePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__CTOR_OFFSET))(this, adventurePhase);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void RegisterOverriderAction(::System::String* actionName, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_REGISTEROVERRIDERACTION_OFFSET))(this, actionName, action);
		}

		::System::Void UnRegisterOverriderAction(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_UNREGISTEROVERRIDERACTION_OFFSET))(this, actionName);
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

		::System::Void _TryShowOrClosePage(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__TRYSHOWORCLOSEPAGE_OFFSET))(this, actionName);
		}

		::System::UInt32 _GetGotoID(::System::String* actionName)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETGOTOID_OFFSET))(this, actionName);
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

		::System::Boolean _IsActionNameEnable(::System::String* actionName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISACTIONNAMEENABLE_OFFSET))(this, actionName);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONUIINCONTROLTIPUPDATE_OFFSET))(this, args);
		}

		::System::Void _OnMazeToBattleTransitBegin(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONMAZETOBATTLETRANSITBEGIN_OFFSET))(this, args);
		}

		::System::Void _OnApplicationFocusChange(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, args);
		}

		::System::Void _OnDisableAdventureInputHotKey(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONDISABLEADVENTUREINPUTHOTKEY_OFFSET))(this, args);
		}

		::System::Void _OnSimpleTap(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSIMPLETAP_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPESTART_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPE_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPEEND_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHIN_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHEND_OFFSET))(this, gesture);
		}

		::System::Void _OnTouchDown(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHDOWN_OFFSET))(this, gesture);
		}

		::System::Void _OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHUP_OFFSET))(this, gesture);
		}

		::System::Boolean _IsInSafeZoom(::UnityEngine::Vector2 startPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISINSAFEZOOM_OFFSET))(this, startPosition);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsBlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISBLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsLockInteractSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISLOCKINTERACTSELECT_OFFSET))(this);
		}

		::System::Void set_IsLockInteractSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISLOCKINTERACTSELECT_OFFSET))(this, value);
		}
	};
}
