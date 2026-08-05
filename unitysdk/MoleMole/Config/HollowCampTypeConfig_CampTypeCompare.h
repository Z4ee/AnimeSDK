#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPECOMPARE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CF260)
#define MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPECOMPARE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CF2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCampTypeConfig_CampTypeCompare_TypeDefinitionIndex = 46129;

	struct alignas(1) HollowCampTypeConfig_CampTypeCompare
	{
		::System::Boolean Equals(::MoleMole::HollowEntityConfig_CampType a, ::MoleMole::HollowEntityConfig_CampType b)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPECOMPARE_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::MoleMole::HollowEntityConfig_CampType teamType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowEntityConfig_CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPECOMPARE_GETHASHCODE_OFFSET))(this, teamType);
		}
	};
}
