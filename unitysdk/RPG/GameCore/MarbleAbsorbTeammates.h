#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_621E7F345FCA6372_OFFSET UNITYSDK_OFFSET(0x198C80F0)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_9F6CBEAF3F855286_OFFSET UNITYSDK_OFFSET(0x198C8010)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES__CTOR_OFFSET UNITYSDK_OFFSET(0x198C80A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAbsorbTeammates_TypeDefinitionIndex = 15997;

	class MarbleAbsorbTeammates : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Single AttackFactor; // 0x10
		::System::Single HpFactor; // 0x14
		::System::Single RadiusFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F6CBEAF3F855286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAbsorbTeammates*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAbsorbTeammates*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_9F6CBEAF3F855286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_621E7F345FCA6372(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAbsorbTeammates* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAbsorbTeammates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_621E7F345FCA6372_OFFSET))(a1, a2);
		}
	};
}
