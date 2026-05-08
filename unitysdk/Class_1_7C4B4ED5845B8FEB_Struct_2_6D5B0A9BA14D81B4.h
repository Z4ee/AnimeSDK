#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_7C4B4ED5845B8FEB_STRUCT_2_6D5B0A9BA14D81B4_EQUALS_OFFSET UNITYSDK_OFFSET(0x692600)
#define CLASS_1_7C4B4ED5845B8FEB_STRUCT_2_6D5B0A9BA14D81B4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x692660)

inline static constexpr unsigned int Class_1_7C4B4ED5845B8FEB_Struct_2_6D5B0A9BA14D81B4_TypeDefinitionIndex = 52141;

struct alignas(1) Class_1_7C4B4ED5845B8FEB_Struct_2_6D5B0A9BA14D81B4
{
	::System::Boolean Equals(::MoleMole::Config::InputType a1, ::MoleMole::Config::InputType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_1_7C4B4ED5845B8FEB_STRUCT_2_6D5B0A9BA14D81B4_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::InputType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_1_7C4B4ED5845B8FEB_STRUCT_2_6D5B0A9BA14D81B4_GETHASHCODE_OFFSET))(this, a1);
	}
};
