#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
namespace RPG::Client { class ConditionChecker; }

#define CLASS_1_CDC7DCA74029AE38_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x15E32390)
#define CLASS_1_CDC7DCA74029AE38__CTOR_OFFSET UNITYSDK_OFFSET(0x15E32380)

inline static constexpr unsigned int Class_1_CDC7DCA74029AE38_TypeDefinitionIndex = 57245;

class Class_1_CDC7DCA74029AE38 : public ::System::Object
{
public:
	::RPG::Client::ConditionChecker* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ConditionChecker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConditionChecker*))((::PBYTE)hIl2Cpp + CLASS_1_CDC7DCA74029AE38__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_631* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_1_CDC7DCA74029AE38_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
