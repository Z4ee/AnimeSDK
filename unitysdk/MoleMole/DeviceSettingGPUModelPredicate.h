#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingWhiteListPredicateBase.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x1A00F460)
#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00F4B0)
#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x1A00F530)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingGPUModelPredicate_TypeDefinitionIndex = 84960;

	class DeviceSettingGPUModelPredicate : public ::MoleMole::DeviceSettingWhiteListPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE__CTOR_OFFSET))(this);
		}

		::System::String* GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE_GETPREDICATESTRING_OFFSET))(this);
		}

		::System::String* __base_GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET))(this);
		}
	};
}
