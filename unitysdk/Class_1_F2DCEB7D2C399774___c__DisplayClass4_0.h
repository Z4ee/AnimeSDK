#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_F2DCEB7D2C399774;

#define CLASS_1_F2DCEB7D2C399774___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98F0380)
#define CLASS_1_F2DCEB7D2C399774___C__DISPLAYCLASS4_0__EXECUTESEQUENCE_B__0_OFFSET UNITYSDK_OFFSET(0x98F0490)

inline static constexpr unsigned int Class_1_F2DCEB7D2C399774___c__DisplayClass4_0_TypeDefinitionIndex = 70329;

class Class_1_F2DCEB7D2C399774___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_341* seq; // 0x10
	::Class_1_F2DCEB7D2C399774* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _ExecuteSequence_b__0(::System::Boolean success)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774___C__DISPLAYCLASS4_0__EXECUTESEQUENCE_B__0_OFFSET))(this, success);
	}
};
