#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MonoFiveDimFixedJoyStick_DragInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::LittleGame::FiveDim { class MonoFiveDimFixedJoyStick_JoyStickDragEvent; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x99FA260)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x99FA050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x99FA180)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A1BA50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9A1B780)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x99F9E60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x99F9F50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__CENTERPOS_OFFSET UNITYSDK_OFFSET(0x9A1C390)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__INPUTRADIUSSCREEN_OFFSET UNITYSDK_OFFSET(0x9A1C090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__UISIZE_OFFSET UNITYSDK_OFFSET(0x9A1B640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A1BB00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A1BAB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9A1B4F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9A1B540)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9A1B400)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0x99FA360)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0x9A1B8D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CLEARINFO_OFFSET UNITYSDK_OFFSET(0x9A1B5F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__COMPUTEDRAGINFO_OFFSET UNITYSDK_OFFSET(0x9A1BC00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1C4E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__INITVIEW_OFFSET UNITYSDK_OFFSET(0x9A1C180)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__INIT_OFFSET UNITYSDK_OFFSET(0x9A1BA00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ISDISTANCEVALID_OFFSET UNITYSDK_OFFSET(0x9A1BD10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONBEGININPUTVALID_OFFSET UNITYSDK_OFFSET(0x9A1BF80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONDRAGINPUTVALID_OFFSET UNITYSDK_OFFSET(0x9A1BFD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONENDINPUTVALID_OFFSET UNITYSDK_OFFSET(0x9A1B460)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimFixedJoyStick_TypeDefinitionIndex = 62898;

	class MonoFiveDimFixedJoyStick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _CenterToHitDistancePow; // 0x18
		::UnityEngine::Transform* _JoyStick; // 0x20
		::UnityEngine::EventSystems::PointerEventData* _LastEventData; // 0x28
		::UnityEngine::RectTransform* _CenterTransform; // 0x30
		::UnityEngine::RectTransform* _BtnTransform; // 0x38
		::System::Single _UIAngle; // 0x40
		::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick_JoyStickDragEvent* _OnJoyStickDrag; // 0x48
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointDown; // 0x50
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointUp; // 0x58
		::System::Boolean _IsDragging; // 0x60
		::System::Single InputRadius; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GETUIANGLE_OFFSET))(this);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET))(this, call);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnBeginInputValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONBEGININPUTVALID_OFFSET))(this);
		}

		::System::Void _OnEndInputValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONENDINPUTVALID_OFFSET))(this);
		}

		::System::Void _OnDragInputValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ONDRAGINPUTVALID_OFFSET))(this);
		}

		::System::Boolean _IsDistanceValid(::System::Single centerToHitDistancePow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__ISDISTANCEVALID_OFFSET))(this, centerToHitDistancePow);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__INITVIEW_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__INIT_OFFSET))(this);
		}

		::System::Void _ClearInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CLEARINFO_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick_DragInfo _ComputeDragInfo()
		{
			return ((::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick_DragInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__COMPUTEDRAGINFO_OFFSET))(this);
		}

		::System::Void _ClearAllEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK__CLEARALLEVENTS_OFFSET))(this);
		}

		::System::Single get__UISize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__UISIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get__CenterPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__CENTERPOS_OFFSET))(this);
		}

		::System::Single get__InputRadiusScreen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_GET__INPUTRADIUSSCREEN_OFFSET))(this);
		}
	};
}
