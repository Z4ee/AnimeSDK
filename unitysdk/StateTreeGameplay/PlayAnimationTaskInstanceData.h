#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x753C30)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1878E5C0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x881E20)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x881DC0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x881EE0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x753C30)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x881E80)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x881F40)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878E790)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int PlayAnimationTaskInstanceData_TypeDefinitionIndex = 67609;

	struct alignas(4) PlayAnimationTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PlayAnimationTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DDE0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x109B3BFE; // 0x0
		::UnrealTypes::TObjectHandle_1<::StateTreeGameplay::ActorContext*> Actor; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::PlayAnimationTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::PlayAnimationTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::PlayAnimationTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::PlayAnimationTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::PlayAnimationTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::PlayAnimationTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::PlayAnimationTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_PlayAnimationTaskInstanceData__CopyAssign(::StateTreeGameplay::PlayAnimationTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_PLAYANIMATIONTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
