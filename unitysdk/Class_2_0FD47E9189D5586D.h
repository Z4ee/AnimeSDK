#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0FD47E9189D5586D_EventUsage.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_0FD47E9189D5586D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9D480)

inline static constexpr unsigned int Class_2_0FD47E9189D5586D_TypeDefinitionIndex = 24732;

class Class_2_0FD47E9189D5586D : public ::System::Attribute
{
public:
	::Class_2_0FD47E9189D5586D_EventUsage KFJFGFBMIJP; // 0x10

	::System::Void _ctor(::Class_2_0FD47E9189D5586D_EventUsage a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0FD47E9189D5586D_EventUsage))((::PBYTE)hIl2Cpp + CLASS_2_0FD47E9189D5586D__CTOR_OFFSET))(this, a1);
	}
};
