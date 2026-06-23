#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_342;

#define CLASS_1_C9475796DAA2AC15_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x13FB3E80)
#define CLASS_1_C9475796DAA2AC15__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB3E00)

inline static constexpr unsigned int Class_1_C9475796DAA2AC15_TypeDefinitionIndex = 82031;

class Class_1_C9475796DAA2AC15 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_342* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_342*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_342*&))((::PBYTE)hIl2Cpp + CLASS_1_C9475796DAA2AC15__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_342* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_342*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9475796DAA2AC15_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
