#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClockParkStoryCharacterTriggerDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D4BA603364F51936_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145C2390)
#define CLASS_2_D4BA603364F51936_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x145C2290)
#define CLASS_2_D4BA603364F51936_ONSKIP_OFFSET UNITYSDK_OFFSET(0x145C22A0)
#define CLASS_2_D4BA603364F51936_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145C2430)
#define CLASS_2_D4BA603364F51936_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145C2550)
#define CLASS_2_D4BA603364F51936_TICK_OFFSET UNITYSDK_OFFSET(0x145C23D0)
#define CLASS_2_D4BA603364F51936__CTOR_OFFSET UNITYSDK_OFFSET(0x145C2280)

inline static constexpr unsigned int Class_2_D4BA603364F51936_TypeDefinitionIndex = 49286;

class Class_2_D4BA603364F51936 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BA603364F51936_ONTASKRESET_OFFSET))(this);
	}
};
