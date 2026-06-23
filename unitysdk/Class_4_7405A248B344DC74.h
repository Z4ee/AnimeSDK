#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_884D1F4F7FF83019_1.h"

#define CLASS_4_7405A248B344DC74_METHOD_4_4555ABB7DF0C91BB_OFFSET UNITYSDK_OFFSET(0x1BD3E030)
#define CLASS_4_7405A248B344DC74__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3E020)

inline static constexpr unsigned int Class_4_7405A248B344DC74_TypeDefinitionIndex = 87874;

class Class_4_7405A248B344DC74 : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_884D1F4F7FF83019_1>
{
public:
	::System::Int32 Field_4_7; // 0x10
	::System::Int32 Field_4_2; // 0x14
	::System::Int32 Field_4_6; // 0x18
	::System::Int32 Field_4_5; // 0x1C
	::System::Boolean Field_4_8; // 0x20
	::System::Int32 Field_4_3; // 0x24
	::System::Int32 Field_4_4; // 0x28
	::System::Int32 Field_4_1; // 0x2C
	::System::Int32 Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7405A248B344DC74__CTOR_OFFSET))(this);
	}

	::Struct_2_884D1F4F7FF83019_1 Method_4_4555ABB7DF0C91BB(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_884D1F4F7FF83019_1(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_7405A248B344DC74_METHOD_4_4555ABB7DF0C91BB_OFFSET))(this, a1);
	}
};
