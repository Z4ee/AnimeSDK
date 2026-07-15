#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_6F6B634BBEAE6D18_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1642EDC0)
#define CLASS_2_6F6B634BBEAE6D18__CTOR_OFFSET UNITYSDK_OFFSET(0x1642EE60)

inline static constexpr unsigned int Class_2_6F6B634BBEAE6D18_TypeDefinitionIndex = 51792;

class Class_2_6F6B634BBEAE6D18 : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F6B634BBEAE6D18__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_6F6B634BBEAE6D18_EXECUTE_OFFSET))(this, a1);
	}
};
