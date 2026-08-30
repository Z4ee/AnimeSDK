#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionLoopExecuteTaskList.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_563AB3167C08E447_OFFSET UNITYSDK_OFFSET(0x1D9AF380)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_E841E6E450DD567E_OFFSET UNITYSDK_OFFSET(0x1D9AF140)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AF0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskListWithInterval_TypeDefinitionIndex = 22225;

	class ConditionLoopExecuteTaskListWithInterval : public ::RPG::GameCore::ConditionLoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_563AB3167C08E447(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_563AB3167C08E447_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E841E6E450DD567E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_E841E6E450DD567E_OFFSET))(a1, a2);
		}
	};
}
