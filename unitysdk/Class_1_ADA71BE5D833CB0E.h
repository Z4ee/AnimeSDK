#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BEDB7A8B7ABCB952.h"
#include "unitysdk/System/Object.h"

class Class_3_49F82D9A72B23588;
namespace System { class String; }

#define CLASS_1_ADA71BE5D833CB0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1512BBE0)

inline static constexpr unsigned int Class_1_ADA71BE5D833CB0E_TypeDefinitionIndex = 39468;

class Class_1_ADA71BE5D833CB0E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_49F82D9A72B23588* Field_1_10; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Boolean Field_1_7; // 0x28
	::System::Boolean Field_1_6; // 0x29
	::System::Boolean Field_1_5; // 0x2A
	::System::Boolean Field_1_9; // 0x2B
	::System::Boolean Field_1_8; // 0x2C
	::System::Single Field_1_3; // 0x30
	::Enum_3_BEDB7A8B7ABCB952 Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA71BE5D833CB0E__CTOR_OFFSET))(this);
	}
};
