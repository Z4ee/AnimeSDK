#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }

#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_METHOD_3_765222DF2DC6A623_OFFSET UNITYSDK_OFFSET(0x1D0FFC70)
#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_METHOD_3_7EFC688FAB9BB97B_OFFSET UNITYSDK_OFFSET(0x1D0FC930)
#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FC920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCheckAndSaveTargetsPredicateConfig_TypeDefinitionIndex = 18167;

	class CakeRaceCheckAndSaveTargetsPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* Selector; // 0x18
		::System::Boolean IsSave; // 0x20
		::System::UInt32 GreaterThanNums; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_765222DF2DC6A623(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_METHOD_3_765222DF2DC6A623_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EFC688FAB9BB97B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_METHOD_3_7EFC688FAB9BB97B_OFFSET))(a1, a2);
		}
	};
}
