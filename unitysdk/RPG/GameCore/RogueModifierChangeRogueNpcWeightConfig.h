#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_17B672BB71F2091E_OFFSET UNITYSDK_OFFSET(0x1761D980)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_5FFC154B8836E717_OFFSET UNITYSDK_OFFSET(0x1761DA50)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761DA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangeRogueNpcWeightConfig_TypeDefinitionIndex = 16477;

	class RogueModifierChangeRogueNpcWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17B672BB71F2091E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_17B672BB71F2091E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FFC154B8836E717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_5FFC154B8836E717_OFFSET))(a1, a2);
		}
	};
}
