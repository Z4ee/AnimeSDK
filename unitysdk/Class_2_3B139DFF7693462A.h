#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEnterBattleTransitionFinish; }

#define CLASS_2_3B139DFF7693462A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1752C2C0)
#define CLASS_2_3B139DFF7693462A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1752C350)
#define CLASS_2_3B139DFF7693462A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1752C300)
#define CLASS_2_3B139DFF7693462A_TICK_OFFSET UNITYSDK_OFFSET(0x1752C4D0)
#define CLASS_2_3B139DFF7693462A__CTOR_OFFSET UNITYSDK_OFFSET(0x1752C2B0)

inline static constexpr unsigned int Class_2_3B139DFF7693462A_TypeDefinitionIndex = 53283;

class Class_2_3B139DFF7693462A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitEnterBattleTransitionFinish* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEnterBattleTransitionFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEnterBattleTransitionFinish*))((::PBYTE)hIl2Cpp + CLASS_2_3B139DFF7693462A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B139DFF7693462A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B139DFF7693462A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B139DFF7693462A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3B139DFF7693462A_TICK_OFFSET))(this, a1);
	}
};
