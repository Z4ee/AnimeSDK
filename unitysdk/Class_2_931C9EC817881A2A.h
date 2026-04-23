#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropStartPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_931C9EC817881A2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124B4DA0)
#define CLASS_2_931C9EC817881A2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124B4B20)
#define CLASS_2_931C9EC817881A2A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124B4D20)
#define CLASS_2_931C9EC817881A2A_TICK_OFFSET UNITYSDK_OFFSET(0x124B4E50)
#define CLASS_2_931C9EC817881A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x124B4A90)

inline static constexpr unsigned int Class_2_931C9EC817881A2A_TypeDefinitionIndex = 53827;

class Class_2_931C9EC817881A2A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropStartPuzzle* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::PropComponent* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::System::Boolean Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStartPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_TICK_OFFSET))(this, a1);
	}
};
