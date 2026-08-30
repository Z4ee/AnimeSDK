#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5674E7B417F2830A_GET_X_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_5674E7B417F2830A_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E120)
#define STRUCT_2_5674E7B417F2830A_SET_X_OFFSET UNITYSDK_OFFSET(0x2E950)
#define STRUCT_2_5674E7B417F2830A_SET_Y_OFFSET UNITYSDK_OFFSET(0x2200)
#define STRUCT_2_5674E7B417F2830A__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_TypeDefinitionIndex = 36528;

struct alignas(4) Struct_2_5674E7B417F2830A
{
	::System::Int32 _x_k__BackingField; // 0x10
	::System::Int32 _y_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_x()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_GET_X_OFFSET))(this);
	}

	::System::Void set_x(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_SET_X_OFFSET))(this, a1);
	}

	::System::Int32 get_y()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_GET_Y_OFFSET))(this);
	}

	::System::Void set_y(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_SET_Y_OFFSET))(this, a1);
	}
};
