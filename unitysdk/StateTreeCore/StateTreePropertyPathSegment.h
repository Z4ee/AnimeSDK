#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA786E0)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2AA120)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1E741C00)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA78660)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA78540)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA78600)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA78770)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA786E0)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2AA120)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E741A00)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E741AD0)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_RESET_OFFSET UNITYSDK_OFFSET(0xA78700)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHSEGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA786E0)
#define STATETREECORE_STATETREEPROPERTYPATHSEGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E741E50)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPathSegment_TypeDefinitionIndex = 30998;

	struct alignas(4) StateTreePropertyPathSegment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25550);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x8616FFED; // 0x0
		::Foundation::Unreal::FName Name; // 0x10
		::System::Int32 ArrayIndex; // 0x18
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> InstanceStruct; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::StateTreeCore::StateTreePropertyPathSegment other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathSegment))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreePropertyPathSegment& lhs, ::StateTreeCore::StateTreePropertyPathSegment& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPathSegment&, ::StateTreeCore::StateTreePropertyPathSegment&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreePropertyPathSegment& lhs, ::StateTreeCore::StateTreePropertyPathSegment& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPathSegment&, ::StateTreeCore::StateTreePropertyPathSegment&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyPathSegment Create()
		{
			return ((::StateTreeCore::StateTreePropertyPathSegment(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyPathSegment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathSegment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathSegment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathSegment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathSegment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathSegment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyPathSegment& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathSegment&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyPathSegment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathSegment&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyPathSegment__CopyAssign(::StateTreeCore::StateTreePropertyPathSegment& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathSegment&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHSEGMENT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHSEGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
