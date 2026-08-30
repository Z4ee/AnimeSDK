#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GoNextTargetInList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_67FC55E2E38D06BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A8B730)
#define CLASS_2_67FC55E2E38D06BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A8B770)
#define CLASS_2_67FC55E2E38D06BB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A8BA80)
#define CLASS_2_67FC55E2E38D06BB_TICK_OFFSET UNITYSDK_OFFSET(0x18A8BAD0)
#define CLASS_2_67FC55E2E38D06BB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8B720)

inline static constexpr unsigned int Class_2_67FC55E2E38D06BB_TypeDefinitionIndex = 55292;

class Class_2_67FC55E2E38D06BB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GoNextTargetInList* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GoNextTargetInList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GoNextTargetInList*))((::PBYTE)hIl2Cpp + CLASS_2_67FC55E2E38D06BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC55E2E38D06BB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC55E2E38D06BB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC55E2E38D06BB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67FC55E2E38D06BB_TICK_OFFSET))(this, a1);
	}
};
