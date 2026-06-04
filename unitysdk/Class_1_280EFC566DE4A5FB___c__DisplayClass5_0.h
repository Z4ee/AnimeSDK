#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E03597A69ECA0B85;
class Class_1_E754E66360B8422F;

#define CLASS_1_280EFC566DE4A5FB___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1417EB00)
#define CLASS_1_280EFC566DE4A5FB___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0x14180B70)

inline static constexpr unsigned int Class_1_280EFC566DE4A5FB___c__DisplayClass5_0_TypeDefinitionIndex = 68421;

class Class_1_280EFC566DE4A5FB___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_E754E66360B8422F* characterData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280EFC566DE4A5FB___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _DepartEquipProperty_b__0(::Class_1_E03597A69ECA0B85* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E03597A69ECA0B85*))((::PBYTE)hIl2Cpp + CLASS_1_280EFC566DE4A5FB___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET))(this, a1);
	}
};
