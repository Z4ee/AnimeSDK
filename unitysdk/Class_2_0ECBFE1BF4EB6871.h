#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeMapUI; }

#define CLASS_2_0ECBFE1BF4EB6871_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA362B40)
#define CLASS_2_0ECBFE1BF4EB6871_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA362B80)
#define CLASS_2_0ECBFE1BF4EB6871_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA362CD0)
#define CLASS_2_0ECBFE1BF4EB6871_TICK_OFFSET UNITYSDK_OFFSET(0xA362D20)
#define CLASS_2_0ECBFE1BF4EB6871__CTOR_OFFSET UNITYSDK_OFFSET(0xA362B30)

inline static constexpr unsigned int Class_2_0ECBFE1BF4EB6871_TypeDefinitionIndex = 49946;

class Class_2_0ECBFE1BF4EB6871 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerMazeMapUI* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
