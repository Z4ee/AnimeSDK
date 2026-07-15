#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyPerformanceCharacterTriggerFreeStyle; }

#define CLASS_2_403311B54F09C188_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E74370)
#define CLASS_2_403311B54F09C188_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E743C0)
#define CLASS_2_403311B54F09C188_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E748A0)
#define CLASS_2_403311B54F09C188_TICK_OFFSET UNITYSDK_OFFSET(0x15E748F0)
#define CLASS_2_403311B54F09C188__CTOR_OFFSET UNITYSDK_OFFSET(0x15E74360)

inline static constexpr unsigned int Class_2_403311B54F09C188_TypeDefinitionIndex = 51000;

class Class_2_403311B54F09C188 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_2_403311B54F09C188__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_403311B54F09C188_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_403311B54F09C188_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_403311B54F09C188_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_403311B54F09C188_TICK_OFFSET))(this, a1);
	}
};
