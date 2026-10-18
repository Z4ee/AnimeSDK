#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }

#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_METHOD_3_1FB9C982EB6D0D4C_OFFSET UNITYSDK_OFFSET(0x1D7E0770)
#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_METHOD_3_F8354E0FE3E312DA_OFFSET UNITYSDK_OFFSET(0x1D7E0950)
#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E0910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCustomVisibilityConfig_TypeDefinitionIndex = 18870;

	class LittleGameCustomVisibilityConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomVisibility; // 0x10
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseVisibleCondition; // 0x20
		::Il2CppArray<::System::Int16>* VisibleValues; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::LittleGameLevelVarConditionLogic LogicOfConditions; // 0x38
		::System::Boolean DoActionOnInitVisible; // 0x3C
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* VisibleActions; // 0x40
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* InvisibleActions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FB9C982EB6D0D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCustomVisibilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCustomVisibilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_METHOD_3_1FB9C982EB6D0D4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8354E0FE3E312DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_METHOD_3_F8354E0FE3E312DA_OFFSET))(a1, a2);
		}
	};
}
