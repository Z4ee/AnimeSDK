#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6A55B0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6A54D0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x10298D40)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6A54B0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6A56A0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6A5450)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6A56E0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6A5600)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6A5540)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x6A5650)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6A5740)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x102990F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCBaseDataFragment_TypeDefinitionIndex = 47175;

	struct alignas(4) FNPCBaseDataFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCBaseDataFragment_TypeDefinitionIndex)->GetStaticField(0x34DB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xABCADC81; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::UInt32 entityID; // 0x14
		::System::Int32 TagID; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCBaseDataFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCBaseDataFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCBaseDataFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCBaseDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCBaseDataFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCBaseDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCBaseDataFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCBaseDataFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCBaseDataFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCBaseDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCBaseDataFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCBaseDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCBaseDataFragment__CopyAssign(::NPCCrowd::Ability::FNPCBaseDataFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCBaseDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
