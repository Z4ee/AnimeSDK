#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingGradingPredicateBase.h"

#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0x17E54FB0)
#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E55000)
#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0x17E55080)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingVRAMPredicate_TypeDefinitionIndex = 57013;

	class DeviceSettingVRAMPredicate : public ::MoleMole::DeviceSettingGradingPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE_GETPREDICATEFLOAT_OFFSET))(this);
		}

		::System::Int32 __base_GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET))(this);
		}
	};
}
