#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_010347D17DFD5D8F_3;
namespace System { class Action; }

#define CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET UNITYSDK_OFFSET(0x1A27E110)
#define CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET UNITYSDK_OFFSET(0x1A27E3C0)
#define CLASS_1_53EF53585AF9D88A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27E3B0)

inline static constexpr unsigned int Class_1_53EF53585AF9D88A_TypeDefinitionIndex = 45763;

class Class_1_53EF53585AF9D88A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00F34DD1CABB08D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET))(this, a1);
	}

	static ::Class_1_53EF53585AF9D88A* Method_1_583F1446ECB3FC58(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::Class_1_53EF53585AF9D88A*(*)(::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET))(a1);
	}
};
