#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowOfferingClockieUpgradeHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9EB1DF20C77A7B23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155F3E50)
#define CLASS_2_9EB1DF20C77A7B23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155F3E90)
#define CLASS_2_9EB1DF20C77A7B23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155F40D0)
#define CLASS_2_9EB1DF20C77A7B23_TICK_OFFSET UNITYSDK_OFFSET(0x155F4120)
#define CLASS_2_9EB1DF20C77A7B23__CTOR_OFFSET UNITYSDK_OFFSET(0x155F3E40)

inline static constexpr unsigned int Class_2_9EB1DF20C77A7B23_TypeDefinitionIndex = 53538;

class Class_2_9EB1DF20C77A7B23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowOfferingClockieUpgradeHint* OFKGLJOAMLD; // 0x20

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
