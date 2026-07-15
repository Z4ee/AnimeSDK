#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class PixAirMissleConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_METHOD_4_556D498305C687AA_OFFSET UNITYSDK_OFFSET(0x1B095010)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_METHOD_4_BEFAE6D75EB5BBA9_OFFSET UNITYSDK_OFFSET(0x1B095050)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B095040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirFireMissle_TypeDefinitionIndex = 20598;

	class LittleGameAbilityPixAirFireMissle : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::PixAirMissleConfig* MissleConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_556D498305C687AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_METHOD_4_556D498305C687AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEFAE6D75EB5BBA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_METHOD_4_BEFAE6D75EB5BBA9_OFFSET))(a1, a2);
		}
	};
}
