#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveGlobalTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5256B7C3DC9440A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A5B10)
#define CLASS_2_5256B7C3DC9440A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99A5B50)
#define CLASS_2_5256B7C3DC9440A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99A5BE0)
#define CLASS_2_5256B7C3DC9440A9_TICK_OFFSET UNITYSDK_OFFSET(0x99A5C30)
#define CLASS_2_5256B7C3DC9440A9__CTOR_OFFSET UNITYSDK_OFFSET(0x99A5B00)

inline static constexpr unsigned int Class_2_5256B7C3DC9440A9_TypeDefinitionIndex = 50992;

class Class_2_5256B7C3DC9440A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveGlobalTimeSlow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveGlobalTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveGlobalTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_2_5256B7C3DC9440A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5256B7C3DC9440A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5256B7C3DC9440A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5256B7C3DC9440A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5256B7C3DC9440A9_TICK_OFFSET))(this, a1);
	}
};
