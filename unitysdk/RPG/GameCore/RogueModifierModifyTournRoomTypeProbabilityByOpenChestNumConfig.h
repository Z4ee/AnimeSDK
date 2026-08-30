#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_51CE3131E6B64F0C_OFFSET UNITYSDK_OFFSET(0x1D3FAEC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_A92F84ADBF590388_OFFSET UNITYSDK_OFFSET(0x1D3FAF10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FAF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig_TypeDefinitionIndex = 17567;

	class RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51CE3131E6B64F0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_51CE3131E6B64F0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92F84ADBF590388(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_A92F84ADBF590388_OFFSET))(a1, a2);
		}
	};
}
