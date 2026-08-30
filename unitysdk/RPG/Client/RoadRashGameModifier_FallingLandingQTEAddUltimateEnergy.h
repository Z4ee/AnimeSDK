#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_METHOD_4_A73990AEF36906FE_OFFSET UNITYSDK_OFFSET(0x1CD5C9B0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_METHOD_4_F444CE3D3D854935_OFFSET UNITYSDK_OFFSET(0x1CD5C9F0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5C9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy_TypeDefinitionIndex = 10291;

	class RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A73990AEF36906FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_METHOD_4_A73990AEF36906FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F444CE3D3D854935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_METHOD_4_F444CE3D3D854935_OFFSET))(a1, a2);
		}
	};
}
