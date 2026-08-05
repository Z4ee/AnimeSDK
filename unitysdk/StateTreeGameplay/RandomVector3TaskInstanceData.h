#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887DC0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x887D90)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18C5AA50)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x887D80)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x887D20)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x887E00)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x887DC0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x887D90)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x887DF0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887E60)
#define STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5AC20)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RandomVector3TaskInstanceData_TypeDefinitionIndex = 69023;

	struct alignas(4) RandomVector3TaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1F0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xD5F6110B; // 0x0
		::UnityEngine::Vector3 Center; // 0x10
		::System::Single Radius; // 0x1C
		::UnityEngine::Vector3 RandomVector; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::RandomVector3TaskInstanceData Create()
		{
			return ((::StateTreeGameplay::RandomVector3TaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::RandomVector3TaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3TaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomVector3TaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3TaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomVector3TaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3TaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::RandomVector3TaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3TaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::RandomVector3TaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3TaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_RandomVector3TaskInstanceData__CopyAssign(::StateTreeGameplay::RandomVector3TaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3TaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVECTOR3TASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
