#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_12121D6A4A8DB72D__CTOR_OFFSET UNITYSDK_OFFSET(0x6BA310)

inline static constexpr unsigned int Struct_2_12121D6A4A8DB72D_TypeDefinitionIndex = 80727;

struct alignas(4) Struct_2_12121D6A4A8DB72D
{
	::System::UInt32 IDBDBICPBBG; // 0x10
	::System::Boolean DHHGLHOOCMA; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_12121D6A4A8DB72D__CTOR_OFFSET))(this, a1, a2);
	}
};
