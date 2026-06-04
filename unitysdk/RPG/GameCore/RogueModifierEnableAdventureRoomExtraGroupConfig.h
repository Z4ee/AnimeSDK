#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_7D16C04C2CECF45B_OFFSET UNITYSDK_OFFSET(0x19B4FBE0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_C2C138DF16C055C2_OFFSET UNITYSDK_OFFSET(0x19B5BD20)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableAdventureRoomExtraGroupConfig_TypeDefinitionIndex = 17063;

	class RogueModifierEnableAdventureRoomExtraGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2C138DF16C055C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_C2C138DF16C055C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D16C04C2CECF45B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_7D16C04C2CECF45B_OFFSET))(a1, a2);
		}
	};
}
