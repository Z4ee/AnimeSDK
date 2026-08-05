#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;

#define CLASS_1_E87F7C93CB0CC57E_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xF7BAA20)
#define CLASS_1_E87F7C93CB0CC57E__CTOR_OFFSET UNITYSDK_OFFSET(0xF7BA870)

inline static constexpr unsigned int Class_1_E87F7C93CB0CC57E_TypeDefinitionIndex = 59513;

class Class_1_E87F7C93CB0CC57E : public ::System::Object
{
public:
	::Class_1_BE6BF7909AD9D940* Field_1_7; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int64 Field_1_6; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E87F7C93CB0CC57E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87F7C93CB0CC57E_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}
};
