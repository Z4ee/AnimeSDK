#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_METHOD_3_4C9695FF81FC0FEB_OFFSET UNITYSDK_OFFSET(0x1CFC1400)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_METHOD_3_91944EB7AB2462EF_OFFSET UNITYSDK_OFFSET(0x1CFC1450)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC1440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig_TypeDefinitionIndex = 17096;

	class RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C9695FF81FC0FEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_METHOD_3_4C9695FF81FC0FEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91944EB7AB2462EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_METHOD_3_91944EB7AB2462EF_OFFSET))(a1, a2);
		}
	};
}
