#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/Ability/NPCAttractorInteractState.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x753FB0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x753EB0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1192BEF0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x753E90)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7540A0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_FORCESETDATA_OFFSET UNITYSDK_OFFSET(0x753DD0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x753E30)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7540E0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x754000)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x753F30)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x754050)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SETBEHAVIOURSSTATE_OFFSET UNITYSDK_OFFSET(0x753D80)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x754140)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1192C2A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAttractorControlFragment_TypeDefinitionIndex = 86827;

	struct alignas(4) FNPCAttractorControlFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCAttractorControlFragment_TypeDefinitionIndex)->GetStaticField(0x45580);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x49A63049; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean disableAtttract; // 0x11
		::NPCCrowd::Ability::NPCAttractorInteractState state; // 0x14
		::System::Single queryCD; // 0x18
		::System::Int32 nearestAttractorHandler; // 0x1C
		::NPCCrowd::AI::NPCAIActionState behavioursState; // 0x20
		::System::UInt32 curActionHandler; // 0x24

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET))();
		}

		::System::Void SetBehavioursState(::NPCCrowd::AI::NPCAIActionState state)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::NPCAIActionState))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SETBEHAVIOURSSTATE_OFFSET))(this, state);
		}

		::System::Void ForceSetData(::System::Int32 nearestAttractorHandler, ::NPCCrowd::Ability::NPCAttractorInteractState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::NPCAttractorInteractState))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_FORCESETDATA_OFFSET))(this, nearestAttractorHandler, state);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCAttractorControlFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAttractorControlFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCAttractorControlFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAttractorControlFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAttractorControlFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAttractorControlFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAttractorControlFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAttractorControlFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCAttractorControlFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAttractorControlFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCAttractorControlFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAttractorControlFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCAttractorControlFragment__CopyAssign(::NPCCrowd::Ability::FNPCAttractorControlFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAttractorControlFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
