#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MonopolyCheckSwitchMap; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C9F2DFE91A4FEE0B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD14C80)
#define CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0xCD14780)
#define CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0xCD149A0)
#define CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xCD148F0)
#define CLASS_2_C9F2DFE91A4FEE0B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCD14A50)
#define CLASS_2_C9F2DFE91A4FEE0B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCD14BA0)
#define CLASS_2_C9F2DFE91A4FEE0B_TICK_OFFSET UNITYSDK_OFFSET(0xCD14D50)
#define CLASS_2_C9F2DFE91A4FEE0B__CTOR_OFFSET UNITYSDK_OFFSET(0xCD145A0)

inline static constexpr unsigned int Class_2_C9F2DFE91A4FEE0B_TypeDefinitionIndex = 58367;

class Class_2_C9F2DFE91A4FEE0B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CMMPAANPDKL; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* NBBPEAJLNED; // 0x28
	::Class_3_07C3C4D2990C49EE* NNJOKIJLKKG; // 0x30
	::RPG::GameCore::MonopolyCheckSwitchMap* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* DENDFLNKMLH; // 0x40
	::Class_3_07C3C4D2990C49EE* KMBLBLPDHDI; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_14F96CE90F77CBB9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_14F96CE90F77CBB9_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_METHOD_2_4DA6D4A624E42CAB_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9F2DFE91A4FEE0B_TICK_OFFSET))(this, a1);
	}
};
