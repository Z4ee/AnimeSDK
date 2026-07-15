#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_6180D94999EC13F6;
namespace RPG::GameCore { class StartMissionCameraTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_96BDB32C565CCA22_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165AFDE0)
#define CLASS_2_96BDB32C565CCA22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165AFFC0)
#define CLASS_2_96BDB32C565CCA22_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165AFE80)
#define CLASS_2_96BDB32C565CCA22_TICK_OFFSET UNITYSDK_OFFSET(0x165AFF10)
#define CLASS_2_96BDB32C565CCA22__CTOR_OFFSET UNITYSDK_OFFSET(0x165AF2D0)

inline static constexpr unsigned int Class_2_96BDB32C565CCA22_TypeDefinitionIndex = 56098;

class Class_2_96BDB32C565CCA22 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_6180D94999EC13F6* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::StartMissionCameraTemplate* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_96BDB32C565CCA22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BDB32C565CCA22_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96BDB32C565CCA22_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BDB32C565CCA22_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BDB32C565CCA22_ONTASKRESET_OFFSET))(this);
	}
};
