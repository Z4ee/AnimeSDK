#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_5768AD4A05ADB5BA_OFFSET UNITYSDK_OFFSET(0x1CFF52A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_75606A6B84A49C17_OFFSET UNITYSDK_OFFSET(0x1CFF51D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF5290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceNeedChaosTargeting_TypeDefinitionIndex = 15353;

	class ComplexSkillAISourceNeedChaosTargeting : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75606A6B84A49C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_75606A6B84A49C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5768AD4A05ADB5BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_METHOD_3_5768AD4A05ADB5BA_OFFSET))(a1, a2);
		}
	};
}
