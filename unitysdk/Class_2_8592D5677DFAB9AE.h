#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_917F1F304842C84B;
namespace RPG::GameCore { class MemoryVisionPuzzleInit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8592D5677DFAB9AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A6C3C0)
#define CLASS_2_8592D5677DFAB9AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A6C460)
#define CLASS_2_8592D5677DFAB9AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A6C6E0)
#define CLASS_2_8592D5677DFAB9AE_TICK_OFFSET UNITYSDK_OFFSET(0x18A6C730)
#define CLASS_2_8592D5677DFAB9AE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6C380)

inline static constexpr unsigned int Class_2_8592D5677DFAB9AE_TypeDefinitionIndex = 53294;

class Class_2_8592D5677DFAB9AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_917F1F304842C84B* PNMFAOJNNIC; // 0x20
	::RPG::GameCore::MemoryVisionPuzzleInit* OFKGLJOAMLD; // 0x28

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
