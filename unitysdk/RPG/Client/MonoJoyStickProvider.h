#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoJoyStickProvider_DragInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class InputDataController; }
namespace RPG::Client { class MonoJoyStickProvider_InnerPressState; }
namespace RPG::Client { class MonoJoyStickProvider_OutterPressState; }
namespace RPG::Client { class MonoJoyStickProvider_UnpressState; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACEBE40)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACEC740)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DISABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x1ACDF3F0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACECF10)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ENABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x1ACDF390)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x1ACED490)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x1ACDF340)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ACDF2F0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET__ISSTICKDOINPUTCTRL_OFFSET UNITYSDK_OFFSET(0x1ACED4B0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1ACEC8A0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACEC850)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACEC630)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1ACECC20)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1ACECAB0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1ACECBD0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x1ACED4A0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SET__ISSTICKDOINPUTCTRL_OFFSET UNITYSDK_OFFSET(0x1ACED4C0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACEC6F0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_TICK_OFFSET UNITYSDK_OFFSET(0x1ACECC70)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1ACECF50)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACED500)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__COMPUTEDRAGINFO_OFFSET UNITYSDK_OFFSET(0x1ACED130)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDF4E0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__INIT_OFFSET UNITYSDK_OFFSET(0x1ACEBE90)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1ACED010)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACEC900)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1ACEC790)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__TRIGGERSTICKEVENT_OFFSET UNITYSDK_OFFSET(0x1ACECB00)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0x1ACED3E0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINT_OFFSET UNITYSDK_OFFSET(0x1ACED2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_TypeDefinitionIndex = 61410;

	class MonoJoyStickProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_SpeedParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoJoyStickProvider_TypeDefinitionIndex)->GetStaticField(0x86D0);
		}
		// static const ::System::Single MaxDragTime; // 0x0
		::System::Boolean _IsDrag_k__BackingField; // 0x18
		::UnityEngine::EventSystems::PointerEventData* _LastDragEventData; // 0x20
		::System::Boolean __IsStickDoInputCtrl_k__BackingField; // 0x28
		::UnityEngine::Vector3 _CenterPos; // 0x2C
		::System::Single _DragToRunTime; // 0x38
		::RPG::Client::InputDataController* _InputController; // 0x40
		::RPG::Common::StateMachine_1<::RPG::Client::MonoJoyStickProvider*>* _StateMachine; // 0x48
		::UnityEngine::Animator* _PressHintAnimator; // 0x50
		::UnityEngine::AnimatorStateInfo _AnimatorState; // 0x58
		::UnityEngine::RectTransform* _PressHintTransform; // 0x80
		::UnityEngine::UI::Image* _PressHintImage; // 0x88
		::UnityEngine::RectTransform* _GraphicCastTransform; // 0x90
		::System::Single _MaxDistancePow; // 0x98
		::System::Single _WalkMaxRangePow; // 0x9C
		::System::Boolean _bDragToInput; // 0xA0
		::RPG::Client::MonoJoyStickProvider_UnpressState* _UnpressState; // 0xA8
		::RPG::Client::MonoJoyStickProvider_OutterPressState* _OutterPressState; // 0xB0
		::RPG::Client::MonoJoyStickProvider_InnerPressState* _InnerPressState; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_DISPOSE_OFFSET))(this);
		}

		::System::Void EnablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ENABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void DisablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_DISABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::RPG::Client::MonoJoyStickProvider_DragInfo _ComputeDragInfo()
		{
			return ((::RPG::Client::MonoJoyStickProvider_DragInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__COMPUTEDRAGINFO_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINT_OFFSET))(this, a1);
		}

		::System::Void _UpdatePressDragHintView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, a1);
		}

		::System::Void _TriggerStickEvent(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__TRIGGERSTICKEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnPointerUpCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_IsDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_ISDRAG_OFFSET))(this);
		}

		::System::Void set_IsDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_SET_ISDRAG_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_PressHintTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_PressHintImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Boolean get__IsStickDoInputCtrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_GET__ISSTICKDOINPUTCTRL_OFFSET))(this);
		}

		::System::Void set__IsStickDoInputCtrl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_SET__ISSTICKDOINPUTCTRL_OFFSET))(this, a1);
		}
	};
}
