#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xCC25AD0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xCC25880)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCC259F0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET UNITYSDK_OFFSET(0xCC25B70)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xCC25CA0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCC25D20)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xCC257E0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCC25830)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC25DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorSimulateTouchActionWrapper_TypeDefinitionIndex = 68383;

	class VirtualCursorSimulateTouchActionWrapper : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* _OnPointerPress; // 0x10
		::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* _OnPointerUp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void SetOnPointerPress(::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET))(this, a1);
		}

		::System::Void SetOnPointerUp(::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void ExecutePointerPress(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void ExecutePointerUp(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET))(this, a1, a2);
		}

		::System::Void ExecutePointerClick(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteSubmit(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerPress(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerUp(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET))(this, a1, a2);
		}
	};
}
