#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_5FFC154B8836E717_OFFSET UNITYSDK_OFFSET(0x1CFBF460)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_66F30A59463B5CD3_OFFSET UNITYSDK_OFFSET(0x1CFBF410)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangeRogueNpcWeightConfig_TypeDefinitionIndex = 17206;

	class RogueModifierChangeRogueNpcWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66F30A59463B5CD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_66F30A59463B5CD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FFC154B8836E717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangeRogueNpcWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEROGUENPCWEIGHTCONFIG_METHOD_3_5FFC154B8836E717_OFFSET))(a1, a2);
		}
	};
}
