#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x18AF5240)
#define CLASS_3_70EB210E1A9A63D5_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x18AF5390)
#define CLASS_3_70EB210E1A9A63D5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18AF52C0)
#define CLASS_3_70EB210E1A9A63D5__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF53E0)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_TypeDefinitionIndex = 62926;

class Class_3_70EB210E1A9A63D5 : public ::Class_2_980BB27C20DEC196
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
