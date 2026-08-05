#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12D99BB0)
#define CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D99BA0)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_TypeDefinitionIndex = 44504;

class Class_1_30B5FE4AA7ABAB8C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
