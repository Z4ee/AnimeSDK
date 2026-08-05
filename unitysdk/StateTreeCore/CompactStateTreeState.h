#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateSelectionBehavior.h"
#include "unitysdk/StateTreeCore/StateTreeStateType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_COMPACTSTATETREESTATE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAC9D90)
#define STATETREECORE_COMPACTSTATETREESTATE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xAC9D20)
#define STATETREECORE_COMPACTSTATETREESTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB51ED0)
#define STATETREECORE_COMPACTSTATETREESTATE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xAC9C10)
#define STATETREECORE_COMPACTSTATETREESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0xAC9BA0)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x68D860)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xAC9BB0)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xAC9EB0)
#define STATETREECORE_COMPACTSTATETREESTATE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xAC9D90)
#define STATETREECORE_COMPACTSTATETREESTATE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xAC9D20)
#define STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET UNITYSDK_OFFSET(0xAC9DE0)
#define STATETREECORE_COMPACTSTATETREESTATE_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREESTATE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAC9D90)
#define STATETREECORE_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB52330)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeState_TypeDefinitionIndex = 31696;

	struct alignas(8) CompactStateTreeState
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26AD0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x559FC154; // 0x0
		::Foundation::Unreal::FName Name; // 0x10
		::StateTreeCore::StateTreeStateHandle LinkedState; // 0x18
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTree> LinkedAsset; // 0x20
		::StateTreeCore::StateTreeStateHandle Parent; // 0x28
		::System::UInt16 ChildrenBegin; // 0x2A
		::System::UInt16 ChildrenEnd; // 0x2C
		::System::UInt16 EnterConditionsBegin; // 0x2E
		::System::UInt16 TransitionsBegin; // 0x30
		::System::UInt16 TasksBegin; // 0x32
		::System::UInt16 ParameterTemplateIndex; // 0x34
		::StateTreeCore::StateTreeDataHandle ParameterDataHandle; // 0x36
		::System::UInt16 ParameterBindingsBatch; // 0x3C
		::System::Byte EnterConditionsNum; // 0x3E
		::System::Byte TransitionsNum; // 0x3F
		::System::Byte TasksNum; // 0x40
		::System::Byte InstanceDataNum; // 0x41
		::StateTreeCore::StateTreeStateType Type; // 0x42
		::StateTreeCore::StateTreeStateSelectionBehavior SelectionBehavior; // 0x43
		::System::Boolean HasTransitionTasks; // 0x44
		::System::Boolean Enabled; // 0x45

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET))(this);
		}

		::System::UInt16 get_NextSibling()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::CompactStateTreeState Create()
		{
			return ((::StateTreeCore::CompactStateTreeState(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_CREATE_OFFSET))();
		}

		::StateTreeCore::CompactStateTreeState DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeState CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeState MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::CompactStateTreeState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::CompactStateTreeState& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_CompactStateTreeState__CopyAssign(::StateTreeCore::CompactStateTreeState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREESTATE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
