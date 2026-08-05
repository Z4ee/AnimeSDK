#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_45B62668F0BA5CF8__CTOR_OFFSET UNITYSDK_OFFSET(0x8812D0)

inline static constexpr unsigned int Struct_2_45B62668F0BA5CF8_TypeDefinitionIndex = 64131;

struct alignas(1) Struct_2_45B62668F0BA5CF8
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x11
	::System::Boolean Field_2_6; // 0x12
	::System::Boolean Field_2_5; // 0x13
	::System::Boolean Field_2_4; // 0x14

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_45B62668F0BA5CF8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
