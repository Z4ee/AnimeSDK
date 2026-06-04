#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3659AE0E8250857A;
class Class_1_57B0727320B17159;

#define CLASS_1_63D18ECF87218619_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18AE99F0)
#define CLASS_1_63D18ECF87218619_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x18AE9A50)
#define CLASS_1_63D18ECF87218619__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE9A90)

inline static constexpr unsigned int Class_1_63D18ECF87218619_TypeDefinitionIndex = 34730;

class Class_1_63D18ECF87218619 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::Class_1_3659AE0E8250857A* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3659AE0E8250857A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
