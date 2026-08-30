#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveDitherGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F945DC44C4D54023_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EF0540)
#define CLASS_2_F945DC44C4D54023_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11EF0580)
#define CLASS_2_F945DC44C4D54023_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11EF0640)
#define CLASS_2_F945DC44C4D54023_TICK_OFFSET UNITYSDK_OFFSET(0x11EF0690)
#define CLASS_2_F945DC44C4D54023__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF0530)

inline static constexpr unsigned int Class_2_F945DC44C4D54023_TypeDefinitionIndex = 54083;

class Class_2_F945DC44C4D54023 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveDitherGroup* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveDitherGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveDitherGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F945DC44C4D54023__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F945DC44C4D54023_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F945DC44C4D54023_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F945DC44C4D54023_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F945DC44C4D54023_TICK_OFFSET))(this, a1);
	}
};
