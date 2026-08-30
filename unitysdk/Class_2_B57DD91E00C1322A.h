#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDynamicStageBattleEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B57DD91E00C1322A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB811990)
#define CLASS_2_B57DD91E00C1322A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8119D0)
#define CLASS_2_B57DD91E00C1322A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB811FE0)
#define CLASS_2_B57DD91E00C1322A_TICK_OFFSET UNITYSDK_OFFSET(0xB812030)
#define CLASS_2_B57DD91E00C1322A__CTOR_OFFSET UNITYSDK_OFFSET(0xB811980)

inline static constexpr unsigned int Class_2_B57DD91E00C1322A_TypeDefinitionIndex = 55595;

class Class_2_B57DD91E00C1322A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetDynamicStageBattleEvent* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicStageBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicStageBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_2_B57DD91E00C1322A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57DD91E00C1322A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57DD91E00C1322A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57DD91E00C1322A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B57DD91E00C1322A_TICK_OFFSET))(this, a1);
	}
};
