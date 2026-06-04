#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class LoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2CD86060417219B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CB96F0)
#define CLASS_2_2CD86060417219B9_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x13CB9810)
#define CLASS_2_2CD86060417219B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CB9760)
#define CLASS_2_2CD86060417219B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CB9A60)
#define CLASS_2_2CD86060417219B9_TICK_OFFSET UNITYSDK_OFFSET(0x13CB9AB0)
#define CLASS_2_2CD86060417219B9__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB9670)

inline static constexpr unsigned int Class_2_2CD86060417219B9_TypeDefinitionIndex = 51521;

class Class_2_2CD86060417219B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LoopExecuteTaskList* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopExecuteTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopExecuteTaskList*))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CD86060417219B9_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}
};
