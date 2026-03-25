#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ActivityRaidAlleyPlacingShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3825CDD6C4207FA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11052B30)
#define CLASS_2_3825CDD6C4207FA9_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11052F80)
#define CLASS_2_3825CDD6C4207FA9_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x11052BF0)
#define CLASS_2_3825CDD6C4207FA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11052BA0)
#define CLASS_2_3825CDD6C4207FA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11052AE0)
#define CLASS_2_3825CDD6C4207FA9_TICK_OFFSET UNITYSDK_OFFSET(0x11052A80)
#define CLASS_2_3825CDD6C4207FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x11052A00)

inline static constexpr unsigned int Class_2_3825CDD6C4207FA9_TypeDefinitionIndex = 46640;

class Class_2_3825CDD6C4207FA9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* Field_2_3; // 0x28
	::RPG::Client::LuaUIController* Field_2_1; // 0x30

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

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3825CDD6C4207FA9_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
