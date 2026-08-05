#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA1EBF0)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA1EB90)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E5053A0)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x887D80)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA1EB30)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA1EC20)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA1EBF0)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA1EB90)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x887DF0)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA1EC80)
#define STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5055D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CompareDistanceConditionInstanceData_TypeDefinitionIndex = 89947;

	struct alignas(4) CompareDistanceConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B3D0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x54599BDE; // 0x0
		::UnityEngine::Vector3 First; // 0x10
		::UnityEngine::Vector3 Second; // 0x1C
		::System::Single Distance; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::CompareDistanceConditionInstanceData Create()
		{
			return ((::StateTreeGameplay::CompareDistanceConditionInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::CompareDistanceConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareDistanceConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareDistanceConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::CompareDistanceConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::CompareDistanceConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_CompareDistanceConditionInstanceData__CopyAssign(::StateTreeGameplay::CompareDistanceConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREDISTANCECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
