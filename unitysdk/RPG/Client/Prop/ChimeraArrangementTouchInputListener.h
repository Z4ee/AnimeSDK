#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client::Prop { class ChimeraArrangementSceneOperator; }
namespace RPG::Client::Prop { class ChimeraArrangementSlot; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA034EB0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA037360)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_INIT_OFFSET UNITYSDK_OFFSET(0xA034A10)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_TICK_OFFSET UNITYSDK_OFFSET(0xA034C00)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xA034A00)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONOVERUI_OFFSET UNITYSDK_OFFSET(0xA0376B0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xA037600)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xA0374A0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPE_OFFSET UNITYSDK_OFFSET(0xA037550)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xA0373A0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONUITOUCHUP_OFFSET UNITYSDK_OFFSET(0xA037760)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__REGISTERTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xA0368C0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__UNREGISTERTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xA036D60)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__UPDATEPOINTING_OFFSET UNITYSDK_OFFSET(0xA037200)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementTouchInputListener_TypeDefinitionIndex = 63908;

	class ChimeraArrangementTouchInputListener : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Vector2>* OnDrop; // 0x10
		::RPG::Client::Prop::ChimeraArrangementSceneOperator* _SceneOperator; // 0x18
		::System::Action_1<::UnityEngine::Vector2>* OnDragStart; // 0x20
		::System::Action_1<::UnityEngine::Vector2>* OnDragMove; // 0x28
		::RPG::Client::Prop::ChimeraArrangementSlot* _LastPointedSlot; // 0x30
		::System::Action_1<::UnityEngine::Vector2>* OnTouchStart; // 0x38
		::UnityEngine::Vector2 _LastPointedScreenPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::ChimeraArrangementSceneOperator* sceneOperator)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementSceneOperator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_INIT_OFFSET))(this, sceneOperator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_TICK_OFFSET))(this);
		}

		::System::Void _UpdatePointing(::UnityEngine::Vector2 screenPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__UPDATEPOINTING_OFFSET))(this, screenPoint);
		}

		::UnityEngine::Vector2 GetPointerPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER_GETPOINTERPOSITION_OFFSET))(this);
		}

		::System::Void _RegisterTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__REGISTERTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void _UnregisterTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__UNREGISTERTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void _OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONTOUCHSTART_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPESTART_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPE_OFFSET))(this, gesture);
		}

		::System::Void _OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONSWIPEEND_OFFSET))(this, gesture);
		}

		::System::Void _OnOverUI(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONOVERUI_OFFSET))(this, gesture);
		}

		::System::Void _OnUITouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTTOUCHINPUTLISTENER__ONUITOUCHUP_OFFSET))(this, gesture);
		}
	};
}
