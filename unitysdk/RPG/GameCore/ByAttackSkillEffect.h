#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_15A74C1456240B84_OFFSET UNITYSDK_OFFSET(0x16FFAE80)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_BB61979B41F8D6AC_OFFSET UNITYSDK_OFFSET(0x16FFADB0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFAE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackSkillEffect_TypeDefinitionIndex = 21742;

	class ByAttackSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB61979B41F8D6AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_BB61979B41F8D6AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15A74C1456240B84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_15A74C1456240B84_OFFSET))(a1, a2);
		}
	};
}
