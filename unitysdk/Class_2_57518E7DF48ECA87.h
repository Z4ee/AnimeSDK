#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAdditiveAnimState; }

#define CLASS_2_57518E7DF48ECA87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A5AAD0)
#define CLASS_2_57518E7DF48ECA87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A5AB10)
#define CLASS_2_57518E7DF48ECA87_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A5B1D0)
#define CLASS_2_57518E7DF48ECA87_TICK_OFFSET UNITYSDK_OFFSET(0x15A5B220)
#define CLASS_2_57518E7DF48ECA87__CTOR_OFFSET UNITYSDK_OFFSET(0x15A5AAC0)

inline static constexpr unsigned int Class_2_57518E7DF48ECA87_TypeDefinitionIndex = 55713;

class Class_2_57518E7DF48ECA87 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerAdditiveAnimState* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAdditiveAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAdditiveAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_57518E7DF48ECA87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57518E7DF48ECA87_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57518E7DF48ECA87_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57518E7DF48ECA87_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57518E7DF48ECA87_TICK_OFFSET))(this, a1);
	}
};
