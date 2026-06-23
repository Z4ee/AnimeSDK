#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageLayerFragment.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5CAEF0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x5CAD90)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xD928D30)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x5CAD70)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5CAFE0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5CAD10)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5CB020)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_HASANYPLAYINGLAYER_OFFSET UNITYSDK_OFFSET(0x5CACA0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_ISVALIDLAYER_OFFSET UNITYSDK_OFFSET(0xD928BB0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xD928B70)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x5CAF40)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x5CAE40)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x5CAF90)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5CB080)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9291C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCMontageDataFragment_TypeDefinitionIndex = 56343;

	struct alignas(4) FNPCMontageDataFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x4B300);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x11749C59; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::NPCCrowd::Ability::FNPCMontageLayerFragment layer0; // 0x14
		::NPCCrowd::Ability::FNPCMontageLayerFragment layer1; // 0x3C
		::NPCCrowd::Ability::FNPCMontageLayerFragment layer2; // 0x64
		::NPCCrowd::Ability::FNPCMontageLayerFragment layer3; // 0x8C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Int32 LayerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_LAYERCOUNT_OFFSET))();
		}

		static ::System::Boolean IsValidLayer(::System::Int32 layer)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_ISVALIDLAYER_OFFSET))(layer);
		}

		::System::Boolean HasAnyPlayingLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_HASANYPLAYINGLAYER_OFFSET))(this);
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
