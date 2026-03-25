#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_1_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x11952F40)
#define CLASS_3_70EB210E1A9A63D5_1_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x11952E10)
#define CLASS_3_70EB210E1A9A63D5_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11952E90)
#define CLASS_3_70EB210E1A9A63D5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11952F90)
#define CLASS_3_70EB210E1A9A63D5_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11952FA0)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_1_TypeDefinitionIndex = 53489;

class Class_3_70EB210E1A9A63D5_1 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_1__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5_1* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5_1*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_1_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_1_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
