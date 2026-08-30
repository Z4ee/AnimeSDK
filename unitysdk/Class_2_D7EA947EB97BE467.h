#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OpenMarbleMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D7EA947EB97BE467_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1637F7F0)
#define CLASS_2_D7EA947EB97BE467_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1637F8E0)
#define CLASS_2_D7EA947EB97BE467_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1637F680)
#define CLASS_2_D7EA947EB97BE467_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1637F830)
#define CLASS_2_D7EA947EB97BE467_TICK_OFFSET UNITYSDK_OFFSET(0x1637F880)
#define CLASS_2_D7EA947EB97BE467__CTOR_OFFSET UNITYSDK_OFFSET(0x1637F670)
#define CLASS_2_D7EA947EB97BE467___ONGAMEAREALOADED_B__5_0_OFFSET UNITYSDK_OFFSET(0x1637FA80)
#define CLASS_2_D7EA947EB97BE467___ONGAMEAREALOADED_B__5_1_OFFSET UNITYSDK_OFFSET(0x1637FB10)

inline static constexpr unsigned int Class_2_D7EA947EB97BE467_TypeDefinitionIndex = 52588;

class Class_2_D7EA947EB97BE467 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::OpenMarbleMainPage* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenMarbleMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenMarbleMainPage*))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void __OnGameAreaLoaded_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467___ONGAMEAREALOADED_B__5_0_OFFSET))(this);
	}

	::System::Void __OnGameAreaLoaded_b__5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7EA947EB97BE467___ONGAMEAREALOADED_B__5_1_OFFSET))(this);
	}
};
