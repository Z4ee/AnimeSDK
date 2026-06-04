#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_METHOD_2_F6C1338D6D38D129_OFFSET UNITYSDK_OFFSET(0x193CF690)
#define RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193CF7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSwitchCaseItemConfig_TypeDefinitionIndex = 16189;

	class ActionSwitchCaseItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* CaseValue; // 0x10
		::RPG::GameCore::MiActionConfigBase* CaseAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F6C1338D6D38D129(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSwitchCaseItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSwitchCaseItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_METHOD_2_F6C1338D6D38D129_OFFSET))(a1, a2);
		}
	};
}
