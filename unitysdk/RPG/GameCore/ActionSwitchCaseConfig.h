#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionSwitchCaseItemConfig; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG_METHOD_4_7B53AD4C83367DD9_OFFSET UNITYSDK_OFFSET(0x185FE800)
#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG_METHOD_4_B397A87BB3064116_OFFSET UNITYSDK_OFFSET(0x185FE700)
#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185FE7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSwitchCaseConfig_TypeDefinitionIndex = 16141;

	class ActionSwitchCaseConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* SwitchValue; // 0x18
		::Il2CppArray<::RPG::GameCore::ActionSwitchCaseItemConfig*>* CaseList; // 0x20
		::RPG::GameCore::MiActionConfigBase* DefaultAction; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Boolean WithBreak; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B397A87BB3064116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSwitchCaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSwitchCaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG_METHOD_4_B397A87BB3064116_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B53AD4C83367DD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSwitchCaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSwitchCaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG_METHOD_4_7B53AD4C83367DD9_OFFSET))(a1, a2);
		}
	};
}
