#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomLoadConditionType.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelVarConditionLogic.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimLevelVarCondition; }
namespace RPG::GameCore { class FiveDimSubMissionCondition; }

#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_3_2BEDDC9746FD8EB9_OFFSET UNITYSDK_OFFSET(0x188FBB50)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_3_8B2E1B5245FB7E31_OFFSET UNITYSDK_OFFSET(0x188FBC10)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FBBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCustomLoadConfig_TypeDefinitionIndex = 17675;

	class FiveDimCustomLoadConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomLoad; // 0x10
		::RPG::GameCore::FiveDimCustomLoadConditionType ConditionType; // 0x14
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseLoadCondition; // 0x20
		::Il2CppArray<::System::Int16>* LoadValues; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::FiveDimLevelVarConditionLogic LogicOfConditions; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimSubMissionCondition*>* SubMissionConditions; // 0x40
		::RPG::GameCore::FiveDimLevelVarConditionLogic SubMissionLogicOfConditions; // 0x48
		::System::Boolean DoActionOnInitLoad; // 0x4C
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* LoadActions; // 0x50
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* UnloadActions; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BEDDC9746FD8EB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomLoadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomLoadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_3_2BEDDC9746FD8EB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B2E1B5245FB7E31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_3_8B2E1B5245FB7E31_OFFSET))(a1, a2);
		}
	};
}
