#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_865;
class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2C120)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0x1BA2C130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_1_TypeDefinitionIndex = 64870;

	class GridFightGameRefTeam___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::Class_0_16E4307DCC419505_865* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET))(this, a1);
		}
	};
}
