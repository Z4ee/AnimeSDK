#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define INTEGERRECTANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x822E30)
#define INTEGERRECTANGLE_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define INTEGERRECTANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x822E00)

inline static constexpr unsigned int IntegerRectangle_TypeDefinitionIndex = 29631;

struct alignas(4) IntegerRectangle
{
	::System::Int32 x; // 0x10
	::System::Int32 y; // 0x14
	::System::Int32 width; // 0x18
	::System::Int32 height; // 0x1C
	::System::Int32 right; // 0x20
	::System::Int32 bottom; // 0x24
	::System::Int32 id; // 0x28
	::System::Boolean isInitialized; // 0x2C

	::System::Void _ctor(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INTEGERRECTANGLE__CTOR_OFFSET))(this, x, y, width, height);
	}

	::System::Boolean get_IsInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTEGERRECTANGLE_GET_ISINITIALIZED_OFFSET))(this);
	}

	::System::Boolean Equals(::IntegerRectangle other)
	{
		return ((::System::Boolean(*)(::PVOID, ::IntegerRectangle))((::PBYTE)hIl2Cpp + INTEGERRECTANGLE_EQUALS_OFFSET))(this, other);
	}
};
