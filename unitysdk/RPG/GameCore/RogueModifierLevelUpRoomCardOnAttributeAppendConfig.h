#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_86AEFE0E5DD0CD0E_OFFSET UNITYSDK_OFFSET(0x19B5E520)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_C7D37EEC42AD0387_OFFSET UNITYSDK_OFFSET(0x19B541E0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B54190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnAttributeAppendConfig_TypeDefinitionIndex = 16966;

	class RogueModifierLevelUpRoomCardOnAttributeAppendConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86AEFE0E5DD0CD0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_86AEFE0E5DD0CD0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7D37EEC42AD0387(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_METHOD_3_C7D37EEC42AD0387_OFFSET))(a1, a2);
		}
	};
}
