#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowOfferingClockieUpgradeHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9EB1DF20C77A7B23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190FE1F0)
#define CLASS_2_9EB1DF20C77A7B23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x190FE230)
#define CLASS_2_9EB1DF20C77A7B23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x190FE470)
#define CLASS_2_9EB1DF20C77A7B23_TICK_OFFSET UNITYSDK_OFFSET(0x190FE4C0)
#define CLASS_2_9EB1DF20C77A7B23__CTOR_OFFSET UNITYSDK_OFFSET(0x190FE1E0)

inline static constexpr unsigned int Class_2_9EB1DF20C77A7B23_TypeDefinitionIndex = 53538;

class Class_2_9EB1DF20C77A7B23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowOfferingClockieUpgradeHint* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*))((::PBYTE)hIl2Cpp + CLASS_2_9EB1DF20C77A7B23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EB1DF20C77A7B23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EB1DF20C77A7B23_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EB1DF20C77A7B23_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9EB1DF20C77A7B23_TICK_OFFSET))(this, a1);
	}
};
