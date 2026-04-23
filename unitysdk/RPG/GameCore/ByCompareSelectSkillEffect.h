#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_5EC265C2023AEE4F_OFFSET UNITYSDK_OFFSET(0x1873A9C0)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_77FE2ADB05E43A31_OFFSET UNITYSDK_OFFSET(0x1873AA90)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1873AA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect_TypeDefinitionIndex = 21945;

	class ByCompareSelectSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5EC265C2023AEE4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_5EC265C2023AEE4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77FE2ADB05E43A31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_METHOD_4_77FE2ADB05E43A31_OFFSET))(a1, a2);
		}
	};
}
