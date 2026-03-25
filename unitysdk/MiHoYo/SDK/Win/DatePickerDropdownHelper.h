#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x160972D0)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET UNITYSDK_OFFSET(0x16097430)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_START_OFFSET UNITYSDK_OFFSET(0x16097020)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16097500)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x160974F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownHelper_TypeDefinitionIndex = 7897;

	class DatePickerDropdownHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_wasNeverSelected()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DatePickerDropdownHelper_TypeDefinitionIndex)->GetStaticField(0x5CE0);
		}
		::System::Boolean collapse; // 0x18
		::UnityEngine::UI::Dropdown* dropdown; // 0x20
		::UnityEngine::UI::Text* placeholder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_START_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void RemoveTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET))(this);
		}
	};
}
