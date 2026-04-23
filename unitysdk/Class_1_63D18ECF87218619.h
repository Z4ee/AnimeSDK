#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57B0727320B17159;
class Class_1_A384266ECC3B378E;

#define CLASS_1_63D18ECF87218619_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17DBB110)
#define CLASS_1_63D18ECF87218619_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17DBB170)
#define CLASS_1_63D18ECF87218619__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBB1B0)

inline static constexpr unsigned int Class_1_63D18ECF87218619_TypeDefinitionIndex = 34448;

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

	::Class_1_A384266ECC3B378E* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_A384266ECC3B378E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
