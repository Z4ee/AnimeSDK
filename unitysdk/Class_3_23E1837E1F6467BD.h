#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_23E1837E1F6467BD_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x94FF450)
#define CLASS_3_23E1837E1F6467BD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x94FF720)
#define CLASS_3_23E1837E1F6467BD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x94FF4D0)
#define CLASS_3_23E1837E1F6467BD__CTOR_OFFSET UNITYSDK_OFFSET(0x94FF760)
#define CLASS_3_23E1837E1F6467BD__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x94FF770)
#define CLASS_3_23E1837E1F6467BD___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x94FF7E0)
#define CLASS_3_23E1837E1F6467BD___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x94FF780)

inline static constexpr unsigned int Class_3_23E1837E1F6467BD_TypeDefinitionIndex = 60657;

class Class_3_23E1837E1F6467BD : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD__CTOR_OFFSET))(this);
	}

	static ::Class_3_23E1837E1F6467BD* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_23E1837E1F6467BD*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD__ONEXECUTE_B__1_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E1837E1F6467BD___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
