#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BD65AD99BDCA7B7E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x799C40)
#define STRUCT_2_BD65AD99BDCA7B7E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x799CA0)

inline static constexpr unsigned int Struct_2_BD65AD99BDCA7B7E_1_TypeDefinitionIndex = 55808;

struct alignas(1) Struct_2_BD65AD99BDCA7B7E_1
{
	::System::Boolean Equals(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + STRUCT_2_BD65AD99BDCA7B7E_1_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::BaseProperty a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + STRUCT_2_BD65AD99BDCA7B7E_1_GETHASHCODE_OFFSET))(this, a1);
	}
};
