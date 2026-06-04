#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueDLC1Dot3ImmediateNotify; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F3D949759BC929D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123756A0)
#define CLASS_2_8F3D949759BC929D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12375740)
#define CLASS_2_8F3D949759BC929D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123757C0)
#define CLASS_2_8F3D949759BC929D_TICK_OFFSET UNITYSDK_OFFSET(0x123756E0)
#define CLASS_2_8F3D949759BC929D__CTOR_OFFSET UNITYSDK_OFFSET(0x12375690)

inline static constexpr unsigned int Class_2_8F3D949759BC929D_TypeDefinitionIndex = 54615;

class Class_2_8F3D949759BC929D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + CLASS_2_8F3D949759BC929D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F3D949759BC929D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F3D949759BC929D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F3D949759BC929D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F3D949759BC929D_ONTASKRESET_OFFSET))(this);
	}
};
