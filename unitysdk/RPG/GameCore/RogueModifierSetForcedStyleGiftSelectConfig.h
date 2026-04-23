#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_METHOD_3_C2CA37D723C4CF06_OFFSET UNITYSDK_OFFSET(0x18D46B70)
#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_METHOD_3_F97FFD651FF653AF_OFFSET UNITYSDK_OFFSET(0x18D46AA0)
#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D46B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetForcedStyleGiftSelectConfig_TypeDefinitionIndex = 16953;

	class RogueModifierSetForcedStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F97FFD651FF653AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_METHOD_3_F97FFD651FF653AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2CA37D723C4CF06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_METHOD_3_C2CA37D723C4CF06_OFFSET))(a1, a2);
		}
	};
}
