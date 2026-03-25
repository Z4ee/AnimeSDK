#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_6_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x880CB60)
#define CLASS_3_70EB210E1A9A63D5_6_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x880C9D0)
#define CLASS_3_70EB210E1A9A63D5_6_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x880CA50)
#define CLASS_3_70EB210E1A9A63D5_6__CTOR_OFFSET UNITYSDK_OFFSET(0x880CBB0)
#define CLASS_3_70EB210E1A9A63D5_6__ONEXECUTE_B__3_0_OFFSET UNITYSDK_OFFSET(0x880CBC0)
#define CLASS_3_70EB210E1A9A63D5_6___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x880CC40)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_6_TypeDefinitionIndex = 53515;

class Class_3_70EB210E1A9A63D5_6 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_1; // 0x28
	::UnityEngine::Vector2Int Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5_6* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5_6*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void _OnExecute_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6__ONEXECUTE_B__3_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_6___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
