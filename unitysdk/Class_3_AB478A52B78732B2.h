#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_AB478A52B78732B2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xBB7F450)
#define CLASS_3_AB478A52B78732B2_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xBB7F5F0)
#define CLASS_3_AB478A52B78732B2_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBB7F4D0)
#define CLASS_3_AB478A52B78732B2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBB7F520)
#define CLASS_3_AB478A52B78732B2__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7F640)

inline static constexpr unsigned int Class_3_AB478A52B78732B2_TypeDefinitionIndex = 65907;

class Class_3_AB478A52B78732B2 : public ::Class_2_980BB27C20DEC196
{
public:
	::System::UInt32 BOKJJKFCFME; // 0x28
	::System::UInt32 AOCLHNKNJHM; // 0x2C
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2__CTOR_OFFSET))(this);
	}

	static ::Class_3_AB478A52B78732B2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_AB478A52B78732B2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
