#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9AE7AA9DD8A83B5;

#define CLASS_1_2E44A17C1AB85015_EQUALS_OFFSET UNITYSDK_OFFSET(0x98F01C0)
#define CLASS_1_2E44A17C1AB85015__CTOR_OFFSET UNITYSDK_OFFSET(0x98F0280)

inline static constexpr unsigned int Class_1_2E44A17C1AB85015_TypeDefinitionIndex = 50056;

class Class_1_2E44A17C1AB85015 : public ::System::Object
{
public:
	::Class_1_F9AE7AA9DD8A83B5* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E44A17C1AB85015__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_2E44A17C1AB85015* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2E44A17C1AB85015*))((::PBYTE)hIl2Cpp + CLASS_1_2E44A17C1AB85015_EQUALS_OFFSET))(this, a1);
	}
};
