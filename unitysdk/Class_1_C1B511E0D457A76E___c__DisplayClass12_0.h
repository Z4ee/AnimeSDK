#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C50F5982E5600913;

#define CLASS_1_C1B511E0D457A76E___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A50C10)
#define CLASS_1_C1B511E0D457A76E___C__DISPLAYCLASS12_0___ENSURETEAMEDITCONTROLLER_B__0_OFFSET UNITYSDK_OFFSET(0x13A51670)

inline static constexpr unsigned int Class_1_C1B511E0D457A76E___c__DisplayClass12_0_TypeDefinitionIndex = 60409;

class Class_1_C1B511E0D457A76E___c__DisplayClass12_0 : public ::System::Object
{
public:
	::System::UInt32 selfPlayerId; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1B511E0D457A76E___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __EnsureTeamEditController_b__0(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_C1B511E0D457A76E___C__DISPLAYCLASS12_0___ENSURETEAMEDITCONTROLLER_B__0_OFFSET))(this, a1);
	}
};
