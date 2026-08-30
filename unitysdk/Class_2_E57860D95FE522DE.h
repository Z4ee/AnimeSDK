#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_E57860D95FE522DE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16FE4A60)
#define CLASS_2_E57860D95FE522DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE4B00)

inline static constexpr unsigned int Class_2_E57860D95FE522DE_TypeDefinitionIndex = 54478;

class Class_2_E57860D95FE522DE : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Boolean JMGPHNKLFDO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E57860D95FE522DE__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_E57860D95FE522DE_EXECUTE_OFFSET))(this, a1);
	}
};
