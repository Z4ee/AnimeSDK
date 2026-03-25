#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_203;
namespace RPG::Client { class ChimeraTeamData; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93D6CD0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS4_0__SYNCTEAMFINISHWORK_B__0_OFFSET UNITYSDK_OFFSET(0x93D7C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass4_0_TypeDefinitionIndex = 51511;

	class ChimeraTeamRankManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_203* chimeraTeam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncTeamFinishWork_b__0(::RPG::Client::ChimeraTeamData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS4_0__SYNCTEAMFINISHWORK_B__0_OFFSET))(this, data);
		}
	};
}
