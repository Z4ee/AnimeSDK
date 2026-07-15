#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_3_METHOD_1_DB009E688B02FC97_OFFSET UNITYSDK_OFFSET(0x1AC92EB0)
#define CLASS_1_945ACFB1FEBC7A2C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7AD40)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_3_TypeDefinitionIndex = 33842;

class Class_1_945ACFB1FEBC7A2C_3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_3__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DB009E688B02FC97()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_3_METHOD_1_DB009E688B02FC97_OFFSET))(this);
	}
};
