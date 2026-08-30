#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B0507D29BC589620_OFFSET UNITYSDK_OFFSET(0x1D9AEF00)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B3E58AB1AEB32E5D_OFFSET UNITYSDK_OFFSET(0x1D9AEC90)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AEEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskList_TypeDefinitionIndex = 23204;

	class ConditionLoopExecuteTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::RPG::GameCore::DynamicFloat* MaxLoopCount; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3E58AB1AEB32E5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B3E58AB1AEB32E5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0507D29BC589620(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B0507D29BC589620_OFFSET))(a1, a2);
		}
	};
}
