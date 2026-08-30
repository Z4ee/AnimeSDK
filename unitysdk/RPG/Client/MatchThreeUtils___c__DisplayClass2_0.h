#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class LobbyModule; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD659030)
#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xD659290)
#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_G___CREATELOBBY_1_OFFSET UNITYSDK_OFFSET(0xD659120)
#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD657660)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeUtils___c__DisplayClass2_0_TypeDefinitionIndex = 66027;

	class MatchThreeUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::LobbyModule* lobbyModule; // 0x10
		::System::Action* __9__2; // 0x18
		::System::UInt32 birdID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateAndOpenLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_B__0_OFFSET))(this, a1);
		}

		::System::Void _CreateAndOpenLobby_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_B__2_OFFSET))(this);
		}

		::System::Void _CreateAndOpenLobby_g___CreateLobby_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS2_0__CREATEANDOPENLOBBY_G___CREATELOBBY_1_OFFSET))(this);
		}
	};
}
