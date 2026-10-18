#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_23E1837E1F6467BD_1_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1566E830)
#define CLASS_3_23E1837E1F6467BD_1_METHOD_3_A8EAEA9850C32D29_OFFSET UNITYSDK_OFFSET(0x1566EBD0)
#define CLASS_3_23E1837E1F6467BD_1_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1566EE00)
#define CLASS_3_23E1837E1F6467BD_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1566E8B0)
#define CLASS_3_23E1837E1F6467BD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1566EE40)

inline static constexpr unsigned int Class_3_23E1837E1F6467BD_1_TypeDefinitionIndex = 65896;

class Class_3_23E1837E1F6467BD_1 : public ::Class_2_980BB27C20DEC196
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1__CTOR_OFFSET))(this);
	}

	static ::Class_3_23E1837E1F6467BD_1* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_23E1837E1F6467BD_1*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_A8EAEA9850C32D29(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_METHOD_3_A8EAEA9850C32D29_OFFSET))(this, a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_ONCLEAR_OFFSET))(this);
	}
};
