#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PauseGameModeToState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E045D949642577E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B7E0A0)
#define CLASS_2_E045D949642577E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B7E0E0)
#define CLASS_2_E045D949642577E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B7E170)
#define CLASS_2_E045D949642577E9_TICK_OFFSET UNITYSDK_OFFSET(0x19B7E1C0)
#define CLASS_2_E045D949642577E9__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7E090)

inline static constexpr unsigned int Class_2_E045D949642577E9_TypeDefinitionIndex = 58397;

class Class_2_E045D949642577E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PauseGameModeToState* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseGameModeToState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseGameModeToState*))((::PBYTE)hIl2Cpp + CLASS_2_E045D949642577E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E045D949642577E9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E045D949642577E9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E045D949642577E9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E045D949642577E9_TICK_OFFSET))(this, a1);
	}
};
