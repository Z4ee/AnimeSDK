#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_METHOD_4_08C6FD772119667F_OFFSET UNITYSDK_OFFSET(0x1D31C6E0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_METHOD_4_DEC938B7ADC0F002_OFFSET UNITYSDK_OFFSET(0x1D31C6A0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31C6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_PlayerUltimateQTE_TypeDefinitionIndex = 10283;

	class RoadRashGameModifier_PlayerUltimateQTE : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint QTETriggerRangeMinPercent; // 0x18
		::RPG::GameCore::FixPoint QTETriggerRangeMaxPercent; // 0x20
		::RPG::GameCore::FixPoint QTEPressDuration; // 0x28
		::RPG::GameCore::FixPoint QTESuccessRecoverEnergy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DEC938B7ADC0F002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_METHOD_4_DEC938B7ADC0F002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_08C6FD772119667F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_METHOD_4_08C6FD772119667F_OFFSET))(a1, a2);
		}
	};
}
