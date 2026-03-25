#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCUseMazeSkill; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_ECF1340EBC7B24C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8AF2C0)
#define CLASS_2_ECF1340EBC7B24C4_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0xB8AF3F0)
#define CLASS_2_ECF1340EBC7B24C4_METHOD_2_DAE67D4DC8B67113_1_OFFSET UNITYSDK_OFFSET(0xB8AFA40)
#define CLASS_2_ECF1340EBC7B24C4_METHOD_2_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0xB8AF8B0)
#define CLASS_2_ECF1340EBC7B24C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8AF310)
#define CLASS_2_ECF1340EBC7B24C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8AF7F0)
#define CLASS_2_ECF1340EBC7B24C4_TICK_OFFSET UNITYSDK_OFFSET(0xB8AF850)
#define CLASS_2_ECF1340EBC7B24C4__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF1F0)

inline static constexpr unsigned int Class_2_ECF1340EBC7B24C4_TypeDefinitionIndex = 42460;

class Class_2_ECF1340EBC7B24C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* Field_2_3; // 0x18
	::RPG::GameCore::AdvNPCUseMazeSkill* Field_2_0; // 0x20
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_2_A0580152EB393340* Field_2_4; // 0x38
	::System::Int32 Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_2_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_METHOD_2_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAE67D4DC8B67113_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ECF1340EBC7B24C4_METHOD_2_DAE67D4DC8B67113_1_OFFSET))(this, a1);
	}
};
