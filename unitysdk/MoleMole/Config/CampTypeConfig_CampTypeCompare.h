#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPECOMPARE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7932C0)
#define MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPECOMPARE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x793320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampTypeConfig_CampTypeCompare_TypeDefinitionIndex = 59170;

	struct alignas(1) CampTypeConfig_CampTypeCompare
	{
		::System::Boolean Equals(::MoleMole::Config::CampType a, ::MoleMole::Config::CampType b)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPECOMPARE_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::MoleMole::Config::CampType teamType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPECOMPARE_GETHASHCODE_OFFSET))(this, teamType);
		}
	};
}
