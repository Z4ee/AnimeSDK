#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x50B430)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x50B330)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xBDD3D10)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x50B310)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x50B520)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x50B2B0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x50B560)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x50B480)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x50B3B0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x50B4D0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x50B5C0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD4100)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCMontageDataFragment_TypeDefinitionIndex = 64042;

	struct alignas(4) FNPCMontageDataFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x44BE0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x11749C59; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Int32 montageKey; // 0x14
		::System::Boolean montagePlayFlag; // 0x18
		::System::Single montageLength; // 0x1C
		::System::Single montageTimer; // 0x20
		::System::Boolean isLoop; // 0x24
		::System::Single blendTime; // 0x28
		::System::Single montagePlaySpeed; // 0x2C
		::System::Boolean montagePlaySpeedDirty; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCMontageDataFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCMontageDataFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCMontageDataFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCMontageDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCMontageDataFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCMontageDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCMontageDataFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCMontageDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCMontageDataFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCMontageDataFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCMontageDataFragment__CopyAssign(::NPCCrowd::Ability::FNPCMontageDataFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
