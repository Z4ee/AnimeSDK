#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_METHOD_4_B8B1AA85D1AB5AD7_OFFSET UNITYSDK_OFFSET(0x1D319590)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_METHOD_4_FEE7BAA7F12E4DE4_OFFSET UNITYSDK_OFFSET(0x1D319550)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D319580)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_AddUltimateEnergy_TypeDefinitionIndex = 10289;

	class RoadRashGameModifier_AddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FEE7BAA7F12E4DE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_METHOD_4_FEE7BAA7F12E4DE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8B1AA85D1AB5AD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_METHOD_4_B8B1AA85D1AB5AD7_OFFSET))(a1, a2);
		}
	};
}
