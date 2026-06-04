#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseSettle; }

#define CLASS_2_E9BCC50B2E0827FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA995960)
#define CLASS_2_E9BCC50B2E0827FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9959A0)
#define CLASS_2_E9BCC50B2E0827FD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA995A40)
#define CLASS_2_E9BCC50B2E0827FD_TICK_OFFSET UNITYSDK_OFFSET(0xA995A90)
#define CLASS_2_E9BCC50B2E0827FD__CTOR_OFFSET UNITYSDK_OFFSET(0xA995950)

inline static constexpr unsigned int Class_2_E9BCC50B2E0827FD_TypeDefinitionIndex = 55114;

class Class_2_E9BCC50B2E0827FD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerPamActionPhaseSettle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseSettle*))((::PBYTE)hIl2Cpp + CLASS_2_E9BCC50B2E0827FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BCC50B2E0827FD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BCC50B2E0827FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BCC50B2E0827FD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9BCC50B2E0827FD_TICK_OFFSET))(this, a1);
	}
};
