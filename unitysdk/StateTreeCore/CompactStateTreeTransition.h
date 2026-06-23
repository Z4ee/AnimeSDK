#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeCore/StateTreeRandomTimeDuration.h"
#include "unitysdk/StateTreeCore/StateTreeSelectionFallback.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionTrigger.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_COMPACTSTATETREETRANSITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5D0F0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA5D0B0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E276C90)
#define STATETREECORE_COMPACTSTATETREETRANSITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA5D090)
#define STATETREECORE_COMPACTSTATETREETRANSITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_COMPACTSTATETREETRANSITION_GET_HASDELAY_OFFSET UNITYSDK_OFFSET(0xA5D010)
#define STATETREECORE_COMPACTSTATETREETRANSITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA5D030)
#define STATETREECORE_COMPACTSTATETREETRANSITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA5D1C0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA5D0F0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA5D0B0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_RESET_OFFSET UNITYSDK_OFFSET(0xA5D120)
#define STATETREECORE_COMPACTSTATETREETRANSITION_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREETRANSITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5D0F0)
#define STATETREECORE_COMPACTSTATETREETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E277010)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeTransition_TypeDefinitionIndex = 31075;

	struct alignas(4) CompactStateTreeTransition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25560);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE171638C; // 0x0
		::Foundation::Unreal::FGameplayTag EventTag; // 0x10
		::System::UInt16 ConditionsBegin; // 0x18
		::StateTreeCore::StateTreeStateHandle State; // 0x1A
		::StateTreeCore::StateTreeRandomTimeDuration Delay; // 0x1C
		::StateTreeCore::StateTreeTransitionTrigger Trigger; // 0x20
		::StateTreeCore::StateTreeTransitionPriority Priority; // 0x21
		::StateTreeCore::StateTreeSelectionFallback Fallback; // 0x22
		::System::Byte ConditionsNum; // 0x23
		::System::Boolean TransitionEnabled; // 0x24

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_GET_HASDELAY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::CompactStateTreeTransition Create()
		{
			return ((::StateTreeCore::CompactStateTreeTransition(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_CREATE_OFFSET))();
		}

		::StateTreeCore::CompactStateTreeTransition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeTransition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeTransition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeTransition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeTransition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeTransition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::CompactStateTreeTransition& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeTransition&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::CompactStateTreeTransition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeTransition&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_CompactStateTreeTransition__CopyAssign(::StateTreeCore::CompactStateTreeTransition& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeTransition&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREETRANSITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
