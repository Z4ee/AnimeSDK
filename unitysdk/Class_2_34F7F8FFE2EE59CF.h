#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClockParkStorySwitchBackgroundAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_34F7F8FFE2EE59CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8867200)
#define CLASS_2_34F7F8FFE2EE59CF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x88670D0)
#define CLASS_2_34F7F8FFE2EE59CF_ONSKIP_OFFSET UNITYSDK_OFFSET(0x88670E0)
#define CLASS_2_34F7F8FFE2EE59CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88672A0)
#define CLASS_2_34F7F8FFE2EE59CF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88673F0)
#define CLASS_2_34F7F8FFE2EE59CF_TICK_OFFSET UNITYSDK_OFFSET(0x8867240)
#define CLASS_2_34F7F8FFE2EE59CF__CTOR_OFFSET UNITYSDK_OFFSET(0x88670C0)

inline static constexpr unsigned int Class_2_34F7F8FFE2EE59CF_TypeDefinitionIndex = 42644;

class Class_2_34F7F8FFE2EE59CF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F7F8FFE2EE59CF_ONTASKRESET_OFFSET))(this);
	}
};
