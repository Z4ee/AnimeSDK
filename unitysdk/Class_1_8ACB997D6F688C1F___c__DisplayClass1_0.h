#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_1_2B357179601D6146;

#define CLASS_1_8ACB997D6F688C1F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD54BF0)
#define CLASS_1_8ACB997D6F688C1F___C__DISPLAYCLASS1_0___GETCOMPAREGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xCD54D60)

inline static constexpr unsigned int Class_1_8ACB997D6F688C1F___c__DisplayClass1_0_TypeDefinitionIndex = 59774;

class Class_1_8ACB997D6F688C1F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Struct_2_0814C3CA012BD292 context; // 0x10
	::System::UInt32 roleID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetCompareGroup_b__0(::Class_1_2B357179601D6146* group)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2B357179601D6146*))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F___C__DISPLAYCLASS1_0___GETCOMPAREGROUP_B__0_OFFSET))(this, group);
	}
};
