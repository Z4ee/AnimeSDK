#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EndUseSharedSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6645106DA9079AC1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1093C300)
#define CLASS_2_6645106DA9079AC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1093C340)
#define CLASS_2_6645106DA9079AC1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1093C530)
#define CLASS_2_6645106DA9079AC1_TICK_OFFSET UNITYSDK_OFFSET(0x1093C580)
#define CLASS_2_6645106DA9079AC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1093C2F0)

inline static constexpr unsigned int Class_2_6645106DA9079AC1_TypeDefinitionIndex = 46890;

class Class_2_6645106DA9079AC1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EndUseSharedSummonUnit* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_2_6645106DA9079AC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6645106DA9079AC1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6645106DA9079AC1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6645106DA9079AC1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6645106DA9079AC1_TICK_OFFSET))(this, a1);
	}
};
