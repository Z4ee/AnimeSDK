#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TakeMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8BB678B015BA5C42_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA69D1D0)
#define CLASS_2_8BB678B015BA5C42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA69D210)
#define CLASS_2_8BB678B015BA5C42_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA69D260)
#define CLASS_2_8BB678B015BA5C42_TICK_OFFSET UNITYSDK_OFFSET(0xA69D2B0)
#define CLASS_2_8BB678B015BA5C42__CTOR_OFFSET UNITYSDK_OFFSET(0xA69D1C0)

inline static constexpr unsigned int Class_2_8BB678B015BA5C42_TypeDefinitionIndex = 49844;

class Class_2_8BB678B015BA5C42 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TakeMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakeMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + CLASS_2_8BB678B015BA5C42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BB678B015BA5C42_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BB678B015BA5C42_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BB678B015BA5C42_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BB678B015BA5C42_TICK_OFFSET))(this, a1);
	}
};
