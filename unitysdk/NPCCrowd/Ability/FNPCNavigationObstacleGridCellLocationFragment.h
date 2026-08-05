#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/CellLocation.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x754390)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x7542D0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1192C3B0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x7542B0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x754480)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x754250)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7544C0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x7543E0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x754330)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x754430)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x754520)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1192C730)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex = 81549;

	struct alignas(4) FNPCNavigationObstacleGridCellLocationFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x455A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xAD0542C8; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::Foundation::Container::CellLocation Location; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCNavigationObstacleGridCellLocationFragment__CopyAssign(::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
