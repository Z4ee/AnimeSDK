#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTeamRootOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71A17FDBFF180BB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108F1540)
#define CLASS_2_71A17FDBFF180BB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108F1580)
#define CLASS_2_71A17FDBFF180BB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x108F1C80)
#define CLASS_2_71A17FDBFF180BB7_TICK_OFFSET UNITYSDK_OFFSET(0x108F1CD0)
#define CLASS_2_71A17FDBFF180BB7__CTOR_OFFSET UNITYSDK_OFFSET(0x108F1530)

inline static constexpr unsigned int Class_2_71A17FDBFF180BB7_TypeDefinitionIndex = 45370;

class Class_2_71A17FDBFF180BB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetTeamRootOffset* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + CLASS_2_71A17FDBFF180BB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A17FDBFF180BB7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A17FDBFF180BB7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A17FDBFF180BB7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71A17FDBFF180BB7_TICK_OFFSET))(this, a1);
	}
};
