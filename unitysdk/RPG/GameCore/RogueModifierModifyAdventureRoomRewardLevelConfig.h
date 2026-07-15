#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG_METHOD_3_25FA5828DEDE7372_OFFSET UNITYSDK_OFFSET(0x1D1634B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG_METHOD_3_407CE17F4ECDFD96_OFFSET UNITYSDK_OFFSET(0x1D163460)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1634A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAdventureRoomRewardLevelConfig_TypeDefinitionIndex = 17031;

	class RogueModifierModifyAdventureRoomRewardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_407CE17F4ECDFD96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomRewardLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAdventureRoomRewardLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG_METHOD_3_407CE17F4ECDFD96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25FA5828DEDE7372(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomRewardLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAdventureRoomRewardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMREWARDLEVELCONFIG_METHOD_3_25FA5828DEDE7372_OFFSET))(a1, a2);
		}
	};
}
