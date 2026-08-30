#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_441;

#define CLASS_1_126B8E80135A6AC3_METHOD_1_B9A5096696BA3410_OFFSET UNITYSDK_OFFSET(0x1997DB10)
#define CLASS_1_126B8E80135A6AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1997DAC0)

inline static constexpr unsigned int Class_1_126B8E80135A6AC3_TypeDefinitionIndex = 62645;

class Class_1_126B8E80135A6AC3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_441* PEEAFBINELO; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_441* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_441*))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_B9A5096696BA3410()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3_METHOD_1_B9A5096696BA3410_OFFSET))(this);
	}
};
