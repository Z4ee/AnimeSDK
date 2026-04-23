#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E44A17C1AB85015;
class Class_1_E754E66360B8422F;

#define CLASS_1_8CA5EA96CD60D54F___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96627F0)
#define CLASS_1_8CA5EA96CD60D54F___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0x96643C0)

inline static constexpr unsigned int Class_1_8CA5EA96CD60D54F___c__DisplayClass5_0_TypeDefinitionIndex = 67469;

class Class_1_8CA5EA96CD60D54F___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_E754E66360B8422F* characterData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _DepartEquipProperty_b__0(::Class_1_2E44A17C1AB85015* equip)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2E44A17C1AB85015*))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F___C__DISPLAYCLASS5_0__DEPARTEQUIPPROPERTY_B__0_OFFSET))(this, equip);
	}
};
