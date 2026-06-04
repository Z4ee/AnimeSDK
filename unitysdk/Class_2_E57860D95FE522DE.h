#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_E57860D95FE522DE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4214F0)
#define CLASS_2_E57860D95FE522DE__CTOR_OFFSET UNITYSDK_OFFSET(0xA421590)
#define CLASS_2_E57860D95FE522DE___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4215A0)

inline static constexpr unsigned int Class_2_E57860D95FE522DE_TypeDefinitionIndex = 50712;

class Class_2_E57860D95FE522DE : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E57860D95FE522DE__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_E57860D95FE522DE_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_E57860D95FE522DE___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
