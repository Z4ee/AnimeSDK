#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_388104DA4DF32D40_OFFSET UNITYSDK_OFFSET(0x1874E050)
#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_84E464EA4C3A8C28_OFFSET UNITYSDK_OFFSET(0x1874DF80)
#define RPG_GAMECORE_BYISALLOWUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1874E000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllowUseSkill_TypeDefinitionIndex = 21978;

	class ByIsAllowUseSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_84E464EA4C3A8C28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_84E464EA4C3A8C28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_388104DA4DF32D40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_388104DA4DF32D40_OFFSET))(a1, a2);
		}
	};
}
