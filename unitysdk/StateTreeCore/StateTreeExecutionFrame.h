#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEXECUTIONFRAME_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA783A0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA78340)
#define STATETREECORE_STATETREEEXECUTIONFRAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1E741400)
#define STATETREECORE_STATETREEEXECUTIONFRAME_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA78320)
#define STATETREECORE_STATETREEEXECUTIONFRAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA784E0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_ISSAMEFRAME_OFFSET UNITYSDK_OFFSET(0xA782B0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA783A0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA78340)
#define STATETREECORE_STATETREEEXECUTIONFRAME_RESET_OFFSET UNITYSDK_OFFSET(0xA78400)
#define STATETREECORE_STATETREEEXECUTIONFRAME_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXECUTIONFRAME__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA783A0)
#define STATETREECORE_STATETREEEXECUTIONFRAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E741880)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionFrame_TypeDefinitionIndex = 30953;

	struct alignas(8) StateTreeExecutionFrame
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExecutionFrame_TypeDefinitionIndex)->GetStaticField(0x25510);
		}
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::StateTreeCore::StateTreeStateHandle RootState; // 0x18
		::StateTreeCore::StateTreeActiveStates ActiveStates; // 0x1A
		::System::UInt16 ExternalDataBaseIndex; // 0x2C
		::System::UInt16 GlobalInstanceIndexBase; // 0x2E
		::System::UInt16 ActiveInstanceIndexBase; // 0x30
		::StateTreeCore::StateTreeDataHandle StateParameterDataHandle; // 0x32
		::StateTreeCore::StateTreeDataHandle GlobalParameterDataHandle; // 0x38
		::System::Byte NumCurrentlyActiveStates; // 0x3E
		::System::Boolean IsGlobalFrame; // 0x3F

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME__CCTOR_OFFSET))();
		}

		::System::Boolean IsSameFrame(::StateTreeCore::StateTreeExecutionFrame& frame)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_ISSAMEFRAME_OFFSET))(this, frame);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeExecutionFrame Create()
		{
			return ((::StateTreeCore::StateTreeExecutionFrame(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeExecutionFrame DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionFrame(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExecutionFrame CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionFrame(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExecutionFrame MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionFrame(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeExecutionFrame& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeExecutionFrame& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeExecutionFrame__CopyAssign(::StateTreeCore::StateTreeExecutionFrame& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXECUTIONFRAME__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
