#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_METHOD_3_B0AD13F2805D1353_OFFSET UNITYSDK_OFFSET(0x18D3F840)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_METHOD_3_CA13353AED42459A_OFFSET UNITYSDK_OFFSET(0x18D3F770)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig_TypeDefinitionIndex = 16957;

	class RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA13353AED42459A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_METHOD_3_CA13353AED42459A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0AD13F2805D1353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_METHOD_3_B0AD13F2805D1353_OFFSET))(a1, a2);
		}
	};
}
