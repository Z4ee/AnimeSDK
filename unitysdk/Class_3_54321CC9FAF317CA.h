#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_54321CC9FAF317CA_METHOD_3_9697A26043AF899D_OFFSET UNITYSDK_OFFSET(0x8BBE070)
#define CLASS_3_54321CC9FAF317CA_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x8BBDCC0)
#define CLASS_3_54321CC9FAF317CA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8BBE2A0)
#define CLASS_3_54321CC9FAF317CA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8BBDD40)
#define CLASS_3_54321CC9FAF317CA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBE2E0)
#define CLASS_3_54321CC9FAF317CA___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8BBE350)
#define CLASS_3_54321CC9FAF317CA___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8BBE2F0)

inline static constexpr unsigned int Class_3_54321CC9FAF317CA_TypeDefinitionIndex = 53517;

class Class_3_54321CC9FAF317CA : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA__CTOR_OFFSET))(this);
	}

	static ::Class_3_54321CC9FAF317CA* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_54321CC9FAF317CA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_9697A26043AF899D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA_METHOD_3_9697A26043AF899D_OFFSET))(this, a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54321CC9FAF317CA___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
