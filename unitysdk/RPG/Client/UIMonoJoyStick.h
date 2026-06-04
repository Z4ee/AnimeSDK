#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIMonoJoyStick_DragInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UIMonoJoyStick_JoyStickDragEvent; }
namespace RPG::Client { class UIMonoJoyStick_OutterPressState; }
namespace RPG::Client { class UIMonoJoyStick_UnpressState; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xCB6EC50)
#define RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xCB6EB30)
#define RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0xCB6EBC0)
#define RPG_CLIENT_UIMONOJOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB6F340)
#define RPG_CLIENT_UIMONOJOYSTICK_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xCB6F1B0)
#define RPG_CLIENT_UIMONOJOYSTICK_DISABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0xCB6FC70)
#define RPG_CLIENT_UIMONOJOYSTICK_ENABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0xCB70150)
#define RPG_CLIENT_UIMONOJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0xCB6ED60)
#define RPG_CLIENT_UIMONOJOYSTICK_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0xCB6ED10)
#define RPG_CLIENT_UIMONOJOYSTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB6F4B0)
#define RPG_CLIENT_UIMONOJOYSTICK_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xCB6F530)
#define RPG_CLIENT_UIMONOJOYSTICK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB6F460)
#define RPG_CLIENT_UIMONOJOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCB6F390)
#define RPG_CLIENT_UIMONOJOYSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0xCB6F9C0)
#define RPG_CLIENT_UIMONOJOYSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xCB6F780)
#define RPG_CLIENT_UIMONOJOYSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCB6F410)
#define RPG_CLIENT_UIMONOJOYSTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0xCB6EE00)
#define RPG_CLIENT_UIMONOJOYSTICK__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB70210)
#define RPG_CLIENT_UIMONOJOYSTICK__CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0xCB6F200)
#define RPG_CLIENT_UIMONOJOYSTICK__COMPUTEDRAGINFO_OFFSET UNITYSDK_OFFSET(0xCB6F840)
#define RPG_CLIENT_UIMONOJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0xCB701B0)
#define RPG_CLIENT_UIMONOJOYSTICK__INITVIEW_OFFSET UNITYSDK_OFFSET(0xCB6FCD0)
#define RPG_CLIENT_UIMONOJOYSTICK__INIT_OFFSET UNITYSDK_OFFSET(0xCB6EE50)
#define RPG_CLIENT_UIMONOJOYSTICK__ONPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB6F590)
#define RPG_CLIENT_UIMONOJOYSTICK__SETOUTTERPRESSANIMATOR_OFFSET UNITYSDK_OFFSET(0xCB70090)
#define RPG_CLIENT_UIMONOJOYSTICK__SETPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0xCB6FBB0)
#define RPG_CLIENT_UIMONOJOYSTICK__UPDATEPRESSDRAGHINT_OFFSET UNITYSDK_OFFSET(0xCB6FA10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_TypeDefinitionIndex = 68036;

	class UIMonoJoyStick : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_SpeedParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonoJoyStick_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		::UnityEngine::EventSystems::PointerEventData* _LastDragEventData; // 0x18
		::UnityEngine::RectTransform* _PressHintTransform; // 0x20
		::UnityEngine::RectTransform* _GraphicCastTransform; // 0x28
		::UnityEngine::Animator* _PressHintAnimator; // 0x30
		::UnityEngine::AnimatorStateInfo _AnimatorState; // 0x38
		::UnityEngine::UI::Image* _PressHintImage; // 0x60
		::System::Single _DragDistance; // 0x68
		::UnityEngine::Vector3 _CenterPos; // 0x6C
		::RPG::Common::StateMachine_1<::RPG::Client::UIMonoJoyStick*>* _StateMachine; // 0x78
		::RPG::Client::UIMonoJoyStick_UnpressState* _UnpressState; // 0x80
		::RPG::Client::UIMonoJoyStick_OutterPressState* _OutterPressState; // 0x88
		::System::Single _UIAngle; // 0x90
		::System::Single _CenterToHitDistancePow; // 0x94
		::System::Single _MaxDistance; // 0x98
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointDown; // 0xA0
		::UnityEngine::Events::UnityEvent* _OnJoyStickPointUp; // 0xA8
		::RPG::Client::UIMonoJoyStick_JoyStickDragEvent* _OnJoyStickDrag; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__CCTOR_OFFSET))();
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ADDJOYSTICKDRAGEVENT_OFFSET))(this, a1);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_GETUIANGLE_OFFSET))(this);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_DESPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void _UpdatePressDragHint(::RPG::Client::UIMonoJoyStick_DragInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick_DragInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__UPDATEPRESSDRAGHINT_OFFSET))(this, a1);
		}

		::System::Void _OnPointerUpCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__ONPOINTERUPCALLBACK_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__INIT_OFFSET))(this);
		}

		::RPG::Client::UIMonoJoyStick_DragInfo _ComputeDragInfo()
		{
			return ((::RPG::Client::UIMonoJoyStick_DragInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__COMPUTEDRAGINFO_OFFSET))(this);
		}

		::System::Void _ClearAllEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__CLEARALLEVENTS_OFFSET))(this);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__INITVIEW_OFFSET))(this);
		}

		::System::Void _SetPressDragHintView(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__SETPRESSDRAGHINTVIEW_OFFSET))(this, a1);
		}

		::System::Void _SetOutterPressAnimator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK__SETOUTTERPRESSANIMATOR_OFFSET))(this);
		}

		::System::Void EnablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_ENABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void DisablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_DISABLEPRESSHINTIMAGE_OFFSET))(this);
		}
	};
}
