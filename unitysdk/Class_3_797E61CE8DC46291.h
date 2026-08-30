#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"

class Class_2_21055A9FA74B791E;
class Class_2_9A097580DF02CED3;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvTriggerAIPlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_797E61CE8DC46291_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB589C80)
#define CLASS_3_797E61CE8DC46291_METHOD_3_5700582BC8616701_OFFSET UNITYSDK_OFFSET(0xB58A750)
#define CLASS_3_797E61CE8DC46291_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB58A640)
#define CLASS_3_797E61CE8DC46291_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB589D90)
#define CLASS_3_797E61CE8DC46291_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB58A5A0)
#define CLASS_3_797E61CE8DC46291_TICK_OFFSET UNITYSDK_OFFSET(0xB58A300)
#define CLASS_3_797E61CE8DC46291__CTOR_OFFSET UNITYSDK_OFFSET(0xB589BC0)

inline static constexpr unsigned int Class_3_797E61CE8DC46291_TypeDefinitionIndex = 52792;

class Class_3_797E61CE8DC46291 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_9A097580DF02CED3* DFMOOFNKPOG; // 0x30
	::RPG::GameCore::AdvTriggerAIPlaySmartObject* OFKGLJOAMLD; // 0x38
	::Class_2_21055A9FA74B791E* PJLGDHFHFLO; // 0x40
	::Class_3_07C3C4D2990C49EE* BJLJAHMLKIO; // 0x48
	::System::UInt64 OHICNFCJKCM; // 0x50
	::System::UInt32 LCJDAMMJLEI; // 0x58
	::System::Boolean FNEJMBKLEIP; // 0x5C
	::System::UInt32 MMILCBFLPDJ; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_5700582BC8616701(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_METHOD_3_5700582BC8616701_OFFSET))(this, a1);
	}
};
