#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_METHOD_3_74577F94FD505951_OFFSET UNITYSDK_OFFSET(0x19B543A0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_METHOD_3_DE68C1D942504AB8_OFFSET UNITYSDK_OFFSET(0x19B5E620)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B54350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig_TypeDefinitionIndex = 16971;

	class RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE68C1D942504AB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_METHOD_3_DE68C1D942504AB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74577F94FD505951(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_METHOD_3_74577F94FD505951_OFFSET))(a1, a2);
		}
	};
}
