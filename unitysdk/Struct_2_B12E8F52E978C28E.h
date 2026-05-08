#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_129539E974EC31DA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B12E8F52E978C28E_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x94FA50)
#define STRUCT_2_B12E8F52E978C28E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94FA40)

inline static constexpr unsigned int Struct_2_B12E8F52E978C28E_TypeDefinitionIndex = 83326;

struct alignas(4) Struct_2_B12E8F52E978C28E
{
	::System::UInt32 Field_2_0; // 0x10
	::Enum_3_129539E974EC31DA Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B12E8F52E978C28E_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B12E8F52E978C28E_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
