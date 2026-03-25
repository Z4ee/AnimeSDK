#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeMapUI; }

#define CLASS_2_0ECBFE1BF4EB6871_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87ADCE0)
#define CLASS_2_0ECBFE1BF4EB6871_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87ADD20)
#define CLASS_2_0ECBFE1BF4EB6871_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87ADE70)
#define CLASS_2_0ECBFE1BF4EB6871_TICK_OFFSET UNITYSDK_OFFSET(0x87ADEC0)
#define CLASS_2_0ECBFE1BF4EB6871__CTOR_OFFSET UNITYSDK_OFFSET(0x87ADCD0)

inline static constexpr unsigned int Class_2_0ECBFE1BF4EB6871_TypeDefinitionIndex = 43283;

class Class_2_0ECBFE1BF4EB6871 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerMazeMapUI* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeMapUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeMapUI*))((::PBYTE)hIl2Cpp + CLASS_2_0ECBFE1BF4EB6871__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECBFE1BF4EB6871_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECBFE1BF4EB6871_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECBFE1BF4EB6871_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ECBFE1BF4EB6871_TICK_OFFSET))(this, a1);
	}
};
