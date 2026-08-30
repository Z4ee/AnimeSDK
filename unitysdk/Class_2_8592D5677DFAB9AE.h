#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_917F1F304842C84B;
namespace RPG::GameCore { class MemoryVisionPuzzleInit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8592D5677DFAB9AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CF44F0)
#define CLASS_2_8592D5677DFAB9AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CF4590)
#define CLASS_2_8592D5677DFAB9AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CF4810)
#define CLASS_2_8592D5677DFAB9AE_TICK_OFFSET UNITYSDK_OFFSET(0x15CF4860)
#define CLASS_2_8592D5677DFAB9AE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF44B0)

inline static constexpr unsigned int Class_2_8592D5677DFAB9AE_TypeDefinitionIndex = 53294;

class Class_2_8592D5677DFAB9AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MemoryVisionPuzzleInit* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_917F1F304842C84B* PNMFAOJNNIC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MemoryVisionPuzzleInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MemoryVisionPuzzleInit*))((::PBYTE)hIl2Cpp + CLASS_2_8592D5677DFAB9AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8592D5677DFAB9AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8592D5677DFAB9AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8592D5677DFAB9AE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8592D5677DFAB9AE_TICK_OFFSET))(this, a1);
	}
};
