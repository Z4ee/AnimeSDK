#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_326AAAFC3EB9F4BD_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1400CD00)
#define CLASS_3_326AAAFC3EB9F4BD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1400CD80)
#define CLASS_3_326AAAFC3EB9F4BD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1400CDC0)
#define CLASS_3_326AAAFC3EB9F4BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1400CE30)
#define CLASS_3_326AAAFC3EB9F4BD___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1400CE40)
#define CLASS_3_326AAAFC3EB9F4BD___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1400CEA0)

inline static constexpr unsigned int Class_3_326AAAFC3EB9F4BD_TypeDefinitionIndex = 61570;

class Class_3_326AAAFC3EB9F4BD : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD__CTOR_OFFSET))(this);
	}

	static ::Class_3_326AAAFC3EB9F4BD* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_326AAAFC3EB9F4BD*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
