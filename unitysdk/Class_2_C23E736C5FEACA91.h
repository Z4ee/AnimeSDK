#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CakeRaceWaitDragProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C23E736C5FEACA91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B8E0E0)
#define CLASS_2_C23E736C5FEACA91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B8E2C0)
#define CLASS_2_C23E736C5FEACA91_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B8E530)
#define CLASS_2_C23E736C5FEACA91_TICK_OFFSET UNITYSDK_OFFSET(0x15B8E580)
#define CLASS_2_C23E736C5FEACA91__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8E0D0)
#define CLASS_2_C23E736C5FEACA91__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B8E5E0)

inline static constexpr unsigned int Class_2_C23E736C5FEACA91_TypeDefinitionIndex = 52900;

class Class_2_C23E736C5FEACA91 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CakeRaceWaitDragProp* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitDragProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitDragProp*))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23E736C5FEACA91__ONTASKBEGIN_B__4_0_OFFSET))(this);
	}
};
