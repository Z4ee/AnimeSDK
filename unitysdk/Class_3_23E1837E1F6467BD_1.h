#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_23E1837E1F6467BD_1_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1360A270)
#define CLASS_3_23E1837E1F6467BD_1_METHOD_3_C22992F324A39294_OFFSET UNITYSDK_OFFSET(0x1360A610)
#define CLASS_3_23E1837E1F6467BD_1_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1360A840)
#define CLASS_3_23E1837E1F6467BD_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1360A2F0)
#define CLASS_3_23E1837E1F6467BD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1360A880)
#define CLASS_3_23E1837E1F6467BD_1___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1360A8F0)
#define CLASS_3_23E1837E1F6467BD_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1360A890)

inline static constexpr unsigned int Class_3_23E1837E1F6467BD_1_TypeDefinitionIndex = 61595;

class Class_3_23E1837E1F6467BD_1 : public ::Class_2_E408E6D7F3D1822C
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

	::System::Void Method_3_C22992F324A39294(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_METHOD_3_C22992F324A39294_OFFSET))(this, a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_1___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
