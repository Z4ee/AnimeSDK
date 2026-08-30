#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG_METHOD_3_B231F61AA506EA95_OFFSET UNITYSDK_OFFSET(0x1D3FAFD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG_METHOD_3_CEDE7E42491EF071_OFFSET UNITYSDK_OFFSET(0x1D3FAF80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FAFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomVariantProbabilityConfig_TypeDefinitionIndex = 17562;

	class RogueModifierModifyTournRoomVariantProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEDE7E42491EF071(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG_METHOD_3_CEDE7E42491EF071_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B231F61AA506EA95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomVariantProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMVARIANTPROBABILITYCONFIG_METHOD_3_B231F61AA506EA95_OFFSET))(a1, a2);
		}
	};
}
