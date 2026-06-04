#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_2C28A0FEADCC93AC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xABAF7C0)
#define CLASS_2_2C28A0FEADCC93AC__CTOR_OFFSET UNITYSDK_OFFSET(0xABAF860)
#define CLASS_2_2C28A0FEADCC93AC___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xABAF870)

inline static constexpr unsigned int Class_2_2C28A0FEADCC93AC_TypeDefinitionIndex = 50710;

class Class_2_2C28A0FEADCC93AC : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C28A0FEADCC93AC__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_2C28A0FEADCC93AC_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_2C28A0FEADCC93AC___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
