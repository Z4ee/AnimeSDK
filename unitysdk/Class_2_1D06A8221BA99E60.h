#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CakeRaceWaitCatGotoPosZ; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D06A8221BA99E60_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB486BE0)
#define CLASS_2_1D06A8221BA99E60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB486DA0)
#define CLASS_2_1D06A8221BA99E60_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB486FE0)
#define CLASS_2_1D06A8221BA99E60_TICK_OFFSET UNITYSDK_OFFSET(0xB487030)
#define CLASS_2_1D06A8221BA99E60__CTOR_OFFSET UNITYSDK_OFFSET(0xB486BD0)
#define CLASS_2_1D06A8221BA99E60__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xB487090)

inline static constexpr unsigned int Class_2_1D06A8221BA99E60_TypeDefinitionIndex = 48593;

class Class_2_1D06A8221BA99E60 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CakeRaceWaitCatGotoPosZ* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D06A8221BA99E60__ONTASKBEGIN_B__4_0_OFFSET))(this);
	}
};
