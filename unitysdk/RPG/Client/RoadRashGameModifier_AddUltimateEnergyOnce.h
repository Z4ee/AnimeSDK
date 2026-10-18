#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_METHOD_4_82DEF4512B994B46_OFFSET UNITYSDK_OFFSET(0x1D32FDD0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_METHOD_4_D2CE3BF9B0714EDD_OFFSET UNITYSDK_OFFSET(0x1D32FD90)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_AddUltimateEnergyOnce_TypeDefinitionIndex = 10306;

	class RoadRashGameModifier_AddUltimateEnergyOnce : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2CE3BF9B0714EDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_METHOD_4_D2CE3BF9B0714EDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82DEF4512B994B46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_METHOD_4_82DEF4512B994B46_OFFSET))(a1, a2);
		}
	};
}
