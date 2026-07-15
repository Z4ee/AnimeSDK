#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestPaper; }

#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1973BE80)
#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS83_0__GETPAPER_B__0_OFFSET UNITYSDK_OFFSET(0x19743A40)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule___c__DisplayClass83_0_TypeDefinitionIndex = 61271;

	class FightFestModule___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::System::UInt32 paperID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPaper_b__0(::RPG::Client::FightFestPaper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS83_0__GETPAPER_B__0_OFFSET))(this, a1);
		}
	};
}
