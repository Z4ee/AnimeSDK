#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyTriggerDailySettlement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A9D7FDD8D7F86BF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F2AA40)
#define CLASS_2_A9D7FDD8D7F86BF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F2A990)
#define CLASS_2_A9D7FDD8D7F86BF7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F2A9F0)
#define CLASS_2_A9D7FDD8D7F86BF7_TICK_OFFSET UNITYSDK_OFFSET(0x17F2AA90)
#define CLASS_2_A9D7FDD8D7F86BF7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A980)

inline static constexpr unsigned int Class_2_A9D7FDD8D7F86BF7_TypeDefinitionIndex = 55644;

class Class_2_A9D7FDD8D7F86BF7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonopolyTriggerDailySettlement* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyTriggerDailySettlement*))((::PBYTE)hIl2Cpp + CLASS_2_A9D7FDD8D7F86BF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D7FDD8D7F86BF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D7FDD8D7F86BF7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D7FDD8D7F86BF7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9D7FDD8D7F86BF7_TICK_OFFSET))(this, a1);
	}
};
