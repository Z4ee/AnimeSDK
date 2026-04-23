#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_7FFA11A9DD5CC16B_OFFSET UNITYSDK_OFFSET(0x18A9A2E0)
#define RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_EABE05CC888E833B_OFFSET UNITYSDK_OFFSET(0x18A9A200)
#define RPG_GAMECORE_MARBLEBYTEAMROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9A290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTeamRound_TypeDefinitionIndex = 15983;

	class MarbleByTeamRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EABE05CC888E833B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_EABE05CC888E833B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FFA11A9DD5CC16B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_7FFA11A9DD5CC16B_OFFSET))(a1, a2);
		}
	};
}
