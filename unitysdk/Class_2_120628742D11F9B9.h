#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ConditionLoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_120628742D11F9B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19361030)
#define CLASS_2_120628742D11F9B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19361110)
#define CLASS_2_120628742D11F9B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19361370)
#define CLASS_2_120628742D11F9B9_TICK_OFFSET UNITYSDK_OFFSET(0x193613C0)
#define CLASS_2_120628742D11F9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x19360F20)

inline static constexpr unsigned int Class_2_120628742D11F9B9_TypeDefinitionIndex = 52483;

class Class_2_120628742D11F9B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::RPG::GameCore::ConditionLoopExecuteTaskList* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Int32 Field_2_5; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + CLASS_2_120628742D11F9B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120628742D11F9B9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120628742D11F9B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120628742D11F9B9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_120628742D11F9B9_TICK_OFFSET))(this, a1);
	}
};
