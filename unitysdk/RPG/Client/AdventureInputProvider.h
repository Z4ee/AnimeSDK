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

#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19655FA0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x196574B0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_GET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0x196574D0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_REGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0x19655E90)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x196574C0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_SET_ISLOCKINTERACTSELECT_OFFSET UNITYSDK_OFFSET(0x196574E0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_TICK_OFFSET UNITYSDK_OFFSET(0x19654200)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER_UNREGISTEROVERRIDERACTION_OFFSET UNITYSDK_OFFSET(0x19655F30)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x196540A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CHECKISNEEDSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x19655480)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19653710)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19656C30)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__GETGOTOID_OFFSET UNITYSDK_OFFSET(0x19656A70)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISACTIONNAMEENABLE_OFFSET UNITYSDK_OFFSET(0x19656900)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWCHESSROGUEWHEEL_OFFSET UNITYSDK_OFFSET(0x19655BA0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISCANSHOWWHEEL_OFFSET UNITYSDK_OFFSET(0x19655B00)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ISINSAFEZOOM_OFFSET UNITYSDK_OFFSET(0x19657040)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x19656D80)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONDISABLEADVENTUREINPUTHOTKEY_OFFSET UNITYSDK_OFFSET(0x19656E50)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0x19656D20)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x19657300)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x19657220)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0x19657290)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSIMPLETAP_OFFSET UNITYSDK_OFFSET(0x19656F60)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0x196571B0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0x19656FB0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONSWIPE_OFFSET UNITYSDK_OFFSET(0x19657130)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x19657360)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0x19657400)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0x19656C90)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x19653900)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x196567A0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__TRYSHOWORCLOSEPAGE_OFFSET UNITYSDK_OFFSET(0x19655CC0)
#define RPG_CLIENT_ADVENTUREINPUTPROVIDER__UNREGISTEREASYTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x19656000)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureInputProvider_TypeDefinitionIndex = 61401;

	class AdventureInputProvider : public ::System::Object
	{
	public:
		// static const ::System::Single _TopSafeZoomPix; // 0x0
		// static const ::System::Single _BottomSafeZoomPix; // 0x0
		// static const ::System::Single _SideSafeZoomPix; // 0x0
		::RPG::Client::GamePlayLockTargetFunc* _PlayerControl; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* _OverrideFunctions; // 0x18
		::RPG::Client::InputDataController* _InputController; // 0x20
		::System::String* _ShortCutWheelDialog; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameModeType>* _GameModeTypeList; // 0x30
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x38
		::RPG::GameCore::GameModeType _AdventrueModeType; // 0x40
		::System::Boolean _DisableAdventureInputHotKey; // 0x44
		::System::Boolean _IsBlocked_k__BackingField; // 0x45
		::System::Boolean _IsLockInteractSelect; // 0x46
		::System::Single _MaxTickTime; // 0x48
		::System::Single _TickTime; // 0x4C
		::System::Boolean bInSafeZoom; // 0x50
		::System::Boolean _IsExitTopPageOrDialog; // 0x51

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
