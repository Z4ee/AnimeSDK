#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETARGETUSESKILL_METHOD_3_4BB6B2DF536A0F70_OFFSET UNITYSDK_OFFSET(0x1CBBEE20)
#define RPG_GAMECORE_ADVENTURETARGETUSESKILL_METHOD_3_9382308952D16225_OFFSET UNITYSDK_OFFSET(0x1CBBED80)
#define RPG_GAMECORE_ADVENTURETARGETUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBEDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTargetUseSkill_TypeDefinitionIndex = 19969;

	class AdventureTargetUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::System::Boolean IsCombo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9382308952D16225(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTargetUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTargetUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL_METHOD_3_9382308952D16225_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BB6B2DF536A0F70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL_METHOD_3_4BB6B2DF536A0F70_OFFSET))(a1, a2);
		}
	};
}
