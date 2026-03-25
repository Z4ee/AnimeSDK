#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATEPLAYERTEAM_METHOD_3_C7673EF3709D7554_OFFSET UNITYSDK_OFFSET(0x1713D3F0)
#define RPG_GAMECORE_CREATEPLAYERTEAM_METHOD_3_FC346D1139145CF1_OFFSET UNITYSDK_OFFSET(0x1713D480)
#define RPG_GAMECORE_CREATEPLAYERTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1713D450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePlayerTeam_TypeDefinitionIndex = 21622;

	class CreatePlayerTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::System::Boolean Hide; // 0x1C
		::System::Boolean ForbiddenPassiveSkill; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7673EF3709D7554(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePlayerTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePlayerTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM_METHOD_3_C7673EF3709D7554_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC346D1139145CF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePlayerTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePlayerTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM_METHOD_3_FC346D1139145CF1_OFFSET))(a1, a2);
		}
	};
}
