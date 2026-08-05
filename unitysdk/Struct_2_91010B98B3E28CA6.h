#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_017A98243226F3F1.h"
#include "unitysdk/Enum_3_0919313C5910BF49.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_91010B98B3E28CA6_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8630A0)
#define STRUCT_2_91010B98B3E28CA6_METHOD_2_99A99487F3F93C93_OFFSET UNITYSDK_OFFSET(0x8630F0)

inline static constexpr unsigned int Struct_2_91010B98B3E28CA6_TypeDefinitionIndex = 85646;

struct alignas(8) Struct_2_91010B98B3E28CA6
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_0; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::System::Int32 Field_2_6; // 0x30
	::System::Single Field_2_5; // 0x34
	::System::Int32 Field_2_4; // 0x38
	::System::Int32 Field_2_11; // 0x3C
	::Enum_3_017A98243226F3F1 Field_2_10; // 0x40
	::Enum_3_0919313C5910BF49 Field_2_9; // 0x44

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_91010B98B3E28CA6_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_99A99487F3F93C93(::Enum_3_0919313C5910BF49 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0919313C5910BF49, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_91010B98B3E28CA6_METHOD_2_99A99487F3F93C93_OFFSET))(this, a1, a2);
	}
};
