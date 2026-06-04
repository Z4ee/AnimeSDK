#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x184B8630)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET UNITYSDK_OFFSET(0x184B8790)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_START_OFFSET UNITYSDK_OFFSET(0x184B8380)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184B8890)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x184B8880)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownHelper_TypeDefinitionIndex = 8946;

	class DatePickerDropdownHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_wasNeverSelected()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DatePickerDropdownHelper_TypeDefinitionIndex)->GetStaticField(0x9760);
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

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void RemoveTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET))(this);
		}
	};
}
