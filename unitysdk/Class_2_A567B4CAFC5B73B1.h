#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RoadRashGameModifier_TimedState; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A567B4CAFC5B73B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC20D440)
#define CLASS_2_A567B4CAFC5B73B1_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC20D650)
#define CLASS_2_A567B4CAFC5B73B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC20D480)
#define CLASS_2_A567B4CAFC5B73B1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC20D4D0)
#define CLASS_2_A567B4CAFC5B73B1_TICK_OFFSET UNITYSDK_OFFSET(0xC20D520)
#define CLASS_2_A567B4CAFC5B73B1__CTOR_OFFSET UNITYSDK_OFFSET(0xC20D430)

inline static constexpr unsigned int Class_2_A567B4CAFC5B73B1_TypeDefinitionIndex = 58432;

class Class_2_A567B4CAFC5B73B1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RoadRashGameModifier_TimedState* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Single BPAIDCADMDO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_TimedState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_TimedState*))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567B4CAFC5B73B1_GETCONFIG_OFFSET))(this);
	}
};
