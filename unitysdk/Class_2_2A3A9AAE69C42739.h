#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_1_6B9FBCAC09C5F877;
class Class_1_E03597A69ECA0B85;
class Class_2_A1F69E2229E56CFE;

#define CLASS_2_2A3A9AAE69C42739_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1422E600)
#define CLASS_2_2A3A9AAE69C42739__CTOR_OFFSET UNITYSDK_OFFSET(0x1422E6B0)
#define CLASS_2_2A3A9AAE69C42739___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1422E6C0)

inline static constexpr unsigned int Class_2_2A3A9AAE69C42739_TypeDefinitionIndex = 50714;

class Class_2_2A3A9AAE69C42739 : public ::Class_1_839D2B0410C42D5A
{
public:
	::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>* Field_2_0; // 0x20
	::Il2CppArray<::Class_1_E03597A69ECA0B85*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3A9AAE69C42739__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_2A3A9AAE69C42739_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_2A3A9AAE69C42739___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
