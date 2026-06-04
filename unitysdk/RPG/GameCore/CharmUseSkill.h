#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARMUSESKILL_METHOD_3_B8DAE52D00A386B2_OFFSET UNITYSDK_OFFSET(0x19616E40)
#define RPG_GAMECORE_CHARMUSESKILL_METHOD_3_ECC15B3979DD8470_OFFSET UNITYSDK_OFFSET(0x19616D60)
#define RPG_GAMECORE_CHARMUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19616DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharmUseSkill_TypeDefinitionIndex = 22374;

	class CharmUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::System::Boolean DisableSPAdd; // 0x30
		::System::Boolean DisableBPAdd; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECC15B3979DD8470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharmUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharmUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL_METHOD_3_ECC15B3979DD8470_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8DAE52D00A386B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharmUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharmUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL_METHOD_3_B8DAE52D00A386B2_OFFSET))(a1, a2);
		}
	};
}
