#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_4EEAC5641BEF606A_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x18CF2300)
#define CLASS_3_4EEAC5641BEF606A_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x18CF24B0)
#define CLASS_3_4EEAC5641BEF606A_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x18CF2380)
#define CLASS_3_4EEAC5641BEF606A_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18CF23D0)
#define CLASS_3_4EEAC5641BEF606A__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF2500)

inline static constexpr unsigned int Class_3_4EEAC5641BEF606A_TypeDefinitionIndex = 65905;

class Class_3_4EEAC5641BEF606A : public ::Class_2_980BB27C20DEC196
{
public:
	::UnityEngine::Vector2 NHEDBJMCEEF; // 0x28
	::System::UInt32 AOCLHNKNJHM; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x34
	::System::Boolean GBKHPNODEAH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A__CTOR_OFFSET))(this);
	}

	static ::Class_3_4EEAC5641BEF606A* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_4EEAC5641BEF606A*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
