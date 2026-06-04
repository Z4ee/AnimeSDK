#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_5_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1445C180)
#define CLASS_3_70EB210E1A9A63D5_5_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x1445C2C0)
#define CLASS_3_70EB210E1A9A63D5_5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1445C200)
#define CLASS_3_70EB210E1A9A63D5_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1445C310)
#define CLASS_3_70EB210E1A9A63D5_5___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1445C320)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_5_TypeDefinitionIndex = 61592;

class Class_3_70EB210E1A9A63D5_5 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_5__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5_5* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5_5*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_5_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_5_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_5___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
