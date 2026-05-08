#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1E2C28EB5494586C.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_D3724A6FC1000E38_METHOD_3_039A07DBEE2BD62B_OFFSET UNITYSDK_OFFSET(0x11416610)
#define CLASS_3_D3724A6FC1000E38_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x11416750)
#define CLASS_3_D3724A6FC1000E38__CTOR_OFFSET UNITYSDK_OFFSET(0x11416600)

inline static constexpr unsigned int Class_3_D3724A6FC1000E38_TypeDefinitionIndex = 73234;

class Class_3_D3724A6FC1000E38 : public ::Class_2_1E2C28EB5494586C
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D3724A6FC1000E38__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_039A07DBEE2BD62B(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D3724A6FC1000E38_METHOD_3_039A07DBEE2BD62B_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D3724A6FC1000E38_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
