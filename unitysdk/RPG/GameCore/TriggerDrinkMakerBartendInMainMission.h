#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_METHOD_3_1ACED399C7B30420_OFFSET UNITYSDK_OFFSET(0x1D54A770)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_METHOD_3_85204C638CC58F03_OFFSET UNITYSDK_OFFSET(0x1D54A7B0)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDrinkMakerBartendInMainMission_TypeDefinitionIndex = 21469;

	class TriggerDrinkMakerBartendInMainMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FormulaID; // 0x18
		::Il2CppArray<::System::UInt32>* IngredientIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1ACED399C7B30420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_METHOD_3_1ACED399C7B30420_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85204C638CC58F03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_METHOD_3_85204C638CC58F03_OFFSET))(a1, a2);
		}
	};
}
