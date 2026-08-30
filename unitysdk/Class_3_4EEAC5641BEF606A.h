#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_4EEAC5641BEF606A_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xE2DB470)
#define CLASS_3_4EEAC5641BEF606A_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xE2DB620)
#define CLASS_3_4EEAC5641BEF606A_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xE2DB4F0)
#define CLASS_3_4EEAC5641BEF606A_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE2DB540)
#define CLASS_3_4EEAC5641BEF606A__CTOR_OFFSET UNITYSDK_OFFSET(0xE2DB670)

inline static constexpr unsigned int Class_3_4EEAC5641BEF606A_TypeDefinitionIndex = 65905;

class Class_3_4EEAC5641BEF606A : public ::Class_2_980BB27C20DEC196
{
public:
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x28
	::System::UInt32 AOCLHNKNJHM; // 0x2C
	::UnityEngine::Vector2 NHEDBJMCEEF; // 0x30
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
