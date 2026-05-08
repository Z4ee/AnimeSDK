#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_55AD8E2146FD678C.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6172DDE565A7A661__CTOR_OFFSET UNITYSDK_OFFSET(0x3B3A10)

inline static constexpr unsigned int Struct_2_6172DDE565A7A661_TypeDefinitionIndex = 79476;

struct alignas(8) Struct_2_6172DDE565A7A661
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_0; // 0x10
	::Struct_2_55AD8E2146FD678C Field_2_1; // 0x20

	::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle a1, ::Struct_2_55AD8E2146FD678C a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Struct_2_55AD8E2146FD678C))((::PBYTE)hIl2Cpp + STRUCT_2_6172DDE565A7A661__CTOR_OFFSET))(this, a1, a2);
	}
};
