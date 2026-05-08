#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingWhiteListPredicateBase.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x11CC2280)
#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC22D0)
#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x11CC2350)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingDeviceModelPredicate_TypeDefinitionIndex = 53977;

	class DeviceSettingDeviceModelPredicate : public ::MoleMole::DeviceSettingWhiteListPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE__CTOR_OFFSET))(this);
		}

		::System::String* GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE_GETPREDICATESTRING_OFFSET))(this);
		}

		::System::String* __base_GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET))(this);
		}
	};
}
