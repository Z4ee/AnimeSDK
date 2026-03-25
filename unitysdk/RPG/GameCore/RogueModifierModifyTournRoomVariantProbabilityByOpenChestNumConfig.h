#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_48E3A1B6A1DC6B96_OFFSET UNITYSDK_OFFSET(0x17636790)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_6322FE975E015ACF_OFFSET UNITYSDK_OFFSET(0x17636860)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig_TypeDefinitionIndex = 16330;

	class RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E3A1B6A1DC6B96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_48E3A1B6A1DC6B96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6322FE975E015ACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityByOpenChestNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYBYOPENCHESTNUMCONFIG_METHOD_3_6322FE975E015ACF_OFFSET))(a1, a2);
		}
	};
}
