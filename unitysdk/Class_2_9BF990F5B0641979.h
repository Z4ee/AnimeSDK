#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetVirtualCameraPosByPlayerTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9BF990F5B0641979_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112D5740)
#define CLASS_2_9BF990F5B0641979_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x112D5780)
#define CLASS_2_9BF990F5B0641979_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x112D5DF0)
#define CLASS_2_9BF990F5B0641979_TICK_OFFSET UNITYSDK_OFFSET(0x112D5E40)
#define CLASS_2_9BF990F5B0641979__CTOR_OFFSET UNITYSDK_OFFSET(0x112D5730)

inline static constexpr unsigned int Class_2_9BF990F5B0641979_TypeDefinitionIndex = 54592;

class Class_2_9BF990F5B0641979 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*))((::PBYTE)hIl2Cpp + CLASS_2_9BF990F5B0641979__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF990F5B0641979_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF990F5B0641979_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF990F5B0641979_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9BF990F5B0641979_TICK_OFFSET))(this, a1);
	}
};
