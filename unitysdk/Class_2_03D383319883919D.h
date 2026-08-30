#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwordTrainingCheckIfGameStarted; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_03D383319883919D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179DB630)
#define CLASS_2_03D383319883919D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179DB3C0)
#define CLASS_2_03D383319883919D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179DB550)
#define CLASS_2_03D383319883919D_TICK_OFFSET UNITYSDK_OFFSET(0x179DB710)
#define CLASS_2_03D383319883919D__CTOR_OFFSET UNITYSDK_OFFSET(0x179DB2B0)

inline static constexpr unsigned int Class_2_03D383319883919D_TypeDefinitionIndex = 55888;

class Class_2_03D383319883919D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* DLJHJKLMADI; // 0x18
	::Class_3_07C3C4D2990C49EE* LFJJOIAIPBK; // 0x20
	::Class_3_07C3C4D2990C49EE* EHNIBALCKFG; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::RPG::GameCore::SwordTrainingCheckIfGameStarted* OFKGLJOAMLD; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_TICK_OFFSET))(this, a1);
	}
};
