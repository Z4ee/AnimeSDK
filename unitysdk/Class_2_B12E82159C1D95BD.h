#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueDialogue; }

#define CLASS_2_B12E82159C1D95BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250AA50)
#define CLASS_2_B12E82159C1D95BD_METHOD_2_61B7E1D31CE4907F_OFFSET UNITYSDK_OFFSET(0x1250AE90)
#define CLASS_2_B12E82159C1D95BD_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x1250B230)
#define CLASS_2_B12E82159C1D95BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1250AA90)
#define CLASS_2_B12E82159C1D95BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1250B180)
#define CLASS_2_B12E82159C1D95BD_TICK_OFFSET UNITYSDK_OFFSET(0x1250B1D0)
#define CLASS_2_B12E82159C1D95BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1250AA40)
#define CLASS_2_B12E82159C1D95BD__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1250B490)

inline static constexpr unsigned int Class_2_B12E82159C1D95BD_TypeDefinitionIndex = 54207;

class Class_2_B12E82159C1D95BD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerRogueDialogue* Field_2_0; // 0x20
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_61B7E1D31CE4907F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_METHOD_2_61B7E1D31CE4907F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B12E82159C1D95BD__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
