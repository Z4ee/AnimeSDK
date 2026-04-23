#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowRaidFinishUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B3CBB17B7F8FA2E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111BEB60)
#define CLASS_2_B3CBB17B7F8FA2E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111BE9B0)
#define CLASS_2_B3CBB17B7F8FA2E2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111BEB10)
#define CLASS_2_B3CBB17B7F8FA2E2_TICK_OFFSET UNITYSDK_OFFSET(0x111BEBA0)
#define CLASS_2_B3CBB17B7F8FA2E2__CTOR_OFFSET UNITYSDK_OFFSET(0x111BE9A0)

inline static constexpr unsigned int Class_2_B3CBB17B7F8FA2E2_TypeDefinitionIndex = 54097;

class Class_2_B3CBB17B7F8FA2E2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowRaidFinishUI* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRaidFinishUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRaidFinishUI*))((::PBYTE)hIl2Cpp + CLASS_2_B3CBB17B7F8FA2E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3CBB17B7F8FA2E2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3CBB17B7F8FA2E2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3CBB17B7F8FA2E2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B3CBB17B7F8FA2E2_TICK_OFFSET))(this, a1);
	}
};
