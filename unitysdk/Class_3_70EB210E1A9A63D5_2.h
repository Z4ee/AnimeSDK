#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_2_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x951A2E0)
#define CLASS_3_70EB210E1A9A63D5_2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x951A1B0)
#define CLASS_3_70EB210E1A9A63D5_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x951A230)
#define CLASS_3_70EB210E1A9A63D5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x951A330)
#define CLASS_3_70EB210E1A9A63D5_2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x951A340)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_2_TypeDefinitionIndex = 60649;

class Class_3_70EB210E1A9A63D5_2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_2__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5_2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5_2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_2_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
