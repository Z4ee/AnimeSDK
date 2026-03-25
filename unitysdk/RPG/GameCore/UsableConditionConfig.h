#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicToastConfig; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_USABLECONDITIONCONFIG_METHOD_2_FFAF40007F4E7997_OFFSET UNITYSDK_OFFSET(0x178E7EF0)
#define RPG_GAMECORE_USABLECONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UsableConditionConfig_TypeDefinitionIndex = 16688;

	class UsableConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* UsableCondition; // 0x10
		::RPG::GameCore::UseSkillErrorCode UnusableErrorCode; // 0x18
		::RPG::GameCore::DynamicToastConfig* UnusableTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USABLECONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FFAF40007F4E7997(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UsableConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UsableConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USABLECONDITIONCONFIG_METHOD_2_FFAF40007F4E7997_OFFSET))(a1, a2);
		}
	};
}
