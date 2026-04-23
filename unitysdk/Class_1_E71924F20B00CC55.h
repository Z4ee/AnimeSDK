#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E71924F20B00CC55_METHOD_1_A11DA571CFC922B3_OFFSET UNITYSDK_OFFSET(0x18562100)
#define CLASS_1_E71924F20B00CC55__CTOR_OFFSET UNITYSDK_OFFSET(0x18562240)

inline static constexpr unsigned int Class_1_E71924F20B00CC55_TypeDefinitionIndex = 13718;

class Class_1_E71924F20B00CC55 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E71924F20B00CC55__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A11DA571CFC922B3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E71924F20B00CC55*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E71924F20B00CC55*&))((::PBYTE)hIl2Cpp + CLASS_1_E71924F20B00CC55_METHOD_1_A11DA571CFC922B3_OFFSET))(a1, a2);
	}
};
