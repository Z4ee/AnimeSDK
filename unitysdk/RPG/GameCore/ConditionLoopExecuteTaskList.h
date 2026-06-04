#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_35FC7B3FA7A88C54_OFFSET UNITYSDK_OFFSET(0x196722F0)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B0507D29BC589620_OFFSET UNITYSDK_OFFSET(0x196725C0)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19672540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskList_TypeDefinitionIndex = 22190;

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

		static ::System::Void Method_3_35FC7B3FA7A88C54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_35FC7B3FA7A88C54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0507D29BC589620(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_METHOD_3_B0507D29BC589620_OFFSET))(a1, a2);
		}
	};
}
