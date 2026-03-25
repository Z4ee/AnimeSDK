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

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D12FB0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D13880)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DISABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x9D06CA0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D14080)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ENABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x9D06C40)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x9D14480)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x9D06BF0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_PRESSHINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9D06BA0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_GET__ISSTICKDOINPUTCTRL_OFFSET UNITYSDK_OFFSET(0x9D144A0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x9D13A30)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D13990)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D137E0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9D13D60)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9D13C10)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9D13D10)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x9D14490)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SET__ISSTICKDOINPUTCTRL_OFFSET UNITYSDK_OFFSET(0x9D144B0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D13830)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_TICK_OFFSET UNITYSDK_OFFSET(0x9D13DB0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D140C0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D144F0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__COMPUTEDRAGINFO_OFFSET UNITYSDK_OFFSET(0x9D14240)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D06D70)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__INIT_OFFSET UNITYSDK_OFFSET(0x9D13000)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9D14130)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D13A90)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D13920)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__TRIGGERSTICKEVENT_OFFSET UNITYSDK_OFFSET(0x9D13C60)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0x9D06E80)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINT_OFFSET UNITYSDK_OFFSET(0x9D143E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_TypeDefinitionIndex = 49721;

	class MonoJoyStickProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_SpeedParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoJoyStickProvider_TypeDefinitionIndex)->GetStaticField(0x11370);
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

		::System::Void OnApplicationPause(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET))(this, pause);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_TICK_OFFSET))(this, fElapsedTimeInSec);
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

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::RPG::Client::MonoJoyStickProvider_DragInfo _ComputeDragInfo()
		{
			return ((::RPG::Client::MonoJoyStickProvider_DragInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__COMPUTEDRAGINFO_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHint(::System::Single uiAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINT_OFFSET))(this, uiAngle);
		}

		::System::Void _UpdatePressDragHintView(::System::Single uiAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, uiAngle);
		}

		::System::Void _TriggerStickEvent(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__TRIGGERSTICKEVENT_OFFSET))(this, eventData);
		}

		::System::Void _OnPointerUpCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_IsDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_GET_ISDRAG_OFFSET))(this);
		}

		::System::Void set_IsDrag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_SET_ISDRAG_OFFSET))(this, value);
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

		::System::Void set__IsStickDoInputCtrl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_SET__ISSTICKDOINPUTCTRL_OFFSET))(this, value);
		}
	};
}
