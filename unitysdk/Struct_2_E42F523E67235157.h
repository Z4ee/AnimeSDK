#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E42F523E67235157_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3B74F10)
#define STRUCT_2_E42F523E67235157__CTOR_OFFSET UNITYSDK_OFFSET(0x3B74EF0)

inline static constexpr unsigned int Struct_2_E42F523E67235157_TypeDefinitionIndex = 36587;

struct alignas(4) Struct_2_E42F523E67235157
{
	::System::Boolean HPGAOBONHOK; // 0x10
	::RPG::MVector3 PMPIDAPFIHE; // 0x14
	::System::Int32 JEJNAIFAMKO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E42F523E67235157__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E42F523E67235157_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
