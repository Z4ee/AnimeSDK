#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ConditionLoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_120628742D11F9B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99E3390)
#define CLASS_2_120628742D11F9B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99E3400)
#define CLASS_2_120628742D11F9B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99E3700)
#define CLASS_2_120628742D11F9B9_TICK_OFFSET UNITYSDK_OFFSET(0x99E3750)
#define CLASS_2_120628742D11F9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x99E3280)

inline static constexpr unsigned int Class_2_120628742D11F9B9_TypeDefinitionIndex = 44003;

class Class_2_120628742D11F9B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x18
	::RPG::GameCore::ConditionLoopExecuteTaskList* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30
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
