#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_METHOD_3_A628091787011405_OFFSET UNITYSDK_OFFSET(0x17638540)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_METHOD_3_D5C1FF1991EF876C_OFFSET UNITYSDK_OFFSET(0x17638470)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176384F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig_TypeDefinitionIndex = 16316;

	class RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5C1FF1991EF876C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_METHOD_3_D5C1FF1991EF876C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A628091787011405(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_METHOD_3_A628091787011405_OFFSET))(a1, a2);
		}
	};
}
