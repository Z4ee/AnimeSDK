#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

namespace RPG::GameCore { class RogueTournEntranceShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace XLua { class LuaTable; }

#define CLASS_2_89CF2FD648FD84CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CC0C50)
#define CLASS_2_89CF2FD648FD84CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CC0CF0)
#define CLASS_2_89CF2FD648FD84CF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CC0E00)
#define CLASS_2_89CF2FD648FD84CF_TICK_OFFSET UNITYSDK_OFFSET(0x18CC0C90)
#define CLASS_2_89CF2FD648FD84CF__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC0C40)
#define CLASS_2_89CF2FD648FD84CF__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x18CC0E50)

inline static constexpr unsigned int Class_2_89CF2FD648FD84CF_TypeDefinitionIndex = 58628;

class Class_2_89CF2FD648FD84CF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEntranceShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEntranceShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::TaskState _OnTaskBegin_b__3_0(::XLua::LuaTable* a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_2_89CF2FD648FD84CF__ONTASKBEGIN_B__3_0_OFFSET))(this, a1);
	}
};
