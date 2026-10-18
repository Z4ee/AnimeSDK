#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ActivityRaidAlleyPlacingShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3825CDD6C4207FA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCA12F0)
#define CLASS_2_3825CDD6C4207FA9_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBCA1780)
#define CLASS_2_3825CDD6C4207FA9_METHOD_2_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0xBCA1410)
#define CLASS_2_3825CDD6C4207FA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCA13C0)
#define CLASS_2_3825CDD6C4207FA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCA12A0)
#define CLASS_2_3825CDD6C4207FA9_TICK_OFFSET UNITYSDK_OFFSET(0xBCA1240)
#define CLASS_2_3825CDD6C4207FA9__CTOR_OFFSET UNITYSDK_OFFSET(0xBCA11C0)

inline static constexpr unsigned int Class_2_3825CDD6C4207FA9_TypeDefinitionIndex = 57855;

class Class_2_3825CDD6C4207FA9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
	::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* JKJPFJALGKO; // 0x28
	::Class_3_07C3C4D2990C49EE* GGGKNHKPGHP; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_METHOD_2_6747250BC2D13457_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
