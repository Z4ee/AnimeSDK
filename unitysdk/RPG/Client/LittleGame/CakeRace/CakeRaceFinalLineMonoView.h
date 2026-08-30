#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFINALLINEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C9BD0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceFinalLineMonoView_TypeDefinitionIndex = 77682;

	class CakeRaceFinalLineMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* ShaderPropertyTransition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFINALLINEMONOVIEW__CTOR_OFFSET))(this);
		}
	};
}
