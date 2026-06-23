#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LEAVESDATA_INT2__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int LeavesData_int2_TypeDefinitionIndex = 26919;

struct alignas(4) LeavesData_int2
{
	::System::Int32 x; // 0x10
	::System::Int32 y; // 0x14

	::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEAVESDATA_INT2__CTOR_OFFSET))(this, x, y);
	}
};
