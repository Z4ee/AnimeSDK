#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPathSegment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace System { class String; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define STATETREECORE_STATETREEPROPERTYPATH_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8D2710)
#define STATETREECORE_STATETREEPROPERTYPATH_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x8D25C0)
#define STATETREECORE_STATETREEPROPERTYPATH_CREATE_OFFSET UNITYSDK_OFFSET(0x1F6B5810)
#define STATETREECORE_STATETREEPROPERTYPATH_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xAAC370)
#define STATETREECORE_STATETREEPROPERTYPATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D2930)
#define STATETREECORE_STATETREEPROPERTYPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xAAC1B0)
#define STATETREECORE_STATETREEPROPERTYPATH_FROMSTRING_OFFSET UNITYSDK_OFFSET(0xAAC1A0)
#define STATETREECORE_STATETREEPROPERTYPATH_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xAAC190)
#define STATETREECORE_STATETREEPROPERTYPATH_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xAAC310)
#define STATETREECORE_STATETREEPROPERTYPATH_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xAAC410)
#define STATETREECORE_STATETREEPROPERTYPATH_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xAAC3F0)
#define STATETREECORE_STATETREEPROPERTYPATH_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x8D2640)
#define STATETREECORE_STATETREEPROPERTYPATH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F6B4570)
#define STATETREECORE_STATETREEPROPERTYPATH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F6B45B0)
#define STATETREECORE_STATETREEPROPERTYPATH_RESET_OFFSET UNITYSDK_OFFSET(0xAAC400)
#define STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONSWITHVALUE_OFFSET UNITYSDK_OFFSET(0xAAC2A0)
#define STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONS_OFFSET UNITYSDK_OFFSET(0xAAC1F0)
#define STATETREECORE_STATETREEPROPERTYPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAAC1E0)
#define STATETREECORE_STATETREEPROPERTYPATH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATH__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8D2710)
#define STATETREECORE_STATETREEPROPERTYPATH_UPDATESEGMENTSFROMVALUE_OFFSET UNITYSDK_OFFSET(0xAAC2E0)
#define STATETREECORE_STATETREEPROPERTYPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B5BC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPath_TypeDefinitionIndex = 31605;

	struct alignas(8) StateTreePropertyPath
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyPath_TypeDefinitionIndex)->GetStaticField(0x26D10);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x8FADC034; // 0x0
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyPathSegment> Segments; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean FromString(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_FROMSTRING_OFFSET))(this, path);
		}

		::System::Boolean Equals(::StateTreeCore::StateTreePropertyPath other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreePropertyPath))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreePropertyPath& lhs, ::StateTreeCore::StateTreePropertyPath& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPath&, ::StateTreeCore::StateTreePropertyPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreePropertyPath& lhs, ::StateTreeCore::StateTreePropertyPath& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPath&, ::StateTreeCore::StateTreePropertyPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean ResolveIndirections(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> baseStruct, ::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreePropertyPathIndirection>* outIndirections, ::System::Boolean logError, ::System::Boolean handleRedirects)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreePropertyPathIndirection>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONS_OFFSET))(this, baseStruct, outIndirections, logError, handleRedirects);
		}
		*/

		/*
		::System::Boolean ResolveIndirectionsWithValue(::StateTreeCore::StateTreeDataView baseValueView, ::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreePropertyPathIndirection>* outIndirections, ::System::Boolean logError, ::System::Boolean handleRedirects)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView, ::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreePropertyPathIndirection>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONSWITHVALUE_OFFSET))(this, baseValueView, outIndirections, logError, handleRedirects);
		}
		*/

		/*
		::System::Boolean UpdateSegmentsFromValue(::StateTreeCore::StateTreeDataView baseValueView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_UPDATESEGMENTSFROMVALUE_OFFSET))(this, baseValueView);
		}
		*/

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyPath Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPath(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreePropertyPath DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPath CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPath MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyPath& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyPath& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyPath__CopyAssign(::StateTreeCore::StateTreePropertyPath& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATH__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
