#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GoNextTargetInList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_67FC55E2E38D06BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128404B0)
#define CLASS_2_67FC55E2E38D06BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128404F0)
#define CLASS_2_67FC55E2E38D06BB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12840610)
#define CLASS_2_67FC55E2E38D06BB_TICK_OFFSET UNITYSDK_OFFSET(0x12840660)
#define CLASS_2_67FC55E2E38D06BB__CTOR_OFFSET UNITYSDK_OFFSET(0x128404A0)

inline static constexpr unsigned int Class_2_67FC55E2E38D06BB_TypeDefinitionIndex = 50783;

class Class_2_67FC55E2E38D06BB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::GoNextTargetInList* Field_2_0; // 0x20

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
