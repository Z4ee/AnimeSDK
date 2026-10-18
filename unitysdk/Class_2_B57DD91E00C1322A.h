#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDynamicStageBattleEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B57DD91E00C1322A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6822C0)
#define CLASS_2_B57DD91E00C1322A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB682300)
#define CLASS_2_B57DD91E00C1322A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB682920)
#define CLASS_2_B57DD91E00C1322A_TICK_OFFSET UNITYSDK_OFFSET(0xB682970)
#define CLASS_2_B57DD91E00C1322A__CTOR_OFFSET UNITYSDK_OFFSET(0xB6822B0)

inline static constexpr unsigned int Class_2_B57DD91E00C1322A_TypeDefinitionIndex = 55402;

class Class_2_B57DD91E00C1322A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDynamicStageBattleEvent* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
