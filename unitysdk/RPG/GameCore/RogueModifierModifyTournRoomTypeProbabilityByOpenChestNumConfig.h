#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_A92F84ADBF590388_OFFSET UNITYSDK_OFFSET(0x19B992B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_EC3E31FF3AFE68F1_OFFSET UNITYSDK_OFFSET(0x19B991E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig_TypeDefinitionIndex = 16900;

	class RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC3E31FF3AFE68F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_EC3E31FF3AFE68F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92F84ADBF590388(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_A92F84ADBF590388_OFFSET))(a1, a2);
		}
	};
}
