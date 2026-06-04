#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;
namespace System { class String; }

#define CLASS_2_639DC7E7CD7E646F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13B9A160)
#define CLASS_2_639DC7E7CD7E646F__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9A350)
#define CLASS_2_639DC7E7CD7E646F___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13B9A360)

inline static constexpr unsigned int Class_2_639DC7E7CD7E646F_TypeDefinitionIndex = 50711;

class Class_2_639DC7E7CD7E646F : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_639DC7E7CD7E646F__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_639DC7E7CD7E646F_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_639DC7E7CD7E646F___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
