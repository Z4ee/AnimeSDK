#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_METHOD_3_6C8F42F7AD595ADC_OFFSET UNITYSDK_OFFSET(0x1D3FA080)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_METHOD_3_E8F39CC57598A818_OFFSET UNITYSDK_OFFSET(0x1D3FA0D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicRoomMarkProbabilityConfig_TypeDefinitionIndex = 17515;

	class RogueModifierModifyMagicRoomMarkProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C8F42F7AD595ADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_METHOD_3_6C8F42F7AD595ADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8F39CC57598A818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_METHOD_3_E8F39CC57598A818_OFFSET))(a1, a2);
		}
	};
}
