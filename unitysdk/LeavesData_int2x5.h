#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LeavesData_int2.h"
#include "unitysdk/System/ValueType.h"

#define LEAVESDATA_INT2X5_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0D0C0)
#define LEAVESDATA_INT2X5__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1A00)

inline static constexpr unsigned int LeavesData_int2x5_TypeDefinitionIndex = 27033;

struct alignas(4) LeavesData_int2x5
{
	::LeavesData_int2 e0; // 0x10
	::LeavesData_int2 e1; // 0x18
	::LeavesData_int2 e2; // 0x20
	::LeavesData_int2 e3; // 0x28
	::LeavesData_int2 e4; // 0x30

	::System::Void _ctor(::LeavesData_int2 a, ::LeavesData_int2 b, ::LeavesData_int2 c, ::LeavesData_int2 d, ::LeavesData_int2 e)
	{
		return ((::System::Void(*)(::PVOID, ::LeavesData_int2, ::LeavesData_int2, ::LeavesData_int2, ::LeavesData_int2, ::LeavesData_int2))((::PBYTE)hIl2Cpp + LEAVESDATA_INT2X5__CTOR_OFFSET))(this, a, b, c, d, e);
	}

	::LeavesData_int2 get_Item(::System::Int32 i)
	{
		return ((::LeavesData_int2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEAVESDATA_INT2X5_GET_ITEM_OFFSET))(this, i);
	}
};
