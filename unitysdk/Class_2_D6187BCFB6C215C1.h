#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierPhase1Perform; }

#define CLASS_2_D6187BCFB6C215C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183F2430)
#define CLASS_2_D6187BCFB6C215C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183F2470)
#define CLASS_2_D6187BCFB6C215C1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x183F2560)
#define CLASS_2_D6187BCFB6C215C1_TICK_OFFSET UNITYSDK_OFFSET(0x183F25B0)
#define CLASS_2_D6187BCFB6C215C1__CTOR_OFFSET UNITYSDK_OFFSET(0x183F2420)

inline static constexpr unsigned int Class_2_D6187BCFB6C215C1_TypeDefinitionIndex = 53226;

class Class_2_D6187BCFB6C215C1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerModifierPhase1Perform* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierPhase1Perform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierPhase1Perform*))((::PBYTE)hIl2Cpp + CLASS_2_D6187BCFB6C215C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6187BCFB6C215C1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6187BCFB6C215C1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6187BCFB6C215C1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D6187BCFB6C215C1_TICK_OFFSET))(this, a1);
	}
};
