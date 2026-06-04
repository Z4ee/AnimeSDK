#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueDialogue; }

#define CLASS_2_9A707670D801F9D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA687040)
#define CLASS_2_9A707670D801F9D2_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xA6878B0)
#define CLASS_2_9A707670D801F9D2_METHOD_2_D56F85BD6B9BED05_OFFSET UNITYSDK_OFFSET(0xA6874A0)
#define CLASS_2_9A707670D801F9D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA687080)
#define CLASS_2_9A707670D801F9D2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA687800)
#define CLASS_2_9A707670D801F9D2_TICK_OFFSET UNITYSDK_OFFSET(0xA687850)
#define CLASS_2_9A707670D801F9D2__CTOR_OFFSET UNITYSDK_OFFSET(0xA687030)
#define CLASS_2_9A707670D801F9D2__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xA687B10)

inline static constexpr unsigned int Class_2_9A707670D801F9D2_TypeDefinitionIndex = 54933;

class Class_2_9A707670D801F9D2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LevelGraphComponent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::TriggerRogueDialogue* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D56F85BD6B9BED05(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_METHOD_2_D56F85BD6B9BED05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A707670D801F9D2__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
