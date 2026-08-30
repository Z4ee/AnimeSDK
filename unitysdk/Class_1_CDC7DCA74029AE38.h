#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_667;
namespace RPG::Client { class ConditionChecker; }

#define CLASS_1_CDC7DCA74029AE38_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB9BA6E0)
#define CLASS_1_CDC7DCA74029AE38__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BA6D0)

inline static constexpr unsigned int Class_1_CDC7DCA74029AE38_TypeDefinitionIndex = 60043;

class Class_1_CDC7DCA74029AE38 : public ::System::Object
{
public:
	::RPG::Client::ConditionChecker* OLNFAODGPMD; // 0x10

	::System::Void _ctor(::RPG::Client::ConditionChecker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConditionChecker*))((::PBYTE)hIl2Cpp + CLASS_1_CDC7DCA74029AE38__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + CLASS_1_CDC7DCA74029AE38_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
