#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_3_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xC3B5B60)
#define CLASS_3_70EB210E1A9A63D5_3_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xC3B5CA0)
#define CLASS_3_70EB210E1A9A63D5_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC3B5BE0)
#define CLASS_3_70EB210E1A9A63D5_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B5CF0)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_3_TypeDefinitionIndex = 65931;

class Class_3_70EB210E1A9A63D5_3 : public ::Class_2_980BB27C20DEC196
{
public:
	::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28

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
};
