#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_METHOD_4_15E320E0E3408FBC_OFFSET UNITYSDK_OFFSET(0x1D31BDC0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_METHOD_4_ED87D1FF39F09969_OFFSET UNITYSDK_OFFSET(0x1D31BD80)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31BDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy_TypeDefinitionIndex = 10290;

	class RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::RPG::GameCore::FixPoint Speed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED87D1FF39F09969(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_METHOD_4_ED87D1FF39F09969_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15E320E0E3408FBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_METHOD_4_15E320E0E3408FBC_OFFSET))(a1, a2);
		}
	};
}
