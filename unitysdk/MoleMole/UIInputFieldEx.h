#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace MoleMole { class UIInputFieldEx_Class_1_640B090AA43C41B2; }
namespace System { class Action; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_UIINPUTFIELDEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x164F0210)
#define MOLEMOLE_UIINPUTFIELDEX_BIND_OFFSET UNITYSDK_OFFSET(0x164F0480)
#define MOLEMOLE_UIINPUTFIELDEX_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x164F03F0)
#define MOLEMOLE_UIINPUTFIELDEX_METHOD_8_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x164F0810)
#define MOLEMOLE_UIINPUTFIELDEX_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x164F0340)
#define MOLEMOLE_UIINPUTFIELDEX_ONSELECT_OFFSET UNITYSDK_OFFSET(0x164F0280)
#define MOLEMOLE_UIINPUTFIELDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x164F0630)
#define MOLEMOLE_UIINPUTFIELDEX___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x164F0690)
#define MOLEMOLE_UIINPUTFIELDEX___BASE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x164F06A0)
#define MOLEMOLE_UIINPUTFIELDEX___BASE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x164F0750)

namespace MoleMole
{
	inline static constexpr unsigned int UIInputFieldEx_TypeDefinitionIndex = 74008;

	class UIInputFieldEx : public ::UnityEngine::UI::InputField
	{
	public:
		::System::Action* onSelect; // 0x210
		::System::Action* onDeselect; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_AWAKE_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void CancelSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CANCELSELECT_OFFSET))(this);
		}

		::System::Void Bind(::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_BIND_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX___BASE_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void __base_OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX___BASE_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void Method_8_3923AB821AB9D6A6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_METHOD_8_3923AB821AB9D6A6_OFFSET))(this, a1);
		}
	};
}
