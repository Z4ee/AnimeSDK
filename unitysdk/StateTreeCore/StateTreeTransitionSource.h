#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionSourceType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETRANSITIONSOURCE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5B450)
#define STATETREECORE_STATETREETRANSITIONSOURCE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA5B420)
#define STATETREECORE_STATETREETRANSITIONSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E1DC6B0)
#define STATETREECORE_STATETREETRANSITIONSOURCE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA5B3C0)
#define STATETREECORE_STATETREETRANSITIONSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA5B4D0)
#define STATETREECORE_STATETREETRANSITIONSOURCE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA5B450)
#define STATETREECORE_STATETREETRANSITIONSOURCE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA5B420)
#define STATETREECORE_STATETREETRANSITIONSOURCE_RESET_OFFSET UNITYSDK_OFFSET(0xA5B470)
#define STATETREECORE_STATETREETRANSITIONSOURCE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONSOURCE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5B450)
#define STATETREECORE_STATETREETRANSITIONSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC8E0)
#define STATETREECORE_STATETREETRANSITIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B3A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionSource_TypeDefinitionIndex = 30949;

	struct alignas(2) StateTreeTransitionSource
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTransitionSource_TypeDefinitionIndex)->GetStaticField(0x257B0);
		}
		::StateTreeCore::StateTreeTransitionSourceType SourceType; // 0x10
		::System::UInt16 TransitionIndex; // 0x12
		::StateTreeCore::StateTreeStateHandle TargetState; // 0x14
		::StateTreeCore::StateTreeTransitionPriority Priority; // 0x16

		::System::Void _ctor(::StateTreeCore::StateTreeTransitionSourceType sourceType, ::System::UInt16 transitionIndex, ::StateTreeCore::StateTreeStateHandle targetState, ::StateTreeCore::StateTreeTransitionPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSourceType, ::System::UInt16, ::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE__CTOR_OFFSET))(this, sourceType, transitionIndex, targetState, priority);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeTransitionSource Create()
		{
			return ((::StateTreeCore::StateTreeTransitionSource(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeTransitionSource DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionSource(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTransitionSource CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionSource(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTransitionSource MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionSource(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeTransitionSource& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSource&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeTransitionSource& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSource&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTransitionSource__CopyAssign(::StateTreeCore::StateTreeTransitionSource& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSource&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONSOURCE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
