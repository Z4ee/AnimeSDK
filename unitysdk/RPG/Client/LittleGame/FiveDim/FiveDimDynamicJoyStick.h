#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimDynamicJoyStick_DragInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimDynamicJoyStick_JoyStickDragEvent; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x99AF5E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x99AF4E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x99AF560)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0x99AE570)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x99AEBA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x99AF480)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x99AF430)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x99AE620)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x99AE5D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x99AE190)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x99AE1E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x99AE080)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0x99AE4C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0x99AECF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__COMPUTEDRAGINFO_OFFSET UNITYSDK_OFFSET(0x99AE6C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x99AF680)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__GETWORLDPOSITIONFROMPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x99AE310)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__INITVIEW_OFFSET UNITYSDK_OFFSET(0x99AEE20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__INIT_OFFSET UNITYSDK_OFFSET(0x99AE520)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__ONRELEASE_OFFSET UNITYSDK_OFFSET(0x99AE0F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__UPDATEPRESSDRAGHINT_OFFSET UNITYSDK_OFFSET(0x99AE7C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicJoyStick_TypeDefinitionIndex = 62882;

	class FiveDimDynamicJoyStick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _CenterToHitDistancePow; // 0x18
		::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick_JoyStickDragEvent* _OnJoyStickDrag; // 0x20
		::UnityEngine::Transform* _JoyStick; // 0x28
		::UnityEngine::Vector2 _DefaultPos; // 0x30
		::UnityEngine::EventSystems::PointerEventData* _LastEventData; // 0x38
		::UnityEngine::RectTransform* _PressHintTransform; // 0x40
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointDown; // 0x48
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointUp; // 0x50
		::System::Single _UIAngle; // 0x58
		::System::Single _MaxRadius; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_DESPAWNED_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__INIT_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetWorldPositionFromPointerEvent(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__GETWORLDPOSITIONFROMPOINTEREVENT_OFFSET))(this, eventData);
		}

		::System::Void _OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__ONRELEASE_OFFSET))(this);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__INITVIEW_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHint(::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick_DragInfo dragInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick_DragInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__UPDATEPRESSDRAGHINT_OFFSET))(this, dragInfo);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick_DragInfo _ComputeDragInfo()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick_DragInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__COMPUTEDRAGINFO_OFFSET))(this);
		}

		::System::Void _ClearAllEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK__CLEARALLEVENTS_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_GETUIANGLE_OFFSET))(this);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET))(this, call);
		}
	};
}
