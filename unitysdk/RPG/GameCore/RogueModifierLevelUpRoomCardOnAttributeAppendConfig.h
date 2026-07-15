#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_C7D37EEC42AD0387_OFFSET UNITYSDK_OFFSET(0x1CFC1570)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_FC3D060EE7ABA003_OFFSET UNITYSDK_OFFSET(0x1CFC1520)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC1560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnAttributeAppendConfig_TypeDefinitionIndex = 17128;

	class RogueModifierLevelUpRoomCardOnAttributeAppendConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC3D060EE7ABA003(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_FC3D060EE7ABA003_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7D37EEC42AD0387(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_C7D37EEC42AD0387_OFFSET))(a1, a2);
		}
	};
}
