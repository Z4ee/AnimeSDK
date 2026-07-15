#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5112518BD1B5B872.h"

namespace RPG::GameCore { class LoopExecuteTaskListWithInterval; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36B87CE9EB174F14_METHOD_3_16B9E24D32771844_OFFSET UNITYSDK_OFFSET(0x17F03870)
#define CLASS_3_36B87CE9EB174F14_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x17F03630)
#define CLASS_3_36B87CE9EB174F14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F03530)
#define CLASS_3_36B87CE9EB174F14__CTOR_OFFSET UNITYSDK_OFFSET(0x17F034F0)

inline static constexpr unsigned int Class_3_36B87CE9EB174F14_TypeDefinitionIndex = 52665;

class Class_3_36B87CE9EB174F14 : public ::Class_2_5112518BD1B5B872
{
public:
	::RPG::GameCore::LoopExecuteTaskListWithInterval* Field_3_0; // 0x30
	::System::Int32 Field_3_1; // 0x38
	::System::Int32 Field_3_2; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + CLASS_3_36B87CE9EB174F14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B87CE9EB174F14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_16B9E24D32771844()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B87CE9EB174F14_METHOD_3_16B9E24D32771844_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B87CE9EB174F14_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}
};
