#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_3_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xAF64310)
#define CLASS_3_70EB210E1A9A63D5_3_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xAF64450)
#define CLASS_3_70EB210E1A9A63D5_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAF64390)
#define CLASS_3_70EB210E1A9A63D5_3__CTOR_OFFSET UNITYSDK_OFFSET(0xAF644A0)
#define CLASS_3_70EB210E1A9A63D5_3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAF644B0)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_3_TypeDefinitionIndex = 61584;

class Class_3_70EB210E1A9A63D5_3 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_3__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5_3* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5_3*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_3_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_3_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_3___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
