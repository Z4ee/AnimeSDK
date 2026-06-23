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
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeSchema; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA6BF50)
#define STATETREECORE_STATETREE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA6BF10)
#define STATETREECORE_STATETREE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E595740)
#define STATETREECORE_STATETREE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA6BEF0)
#define STATETREECORE_STATETREE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6BF80)
#define STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET UNITYSDK_OFFSET(0xA6BE40)
#define STATETREECORE_STATETREE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA6BE90)
#define STATETREECORE_STATETREE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA6C0D0)
#define STATETREECORE_STATETREE_LINK_OFFSET UNITYSDK_OFFSET(0xA6BE60)
#define STATETREECORE_STATETREE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA6BF60)
#define STATETREECORE_STATETREE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA6BF30)
#define STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET UNITYSDK_OFFSET(0xA6BE70)
#define STATETREECORE_STATETREE_RESETLINKED_OFFSET UNITYSDK_OFFSET(0xA6BE80)
#define STATETREECORE_STATETREE_RESET_OFFSET UNITYSDK_OFFSET(0xA6BF70)
#define STATETREECORE_STATETREE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA6BF50)
#define STATETREECORE_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E597390)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTree_TypeDefinitionIndex = 30912;

	struct alignas(8) StateTree
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTree_TypeDefinitionIndex)->GetStaticField(0x24EA0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x5A811666; // 0x0
		::Foundation::Unreal::FName Name; // 0x10
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTreeSchema*> Schema; // 0x18
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeState> States; // 0x20
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeTransition> Transitions; // 0x38
		::UnrealTypes::FInstancedStructContainer Nodes; // 0x50
		::StateTreeCore::StateTreeInstanceData DefaultInstanceData; // 0x68
		::StateTreeCore::StateTreeInstanceData SharedInstanceData; // 0x128
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ContextDataDescs; // 0x1E8
		::StateTreeCore::StateTreePropertyBindings PropertyBindings; // 0x200
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x2B0
		::System::UInt16 NumContextData; // 0x2C8
		::System::UInt16 NumGlobalInstanceData; // 0x2CA
		::System::UInt16 GlobalTasksBegin; // 0x2CC
		::System::UInt16 GlobalTasksNum; // 0x2CE
		::System::Boolean HasGlobalTransitionTasks; // 0x2D0
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDescs; // 0x2D8
		::System::Boolean _isLinked; // 0x2F0

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
