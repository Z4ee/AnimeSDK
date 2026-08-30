#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_7D16C04C2CECF45B_OFFSET UNITYSDK_OFFSET(0x1D3F74D0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_9C2D998B97D27FF7_OFFSET UNITYSDK_OFFSET(0x1D3F7480)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F74C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableAdventureRoomExtraGroupConfig_TypeDefinitionIndex = 17741;

	class RogueModifierEnableAdventureRoomExtraGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C2D998B97D27FF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_9C2D998B97D27FF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D16C04C2CECF45B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_METHOD_3_7D16C04C2CECF45B_OFFSET))(a1, a2);
		}
	};
}
