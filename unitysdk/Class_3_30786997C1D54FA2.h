#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_30786997C1D54FA2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x190FC100)
#define CLASS_3_30786997C1D54FA2_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x190FC260)
#define CLASS_3_30786997C1D54FA2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x190FC180)
#define CLASS_3_30786997C1D54FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC2B0)

inline static constexpr unsigned int Class_3_30786997C1D54FA2_TypeDefinitionIndex = 65903;

class Class_3_30786997C1D54FA2 : public ::Class_2_980BB27C20DEC196
{
public:
	::UnityEngine::Vector2Int ICGKFDEILKA; // 0x28
	::System::UInt32 KLOEJIMMPJM; // 0x30
	::UnityEngine::Vector2Int OLCHHDKKPLI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2__CTOR_OFFSET))(this);
	}

	static ::Class_3_30786997C1D54FA2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_30786997C1D54FA2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
