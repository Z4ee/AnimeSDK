#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamManager___c__DisplayClass15_0; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1855C450)
#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_1__LOADBACKGROUNDPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x185674A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass15_1_TypeDefinitionIndex = 58053;

	class TeamManager___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* gameEntity; // 0x10
		::RPG::Client::TeamManager___c__DisplayClass15_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _LoadBackGroundPlayer_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_1__LOADBACKGROUNDPLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
