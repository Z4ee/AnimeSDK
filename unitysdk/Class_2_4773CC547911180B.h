#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeMiniMapUI; }

#define CLASS_2_4773CC547911180B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFF84F0)
#define CLASS_2_4773CC547911180B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFF8530)
#define CLASS_2_4773CC547911180B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAFF85B0)
#define CLASS_2_4773CC547911180B_TICK_OFFSET UNITYSDK_OFFSET(0xAFF8600)
#define CLASS_2_4773CC547911180B__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF84E0)

inline static constexpr unsigned int Class_2_4773CC547911180B_TypeDefinitionIndex = 49280;

class Class_2_4773CC547911180B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerMazeMiniMapUI* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeMiniMapUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeMiniMapUI*))((::PBYTE)hIl2Cpp + CLASS_2_4773CC547911180B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4773CC547911180B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4773CC547911180B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4773CC547911180B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4773CC547911180B_TICK_OFFSET))(this, a1);
	}
};
