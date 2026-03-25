#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA77CD70)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA77CAC0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA77CC50)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET UNITYSDK_OFFSET(0xA77CE10)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA77CF40)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA77CFB0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA77CA20)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA77CA70)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA77D020)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorSimulateTouchActionWrapper_TypeDefinitionIndex = 60033;

	class VirtualCursorSimulateTouchActionWrapper : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* _OnPointerUp; // 0x10
		::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* _OnPointerPress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void SetOnPointerPress(::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* onPointerPress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET))(this, onPointerPress);
		}

		::System::Void SetOnPointerUp(::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* onPointerUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET))(this, onPointerUp);
		}

		::System::Void ExecutePointerPress(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void ExecutePointerUp(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void ExecutePointerClick(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void ExecuteSubmit(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerPress(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerUp(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET))(this, gameObject, pointerEvent);
		}
	};
}
