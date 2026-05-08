#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22B2F014E35FF7B5.h"
#include "unitysdk/Enum_3_288493BC643C59D0.h"
#include "unitysdk/Enum_3_7890D53463A7CFCB.h"
#include "unitysdk/Enum_3_86C36EB274E242B5.h"
#include "unitysdk/Enum_3_9D7DEE786F49D757.h"
#include "unitysdk/Enum_3_D4E63EB04ADBFF01.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_09CD725EF8C17A8A_METHOD_1_4F8A1085DD8C2097_OFFSET UNITYSDK_OFFSET(0xBE0D7D0)
#define CLASS_1_09CD725EF8C17A8A_METHOD_1_644BB790D5F70195_1_OFFSET UNITYSDK_OFFSET(0xBE0D960)
#define CLASS_1_09CD725EF8C17A8A_METHOD_1_644BB790D5F70195_OFFSET UNITYSDK_OFFSET(0xBE0D490)
#define CLASS_1_09CD725EF8C17A8A_METHOD_1_C45E8FF341A4056E_OFFSET UNITYSDK_OFFSET(0xBE0D670)
#define CLASS_1_09CD725EF8C17A8A__CTOR_OFFSET UNITYSDK_OFFSET(0xBE0D480)

inline static constexpr unsigned int Class_1_09CD725EF8C17A8A_TypeDefinitionIndex = 54184;

class Class_1_09CD725EF8C17A8A : public ::System::Object
{
public:
	::System::UInt64 Field_1_8; // 0x10
	::System::UInt64 Field_1_9; // 0x18
	::Enum_3_288493BC643C59D0 Field_1_7; // 0x20
	::Enum_3_D4E63EB04ADBFF01 Field_1_4; // 0x24
	::Enum_3_7890D53463A7CFCB Field_1_3; // 0x28
	::System::Boolean Field_1_1; // 0x2C
	::System::Boolean Field_1_0; // 0x2D
	::Enum_3_9D7DEE786F49D757 Field_1_6; // 0x30
	::Enum_3_22B2F014E35FF7B5 Field_1_2; // 0x34
	::Enum_3_86C36EB274E242B5 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CD725EF8C17A8A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CD725EF8C17A8A_METHOD_1_644BB790D5F70195_OFFSET))(this);
	}

	::System::String* Method_1_C45E8FF341A4056E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CD725EF8C17A8A_METHOD_1_C45E8FF341A4056E_OFFSET))(this);
	}

	::System::String* Method_1_4F8A1085DD8C2097()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CD725EF8C17A8A_METHOD_1_4F8A1085DD8C2097_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CD725EF8C17A8A_METHOD_1_644BB790D5F70195_1_OFFSET))(this);
	}
};
