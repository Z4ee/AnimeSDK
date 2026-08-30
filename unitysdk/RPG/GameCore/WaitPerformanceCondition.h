#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/BattlePerformanceCondition.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPERFORMANCECONDITION_METHOD_3_79E857B25E445446_OFFSET UNITYSDK_OFFSET(0x1D6A7AE0)
#define RPG_GAMECORE_WAITPERFORMANCECONDITION_METHOD_3_9205531DA4CE0C8E_OFFSET UNITYSDK_OFFSET(0x1D6A7B90)
#define RPG_GAMECORE_WAITPERFORMANCECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A7B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPerformanceCondition_TypeDefinitionIndex = 23112;

	class WaitPerformanceCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattlePerformanceCondition ConditionType; // 0x18
		::System::String* ActiveCustomString; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x30
		::System::String* SkillName; // 0x38
		::System::String* InsertAbilityName; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x48
		::System::Boolean TurnBeginIgnoreTargetType; // 0x50
		::System::Boolean Repeat; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79E857B25E445446(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION_METHOD_3_79E857B25E445446_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9205531DA4CE0C8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION_METHOD_3_9205531DA4CE0C8E_OFFSET))(a1, a2);
		}
	};
}
