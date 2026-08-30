#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_58.h"

class Class_2_2461A19B320A03F9;
class Class_2_24A88014580ADDB3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MoveToTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_2_0161C2FC7AFF3FAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC90440)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_319CB30159DF6F08_OFFSET UNITYSDK_OFFSET(0xBC90AC0)
#define CLASS_2_0161C2FC7AFF3FAA_METHOD_2_D3A565A802E80D24_OFFSET UNITYSDK_OFFSET(0xBC90D00)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC90490)
#define CLASS_2_0161C2FC7AFF3FAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC91110)
#define CLASS_2_0161C2FC7AFF3FAA_TICK_OFFSET UNITYSDK_OFFSET(0xBC911A0)
#define CLASS_2_0161C2FC7AFF3FAA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC903A0)

inline static constexpr unsigned int Class_2_0161C2FC7AFF3FAA_TypeDefinitionIndex = 55429;

class Class_2_0161C2FC7AFF3FAA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MoveToTargetList* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_2_2461A19B320A03F9* NCABPAPLJCI; // 0x28
	::Struct_2_CC45B4503679E14E_58 EJPILIBEFCB; // 0x30
	::Class_2_24A88014580ADDB3* JDNLKGBPHDC; // 0x40
	::UnityEngine::Animator* JDFCDMAPBFJ; // 0x48
	::System::Int32 APNGJPMPMOB; // 0x50
	::System::Boolean PFMNLFEOAGO; // 0x54
	::System::Boolean HHCFIHBHPLB; // 0x55
	::System::Single NPPEEEAECNJ; // 0x58

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

	::System::Void Method_2_D3A565A802E80D24(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_0161C2FC7AFF3FAA_METHOD_2_D3A565A802E80D24_OFFSET))(this, a1);
	}
};
