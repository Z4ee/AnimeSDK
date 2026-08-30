#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_2B248D8EF0DA53E1_OFFSET UNITYSDK_OFFSET(0x1D2316D0)
#define RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_CA058CE408B3668A_OFFSET UNITYSDK_OFFSET(0x1D231670)
#define RPG_GAMECORE_MARBLEBYTEAMROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2316C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTeamRound_TypeDefinitionIndex = 16701;

	class MarbleByTeamRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA058CE408B3668A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_CA058CE408B3668A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B248D8EF0DA53E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMROUND_METHOD_4_2B248D8EF0DA53E1_OFFSET))(a1, a2);
		}
	};
}
