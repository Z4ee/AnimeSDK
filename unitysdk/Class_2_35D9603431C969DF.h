#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_35D9603431C969DF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18F6C7C0)
#define CLASS_2_35D9603431C969DF__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6CC80)

inline static constexpr unsigned int Class_2_35D9603431C969DF_TypeDefinitionIndex = 54482;

class Class_2_35D9603431C969DF : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::UInt32 GNCFHIKODKE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35D9603431C969DF__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_35D9603431C969DF_EXECUTE_OFFSET))(this, a1);
	}
};
