#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattlePostureType; }

#define CLASS_2_9757DD5B7AA861D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFD6C50)
#define CLASS_2_9757DD5B7AA861D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFD6C90)
#define CLASS_2_9757DD5B7AA861D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFD6D50)
#define CLASS_2_9757DD5B7AA861D7_TICK_OFFSET UNITYSDK_OFFSET(0xBFD6DA0)
#define CLASS_2_9757DD5B7AA861D7__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD6C40)

inline static constexpr unsigned int Class_2_9757DD5B7AA861D7_TypeDefinitionIndex = 53700;

class Class_2_9757DD5B7AA861D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerBattlePostureType* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattlePostureType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattlePostureType*))((::PBYTE)hIl2Cpp + CLASS_2_9757DD5B7AA861D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9757DD5B7AA861D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9757DD5B7AA861D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9757DD5B7AA861D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9757DD5B7AA861D7_TICK_OFFSET))(this, a1);
	}
};
