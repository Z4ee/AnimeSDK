#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingWhiteListPredicateBase.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x192B7EC0)
#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x192B7F10)
#define MOLEMOLE_DEVICESETTINGDEVICEMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x192B7F90)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingDeviceModelPredicate_TypeDefinitionIndex = 68392;

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
