#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMazeButtonEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B1411DF7B7E57449_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB95DFE0)
#define CLASS_2_B1411DF7B7E57449_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB95E020)
#define CLASS_2_B1411DF7B7E57449_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB95E080)
#define CLASS_2_B1411DF7B7E57449_TICK_OFFSET UNITYSDK_OFFSET(0xB95E0D0)
#define CLASS_2_B1411DF7B7E57449__CTOR_OFFSET UNITYSDK_OFFSET(0xB95DFD0)

inline static constexpr unsigned int Class_2_B1411DF7B7E57449_TypeDefinitionIndex = 53356;

class Class_2_B1411DF7B7E57449 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayMazeButtonEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMazeButtonEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMazeButtonEffect*))((::PBYTE)hIl2Cpp + CLASS_2_B1411DF7B7E57449__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1411DF7B7E57449_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1411DF7B7E57449_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1411DF7B7E57449_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B1411DF7B7E57449_TICK_OFFSET))(this, a1);
	}
};
