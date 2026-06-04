#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForWithTaskList; }

#define CLASS_2_A439DD16FC7D149C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C44400)
#define CLASS_2_A439DD16FC7D149C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C44490)
#define CLASS_2_A439DD16FC7D149C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C44650)
#define CLASS_2_A439DD16FC7D149C_TICK_OFFSET UNITYSDK_OFFSET(0x13C446A0)
#define CLASS_2_A439DD16FC7D149C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C442D0)

inline static constexpr unsigned int Class_2_A439DD16FC7D149C_TypeDefinitionIndex = 55028;

class Class_2_A439DD16FC7D149C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::WaitForWithTaskList* Field_2_3; // 0x30

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
