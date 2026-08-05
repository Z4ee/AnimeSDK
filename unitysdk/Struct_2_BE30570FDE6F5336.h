#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BE30570FDE6F5336_EQUALS_OFFSET UNITYSDK_OFFSET(0x80FAF0)
#define STRUCT_2_BE30570FDE6F5336_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x80FB50)

inline static constexpr unsigned int Struct_2_BE30570FDE6F5336_TypeDefinitionIndex = 42554;

struct alignas(1) Struct_2_BE30570FDE6F5336
{
	::System::Boolean Equals(::MoleMole::Config::BuffGroupName a1, ::MoleMole::Config::BuffGroupName a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + STRUCT_2_BE30570FDE6F5336_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::BuffGroupName a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + STRUCT_2_BE30570FDE6F5336_GETHASHCODE_OFFSET))(this, a1);
	}
};
