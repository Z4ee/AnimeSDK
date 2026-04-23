#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ConditionLoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_120628742D11F9B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119865D0)
#define CLASS_2_120628742D11F9B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11986640)
#define CLASS_2_120628742D11F9B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11986940)
#define CLASS_2_120628742D11F9B9_TICK_OFFSET UNITYSDK_OFFSET(0x11986990)
#define CLASS_2_120628742D11F9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x119864C0)

inline static constexpr unsigned int Class_2_120628742D11F9B9_TypeDefinitionIndex = 50705;

class Class_2_120628742D11F9B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ConditionLoopExecuteTaskList* Field_2_0; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Int32 Field_2_3; // 0x3C

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
