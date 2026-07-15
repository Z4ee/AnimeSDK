#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_1800A3982D6A3551_OFFSET UNITYSDK_OFFSET(0x19CD8940)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_328C460B6D4808B2_OFFSET UNITYSDK_OFFSET(0x19CD8680)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET UNITYSDK_OFFSET(0x19CD86D0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_38B2EE3544208427_OFFSET UNITYSDK_OFFSET(0x19CD8980)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffectIsDamaging_TypeDefinitionIndex = 22198;

	class ByCompareControlSkillEffectIsDamaging : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Boolean CheckChildSkill; // 0x2C
		::RPG::GameCore::LogicOperation CheckChildSkillLogicType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_328C460B6D4808B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_328C460B6D4808B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3870518E5DCE6DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1800A3982D6A3551(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_1800A3982D6A3551_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38B2EE3544208427(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_38B2EE3544208427_OFFSET))(a1, a2);
		}
	};
}
