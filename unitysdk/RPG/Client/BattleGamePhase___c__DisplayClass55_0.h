#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }
namespace System { class Action; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4F5A0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS55_0__PRECESSRESTARTWITHEDITTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x19F64A50)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass55_0_TypeDefinitionIndex = 61064;

	class BattleGamePhase___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::BattleGamePhase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _PrecessRestartWithEditTeam_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS55_0__PRECESSRESTARTWITHEDITTEAM_B__0_OFFSET))(this);
		}
	};
}
