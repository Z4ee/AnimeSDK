#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrameForBattleServer; }

#define CLASS_2_3ECA25DC53328849_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED77D0)
#define CLASS_2_3ECA25DC53328849_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xCED7810)
#define CLASS_2_3ECA25DC53328849_ONSKIP_OFFSET UNITYSDK_OFFSET(0xCED7870)
#define CLASS_2_3ECA25DC53328849_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCED78C0)
#define CLASS_2_3ECA25DC53328849_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCED7820)
#define CLASS_2_3ECA25DC53328849_TICK_OFFSET UNITYSDK_OFFSET(0xCED7910)
#define CLASS_2_3ECA25DC53328849__CTOR_OFFSET UNITYSDK_OFFSET(0xCED77C0)

inline static constexpr unsigned int Class_2_3ECA25DC53328849_TypeDefinitionIndex = 55030;

class Class_2_3ECA25DC53328849 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitFrameForBattleServer* Field_2_1; // 0x20
	::System::UInt64 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3ECA25DC53328849_TICK_OFFSET))(this, a1);
	}
};
