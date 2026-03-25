#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_METHOD_2_6DAB9C0C54804E22_OFFSET UNITYSDK_OFFSET(0x1770BBB0)
#define RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillConditionPreshowConfig_TypeDefinitionIndex = 16679;

	class SkillConditionPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Condition; // 0x10
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6DAB9C0C54804E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillConditionPreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillConditionPreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_METHOD_2_6DAB9C0C54804E22_OFFSET))(a1, a2);
		}
	};
}
