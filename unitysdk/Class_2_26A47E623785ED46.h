#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTurnPage; }

#define CLASS_2_26A47E623785ED46_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E2C4A0)
#define CLASS_2_26A47E623785ED46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E2C4E0)
#define CLASS_2_26A47E623785ED46_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E2C6A0)
#define CLASS_2_26A47E623785ED46_TICK_OFFSET UNITYSDK_OFFSET(0x18E2C6F0)
#define CLASS_2_26A47E623785ED46__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2C490)

inline static constexpr unsigned int Class_2_26A47E623785ED46_TypeDefinitionIndex = 55956;

class Class_2_26A47E623785ED46 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerTurnPage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTurnPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTurnPage*))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_TICK_OFFSET))(this, a1);
	}
};
