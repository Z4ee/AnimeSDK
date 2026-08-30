#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PauseToTurnEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A5C08BFF8CA163BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CB1930)
#define CLASS_2_A5C08BFF8CA163BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CB1970)
#define CLASS_2_A5C08BFF8CA163BC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CB1A10)
#define CLASS_2_A5C08BFF8CA163BC_TICK_OFFSET UNITYSDK_OFFSET(0x18CB1A60)
#define CLASS_2_A5C08BFF8CA163BC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB1920)

inline static constexpr unsigned int Class_2_A5C08BFF8CA163BC_TypeDefinitionIndex = 58399;

class Class_2_A5C08BFF8CA163BC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PauseToTurnEnd* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + CLASS_2_A5C08BFF8CA163BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5C08BFF8CA163BC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5C08BFF8CA163BC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5C08BFF8CA163BC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5C08BFF8CA163BC_TICK_OFFSET))(this, a1);
	}
};
