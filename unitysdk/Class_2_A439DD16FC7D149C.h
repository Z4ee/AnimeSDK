#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForWithTaskList; }

#define CLASS_2_A439DD16FC7D149C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1800F990)
#define CLASS_2_A439DD16FC7D149C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1800FAF0)
#define CLASS_2_A439DD16FC7D149C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1800FCB0)
#define CLASS_2_A439DD16FC7D149C_TICK_OFFSET UNITYSDK_OFFSET(0x1800FD00)
#define CLASS_2_A439DD16FC7D149C__CTOR_OFFSET UNITYSDK_OFFSET(0x1800F860)

inline static constexpr unsigned int Class_2_A439DD16FC7D149C_TypeDefinitionIndex = 59043;

class Class_2_A439DD16FC7D149C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitForWithTaskList* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* NDOFCGDDHHD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForWithTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForWithTaskList*))((::PBYTE)hIl2Cpp + CLASS_2_A439DD16FC7D149C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A439DD16FC7D149C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A439DD16FC7D149C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A439DD16FC7D149C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A439DD16FC7D149C_TICK_OFFSET))(this, a1);
	}
};
