#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E71924F20B00CC55_1_METHOD_1_A11DA571CFC922B3_OFFSET UNITYSDK_OFFSET(0x183627F0)
#define CLASS_1_E71924F20B00CC55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18362930)

inline static constexpr unsigned int Class_1_E71924F20B00CC55_1_TypeDefinitionIndex = 13963;

class Class_1_E71924F20B00CC55_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E71924F20B00CC55_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A11DA571CFC922B3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E71924F20B00CC55_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E71924F20B00CC55_1*&))((::PBYTE)hIl2Cpp + CLASS_1_E71924F20B00CC55_1_METHOD_1_A11DA571CFC922B3_OFFSET))(a1, a2);
	}
};
