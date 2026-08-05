#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_91F712A77842FECF_EQUALS_OFFSET UNITYSDK_OFFSET(0x8307A0)
#define STRUCT_2_91F712A77842FECF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x830800)

inline static constexpr unsigned int Struct_2_91F712A77842FECF_TypeDefinitionIndex = 82805;

struct alignas(1) Struct_2_91F712A77842FECF
{
	::System::Boolean Equals(::MoleMole::Config::TeamProperty a1, ::MoleMole::Config::TeamProperty a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TeamProperty, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + STRUCT_2_91F712A77842FECF_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::TeamProperty a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + STRUCT_2_91F712A77842FECF_GETHASHCODE_OFFSET))(this, a1);
	}
};
