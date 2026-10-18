#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomLoadConditionType.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }
namespace RPG::GameCore { class LittleGameSubMissionCondition; }

#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_METHOD_3_1DDA9E69D2EFB0EF_OFFSET UNITYSDK_OFFSET(0x1D7B2790)
#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_METHOD_3_7070DD99761F1B20_OFFSET UNITYSDK_OFFSET(0x1D7B25B0)
#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B2750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCustomLoadConfig_TypeDefinitionIndex = 18869;

	class LittleGameCustomLoadConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomLoad; // 0x10
		::RPG::GameCore::LittleGameCustomLoadConditionType ConditionType; // 0x14
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseLoadCondition; // 0x20
		::Il2CppArray<::System::Int16>* LoadValues; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::LittleGameLevelVarConditionLogic LogicOfConditions; // 0x38
		::Il2CppArray<::RPG::GameCore::LittleGameSubMissionCondition*>* SubMissionConditions; // 0x40
		::RPG::GameCore::LittleGameLevelVarConditionLogic SubMissionLogicOfConditions; // 0x48
		::System::Boolean DoActionOnInitLoad; // 0x4C
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* LoadActions; // 0x50
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* UnloadActions; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7070DD99761F1B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCustomLoadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCustomLoadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_METHOD_3_7070DD99761F1B20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DDA9E69D2EFB0EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_METHOD_3_1DDA9E69D2EFB0EF_OFFSET))(a1, a2);
		}
	};
}
