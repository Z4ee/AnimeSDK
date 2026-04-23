#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"

class Class_2_1DBE0E1023AFDBC5;
class Class_2_81F92B0B04671207;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MoveToTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_2_0161C2FC7AFF3FAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12568380)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_319CB30159DF6F08_OFFSET UNITYSDK_OFFSET(0x12568850)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_C3B07CFF6BC616BE_OFFSET UNITYSDK_OFFSET(0x12568A80)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x125683D0)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12568DA0)
#define CLASS_2_0161C2FC7AFF3FAA_TICK_OFFSET UNITYSDK_OFFSET(0x12568E30)
#define CLASS_2_0161C2FC7AFF3FAA__CTOR_OFFSET UNITYSDK_OFFSET(0x125682E0)

inline static constexpr unsigned int Class_2_0161C2FC7AFF3FAA_TypeDefinitionIndex = 50917;

class Class_2_0161C2FC7AFF3FAA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MoveToTargetList* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::UnityEngine::Animator* Field_2_3; // 0x28
	::Class_2_1DBE0E1023AFDBC5* Field_2_2; // 0x30
	::Struct_2_CC45B4503679E14E Field_2_8; // 0x38
	::Class_2_81F92B0B04671207* Field_2_4; // 0x48
	::System::Int32 Field_2_6; // 0x50
	::System::Boolean Field_2_5; // 0x54
	::System::Boolean Field_2_9; // 0x55
	::System::Single Field_2_7; // 0x58

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

	::System::Void Method_2_C3B07CFF6BC616BE(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_METHOD_2_C3B07CFF6BC616BE_OFFSET))(this, a1);
	}
};
