#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AB15346C01C2EEE5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA59770)
#define CLASS_2_AB15346C01C2EEE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA598A0)
#define CLASS_2_AB15346C01C2EEE5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA597F0)
#define CLASS_2_AB15346C01C2EEE5_TICK_OFFSET UNITYSDK_OFFSET(0x1AA59840)
#define CLASS_2_AB15346C01C2EEE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA59680)

inline static constexpr unsigned int Class_2_AB15346C01C2EEE5_TypeDefinitionIndex = 58885;

class Class_2_AB15346C01C2EEE5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::StopSummonUnitGameplay* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::SummonUnitGameplayConfig* IOFNMCBADNM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + CLASS_2_AB15346C01C2EEE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB15346C01C2EEE5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AB15346C01C2EEE5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB15346C01C2EEE5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB15346C01C2EEE5_ONTASKRESET_OFFSET))(this);
	}
};
