#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClockParkStorySetBackgroundFrontVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2F6146B1A735AB2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15481330)
#define CLASS_2_2F6146B1A735AB2B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15481230)
#define CLASS_2_2F6146B1A735AB2B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15481240)
#define CLASS_2_2F6146B1A735AB2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154813D0)
#define CLASS_2_2F6146B1A735AB2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154814E0)
#define CLASS_2_2F6146B1A735AB2B_TICK_OFFSET UNITYSDK_OFFSET(0x15481370)
#define CLASS_2_2F6146B1A735AB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15481220)

inline static constexpr unsigned int Class_2_2F6146B1A735AB2B_TypeDefinitionIndex = 52965;

class Class_2_2F6146B1A735AB2B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6146B1A735AB2B_ONTASKRESET_OFFSET))(this);
	}
};
