#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_45.h"

class Class_2_1DBE0E1023AFDBC5;
class Class_2_24A88014580ADDB3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MoveToTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_2_0161C2FC7AFF3FAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA903A60)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_319CB30159DF6F08_OFFSET UNITYSDK_OFFSET(0xA904010)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_522C6266F72AB644_OFFSET UNITYSDK_OFFSET(0xA904250)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA903AB0)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9045F0)
#define CLASS_2_0161C2FC7AFF3FAA_TICK_OFFSET UNITYSDK_OFFSET(0xA904680)
#define CLASS_2_0161C2FC7AFF3FAA__CTOR_OFFSET UNITYSDK_OFFSET(0xA9039C0)

inline static constexpr unsigned int Class_2_0161C2FC7AFF3FAA_TypeDefinitionIndex = 51587;

class Class_2_0161C2FC7AFF3FAA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_1DBE0E1023AFDBC5* Field_2_0; // 0x18
	::Struct_2_CC45B4503679E14E_45 Field_2_1; // 0x20
	::RPG::GameCore::MoveToTargetList* Field_2_2; // 0x30
	::Class_2_24A88014580ADDB3* Field_2_3; // 0x38
	::RPG::GameCore::TaskContext* Field_2_4; // 0x40
	::UnityEngine::Animator* Field_2_5; // 0x48
	::System::Int32 Field_2_6; // 0x50
	::System::Boolean Field_2_7; // 0x54
	::System::Boolean Field_2_8; // 0x55
	::System::Single Field_2_9; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveToTargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveToTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_319CB30159DF6F08(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_METHOD_2_319CB30159DF6F08_OFFSET))(this, a1);
	}

	::System::Void Method_2_522C6266F72AB644(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_METHOD_2_522C6266F72AB644_OFFSET))(this, a1);
	}
};
