#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_5768AD4A05ADB5BA_OFFSET UNITYSDK_OFFSET(0x1882DE50)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_CC7BE492F202748E_OFFSET UNITYSDK_OFFSET(0x1882FE80)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING__CTOR_OFFSET UNITYSDK_OFFSET(0x1882DE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceNeedChaosTargeting_TypeDefinitionIndex = 14692;

	class ComplexSkillAISourceNeedChaosTargeting : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC7BE492F202748E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_CC7BE492F202748E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5768AD4A05ADB5BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_5768AD4A05ADB5BA_OFFSET))(a1, a2);
		}
	};
}
