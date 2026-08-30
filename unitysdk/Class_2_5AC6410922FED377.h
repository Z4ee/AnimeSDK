#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayerTeamAppear; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5AC6410922FED377_DISPOSE_OFFSET UNITYSDK_OFFSET(0x130AA9E0)
#define CLASS_2_5AC6410922FED377_METHOD_2_52E581C3710DF4C6_OFFSET UNITYSDK_OFFSET(0x130AAA80)
#define CLASS_2_5AC6410922FED377_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130AAA20)
#define CLASS_2_5AC6410922FED377_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x130AAC90)
#define CLASS_2_5AC6410922FED377_TICK_OFFSET UNITYSDK_OFFSET(0x130AACE0)
#define CLASS_2_5AC6410922FED377__CTOR_OFFSET UNITYSDK_OFFSET(0x130AA9D0)

inline static constexpr unsigned int Class_2_5AC6410922FED377_TypeDefinitionIndex = 58444;

class Class_2_5AC6410922FED377 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayerTeamAppear* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Single CNDKGAEBFIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_52E581C3710DF4C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC6410922FED377_METHOD_2_52E581C3710DF4C6_OFFSET))(this);
	}
};
