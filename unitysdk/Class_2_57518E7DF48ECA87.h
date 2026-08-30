#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAdditiveAnimState; }

#define CLASS_2_57518E7DF48ECA87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157813E0)
#define CLASS_2_57518E7DF48ECA87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15781420)
#define CLASS_2_57518E7DF48ECA87_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15781AE0)
#define CLASS_2_57518E7DF48ECA87_TICK_OFFSET UNITYSDK_OFFSET(0x15781B30)
#define CLASS_2_57518E7DF48ECA87__CTOR_OFFSET UNITYSDK_OFFSET(0x157813D0)

inline static constexpr unsigned int Class_2_57518E7DF48ECA87_TypeDefinitionIndex = 55903;

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
