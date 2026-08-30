#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetStageBattleEvents; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7CBD7B72977117A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16869660)
#define CLASS_2_7CBD7B72977117A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168696A0)
#define CLASS_2_7CBD7B72977117A6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16869750)
#define CLASS_2_7CBD7B72977117A6_TICK_OFFSET UNITYSDK_OFFSET(0x168697A0)
#define CLASS_2_7CBD7B72977117A6__CTOR_OFFSET UNITYSDK_OFFSET(0x16869650)

inline static constexpr unsigned int Class_2_7CBD7B72977117A6_TypeDefinitionIndex = 55759;

class Class_2_7CBD7B72977117A6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetStageBattleEvents* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStageBattleEvents* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStageBattleEvents*))((::PBYTE)hIl2Cpp + CLASS_2_7CBD7B72977117A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBD7B72977117A6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBD7B72977117A6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBD7B72977117A6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CBD7B72977117A6_TICK_OFFSET))(this, a1);
	}
};
