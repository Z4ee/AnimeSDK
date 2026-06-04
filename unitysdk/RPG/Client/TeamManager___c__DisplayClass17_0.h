#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class TeamManager; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS17_0__CREATETEAMMEMBERENTITYS_B__0_OFFSET UNITYSDK_OFFSET(0xCA04140)
#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC9FA150)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass17_0_TypeDefinitionIndex = 56807;

	class TeamManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* pADP; // 0x10
		::RPG::Client::TeamManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTeamMemberEntitys_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS17_0__CREATETEAMMEMBERENTITYS_B__0_OFFSET))(this);
		}
	};
}
