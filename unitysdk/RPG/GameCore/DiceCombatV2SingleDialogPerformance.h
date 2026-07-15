#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceGenderSpec.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceTiming.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_METHOD_2_BD57389CB7097FB4_OFFSET UNITYSDK_OFFSET(0x1C11C300)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11C5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformance_TypeDefinitionIndex = 15577;

	class DiceCombatV2SingleDialogPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition* TriggerCondition; // 0x10
		::RPG::GameCore::DiceCombatV2DialogPerformanceTiming Timing; // 0x18
		::System::Int32 MaxTriggerCount; // 0x1C
		::System::Int32 Priority; // 0x20
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x28
		::System::Boolean SkipBeforeBossChangePhase; // 0x30
		::RPG::GameCore::DiceCombatV2DialogPerformanceGenderSpec GenderSpec; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BD57389CB7097FB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_METHOD_2_BD57389CB7097FB4_OFFSET))(a1, a2);
		}
	};
}
