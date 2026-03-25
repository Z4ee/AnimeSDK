#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_8978739ED85903CF_CLEAR_OFFSET UNITYSDK_OFFSET(0xD16F070)
#define CLASS_2_8978739ED85903CF_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0xD16F000)
#define CLASS_2_8978739ED85903CF_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xD16F170)
#define CLASS_2_8978739ED85903CF_METHOD_2_B8F461EED022678B_OFFSET UNITYSDK_OFFSET(0xD16F200)
#define CLASS_2_8978739ED85903CF_METHOD_2_FA4F0A278F440490_OFFSET UNITYSDK_OFFSET(0xD16F380)
#define CLASS_2_8978739ED85903CF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD16F110)
#define CLASS_2_8978739ED85903CF__CTOR_OFFSET UNITYSDK_OFFSET(0xD16F440)
#define CLASS_2_8978739ED85903CF___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xD16F450)
#define CLASS_2_8978739ED85903CF___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD16F4E0)

inline static constexpr unsigned int Class_2_8978739ED85903CF_TypeDefinitionIndex = 53493;

class Class_2_8978739ED85903CF : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_2_5; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_4; // 0x2C
	::System::UInt32 Field_2_0; // 0x30
	::System::Boolean Field_2_2; // 0x34
	::System::Boolean Field_2_3; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF__CTOR_OFFSET))(this);
	}

	static ::Class_2_8978739ED85903CF* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_8978739ED85903CF*(*)())((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_B8F461EED022678B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_METHOD_2_B8F461EED022678B_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::RPG::Client::MatchThreeGameOpponent* Method_2_FA4F0A278F440490()
	{
		return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF_METHOD_2_FA4F0A278F440490_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8978739ED85903CF___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
