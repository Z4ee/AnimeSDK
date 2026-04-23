#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionLoopExecuteTaskList.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_5F31400169E49685_OFFSET UNITYSDK_OFFSET(0x18832D20)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_EA6F8544520E6CE5_OFFSET UNITYSDK_OFFSET(0x18832AE0)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18832A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskListWithInterval_TypeDefinitionIndex = 21353;

	class ConditionLoopExecuteTaskListWithInterval : public ::RPG::GameCore::ConditionLoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F31400169E49685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_5F31400169E49685_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA6F8544520E6CE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_EA6F8544520E6CE5_OFFSET))(a1, a2);
		}
	};
}
