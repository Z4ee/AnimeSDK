#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_00BA19181AD40DCE_OFFSET UNITYSDK_OFFSET(0x19CD7DF0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_340C239534AF1079_OFFSET UNITYSDK_OFFSET(0x19CD8040)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_9EBD1F1FC25AA957_OFFSET UNITYSDK_OFFSET(0x19CD7DB0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_FE4D6A3081F37127_OFFSET UNITYSDK_OFFSET(0x19CD8010)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD7DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffect_TypeDefinitionIndex = 22196;

	class ByCompareControlSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9EBD1F1FC25AA957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_9EBD1F1FC25AA957_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00BA19181AD40DCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_00BA19181AD40DCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE4D6A3081F37127(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_FE4D6A3081F37127_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_340C239534AF1079(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_340C239534AF1079_OFFSET))(a1, a2);
		}
	};
}
