#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CakeRaceWaitCatGotoPosZ; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D06A8221BA99E60_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0EAEC0)
#define CLASS_2_1D06A8221BA99E60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0EB080)
#define CLASS_2_1D06A8221BA99E60_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0EB2D0)
#define CLASS_2_1D06A8221BA99E60_TICK_OFFSET UNITYSDK_OFFSET(0xC0EB320)
#define CLASS_2_1D06A8221BA99E60__CTOR_OFFSET UNITYSDK_OFFSET(0xC0EAEB0)
#define CLASS_2_1D06A8221BA99E60__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xC0EB380)

inline static constexpr unsigned int Class_2_1D06A8221BA99E60_TypeDefinitionIndex = 52898;

class Class_2_1D06A8221BA99E60 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CakeRaceWaitCatGotoPosZ* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
