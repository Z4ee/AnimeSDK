#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ECDFDB3BB25317A1_Enum_3_36205909DE2B3D08.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_ECDFDB3BB25317A1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7030F0)
#define STRUCT_2_ECDFDB3BB25317A1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x703140)
#define STRUCT_2_ECDFDB3BB25317A1__CTOR_OFFSET UNITYSDK_OFFSET(0x3EABD0)

inline static constexpr unsigned int Struct_2_ECDFDB3BB25317A1_TypeDefinitionIndex = 59151;

struct alignas(4) Struct_2_ECDFDB3BB25317A1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Struct_2_ECDFDB3BB25317A1_Enum_3_36205909DE2B3D08 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::Struct_2_ECDFDB3BB25317A1_Enum_3_36205909DE2B3D08 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Struct_2_ECDFDB3BB25317A1_Enum_3_36205909DE2B3D08))((::PBYTE)hIl2Cpp + STRUCT_2_ECDFDB3BB25317A1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ECDFDB3BB25317A1_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ECDFDB3BB25317A1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
