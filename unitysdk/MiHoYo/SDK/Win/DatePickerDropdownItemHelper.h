#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D1EBF50)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_START_OFFSET UNITYSDK_OFFSET(0x1D1EBEF0)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EBFB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownItemHelper_TypeDefinitionIndex = 21382;

	class DatePickerDropdownItemHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_ONDISABLE_OFFSET))(this);
		}
	};
}
