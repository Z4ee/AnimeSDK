#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelVarConditionLogic.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimLevelVarCondition; }

#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_3_296F3507F4BB6036_OFFSET UNITYSDK_OFFSET(0x171EE430)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_3_60F474BD0EB5809D_OFFSET UNITYSDK_OFFSET(0x171EE370)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EE3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCustomVisibilityConfig_TypeDefinitionIndex = 17077;

	class FiveDimCustomVisibilityConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomVisibility; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseVisibleCondition; // 0x20
		::Il2CppArray<::System::Int16>* VisibleValues; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::FiveDimLevelVarConditionLogic LogicOfConditions; // 0x38
		::System::Boolean DoActionOnInitVisible; // 0x3C
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* VisibleActions; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* InvisibleActions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60F474BD0EB5809D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_3_60F474BD0EB5809D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_296F3507F4BB6036(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_3_296F3507F4BB6036_OFFSET))(a1, a2);
		}
	};
}
