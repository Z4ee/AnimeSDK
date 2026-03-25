#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/EffectConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9987200)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW___C__DISPLAYCLASS18_0___GETEFFECTCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x9987610)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatMonoView___c__DisplayClass18_0_TypeDefinitionIndex = 63605;

	class CakeRaceCatMonoView___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* effectName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetEffectConfig_b__0(::RPG::Client::LittleGame::CakeRace::EffectConfig config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::EffectConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW___C__DISPLAYCLASS18_0___GETEFFECTCONFIG_B__0_OFFSET))(this, config);
		}
	};
}
