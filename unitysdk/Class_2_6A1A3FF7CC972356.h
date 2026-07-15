#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureStackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6A1A3FF7CC972356_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AC5720)
#define CLASS_2_6A1A3FF7CC972356_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AC5760)
#define CLASS_2_6A1A3FF7CC972356_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14AC59A0)
#define CLASS_2_6A1A3FF7CC972356_TICK_OFFSET UNITYSDK_OFFSET(0x14AC59F0)
#define CLASS_2_6A1A3FF7CC972356__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC56F0)

inline static constexpr unsigned int Class_2_6A1A3FF7CC972356_TypeDefinitionIndex = 52354;

class Class_2_6A1A3FF7CC972356 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdventureStackProperty* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureStackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureStackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_6A1A3FF7CC972356__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A1A3FF7CC972356_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A1A3FF7CC972356_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A1A3FF7CC972356_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A1A3FF7CC972356_TICK_OFFSET))(this, a1);
	}
};
