#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/CompactStateTreeState.h"
#include "unitysdk/StateTreeCore/CompactStateTreeTransition.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreePropertyBindings.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9CD690)
#define STATETREECORE_STATETREE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9CD650)
#define STATETREECORE_STATETREE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2A5E70)
#define STATETREECORE_STATETREE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9CD630)
#define STATETREECORE_STATETREE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CD7D0)
#define STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET UNITYSDK_OFFSET(0x9CD580)
#define STATETREECORE_STATETREE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9CD5D0)
#define STATETREECORE_STATETREE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9CD920)
#define STATETREECORE_STATETREE_LINK_OFFSET UNITYSDK_OFFSET(0x9CD5A0)
#define STATETREECORE_STATETREE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9CD6A0)
#define STATETREECORE_STATETREE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9CD670)
#define STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET UNITYSDK_OFFSET(0x9CD5B0)
#define STATETREECORE_STATETREE_RESETLINKED_OFFSET UNITYSDK_OFFSET(0x9CD5C0)
#define STATETREECORE_STATETREE_RESET_OFFSET UNITYSDK_OFFSET(0x9CD6B0)
#define STATETREECORE_STATETREE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9CD690)
#define STATETREECORE_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7A20)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTree_TypeDefinitionIndex = 28262;

	struct alignas(8) StateTree
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTree_TypeDefinitionIndex)->GetStaticField(0x21150);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x5A811666; // 0x0
		::Foundation::Unreal::FName Name; // 0x10
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeState> States; // 0x18
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeTransition> Transitions; // 0x30
		::UnrealTypes::FInstancedStructContainer Nodes; // 0x48
		::StateTreeCore::StateTreeInstanceData DefaultInstanceData; // 0x60
		::StateTreeCore::StateTreeInstanceData SharedInstanceData; // 0x120
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ContextDataDescs; // 0x1E0
		::StateTreeCore::StateTreePropertyBindings PropertyBindings; // 0x1F8
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x2A8
		::System::UInt16 NumContextData; // 0x2C0
		::System::UInt16 NumGlobalInstanceData; // 0x2C2
		::System::UInt16 GlobalTasksBegin; // 0x2C4
		::System::UInt16 GlobalTasksNum; // 0x2C6
		::System::Boolean HasGlobalTransitionTasks; // 0x2C8
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDescs; // 0x2D0
		::System::Boolean _isLinked; // 0x2E8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsReadyToRun()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET))(this);
		}

		::System::Boolean Link()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_LINK_OFFSET))(this);
		}

		::System::Boolean PatchBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET))(this);
		}

		::System::Void ResetLinked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_RESETLINKED_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTree Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTree(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTree DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTree(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTree CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTree(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTree MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTree(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTree& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTree&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTree& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTree&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTree__CopyAssign(::StateTreeCore::StateTree& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTree&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
