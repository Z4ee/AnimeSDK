#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_46B7D9E6D32C424D_OFFSET UNITYSDK_OFFSET(0x1CE9D880)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_67D6F281D89E222B_OFFSET UNITYSDK_OFFSET(0x1CE9D850)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_CD914DE0954161E7_OFFSET UNITYSDK_OFFSET(0x1CE9D680)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_F4239FF5550ECA7E_OFFSET UNITYSDK_OFFSET(0x1CE9D640)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9D670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackSkillEffect_TypeDefinitionIndex = 23246;

	class ByAttackSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4239FF5550ECA7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_F4239FF5550ECA7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD914DE0954161E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_CD914DE0954161E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67D6F281D89E222B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_67D6F281D89E222B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46B7D9E6D32C424D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_46B7D9E6D32C424D_OFFSET))(a1, a2);
		}
	};
}
