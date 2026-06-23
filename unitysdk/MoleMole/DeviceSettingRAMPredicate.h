#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingGradingPredicateBase.h"

#define MOLEMOLE_DEVICESETTINGRAMPREDICATE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0x190D4BF0)
#define MOLEMOLE_DEVICESETTINGRAMPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4C40)
#define MOLEMOLE_DEVICESETTINGRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0x190D4CC0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingRAMPredicate_TypeDefinitionIndex = 80337;

	class DeviceSettingRAMPredicate : public ::MoleMole::DeviceSettingGradingPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGRAMPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGRAMPREDICATE_GETPREDICATEFLOAT_OFFSET))(this);
		}

		::System::Int32 __base_GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET))(this);
		}
	};
}
