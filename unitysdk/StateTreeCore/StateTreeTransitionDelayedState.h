#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xABD1F0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xABD1C0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F980960)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xABD1A0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xABD230)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xABD1F0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xABD1C0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xABD210)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xABD1F0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F980B20)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionDelayedState_TypeDefinitionIndex = 31555;

	struct alignas(8) StateTreeTransitionDelayedState
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTransitionDelayedState_TypeDefinitionIndex)->GetStaticField(0x266B0);
		}
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::System::UInt16 TransitionIndex; // 0x18
		::System::Single TimeLeft; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeTransitionDelayedState Create()
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeTransitionDelayedState DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTransitionDelayedState CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTransitionDelayedState MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeTransitionDelayedState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeTransitionDelayedState& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTransitionDelayedState__CopyAssign(::StateTreeCore::StateTreeTransitionDelayedState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
