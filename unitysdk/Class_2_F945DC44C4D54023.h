#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveDitherGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F945DC44C4D54023_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14693F60)
#define CLASS_2_F945DC44C4D54023_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14693FA0)
#define CLASS_2_F945DC44C4D54023_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14694060)
#define CLASS_2_F945DC44C4D54023_TICK_OFFSET UNITYSDK_OFFSET(0x146940B0)
#define CLASS_2_F945DC44C4D54023__CTOR_OFFSET UNITYSDK_OFFSET(0x14693F50)

inline static constexpr unsigned int Class_2_F945DC44C4D54023_TypeDefinitionIndex = 51399;

class Class_2_F945DC44C4D54023 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveDitherGroup* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
