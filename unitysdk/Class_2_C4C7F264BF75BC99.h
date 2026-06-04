#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvCharacterSteerToInputDir; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C4C7F264BF75BC99_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D9040)
#define CLASS_2_C4C7F264BF75BC99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3D9080)
#define CLASS_2_C4C7F264BF75BC99_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA3D9870)
#define CLASS_2_C4C7F264BF75BC99_TICK_OFFSET UNITYSDK_OFFSET(0xA3D9290)
#define CLASS_2_C4C7F264BF75BC99__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D8FF0)

inline static constexpr unsigned int Class_2_C4C7F264BF75BC99_TypeDefinitionIndex = 48941;

class Class_2_C4C7F264BF75BC99 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvCharacterSteerToInputDir* Field_2_0; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x34
	::UnityEngine::Vector3 Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_TICK_OFFSET))(this, a1);
	}
};
