#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructDesc.h"
#include "unitysdk/StateTreeCore/StateTreePropertyAccess.h"
#include "unitysdk/StateTreeCore/StateTreePropertyAccessCompatibility.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopy.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopyBatch.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPathBinding.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRefPath.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Property; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYBINDINGS_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5A600)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA5A5C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_COPYPROPERTY_OFFSET UNITYSDK_OFFSET(0xA5A360)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_CREATE_OFFSET UNITYSDK_OFFSET(0x1E1DA2E0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA5A5A0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5AC20)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETADDRESS_1_OFFSET UNITYSDK_OFFSET(0x1E1D9E10)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETADDRESS_OFFSET UNITYSDK_OFFSET(0xA5A3B0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETBATCHCOPIES_OFFSET UNITYSDK_OFFSET(0xA5A1D0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETPROPERTYACCESS_OFFSET UNITYSDK_OFFSET(0xA5A4B0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETPROPERTYCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1E1D88E0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETSOURCEDESCBYHANDLE_OFFSET UNITYSDK_OFFSET(0xA5A270)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA5A1C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA5A540)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA5ACB0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA5AA00)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA5A5E0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_PERFORMCOPYOBJECT_OFFSET UNITYSDK_OFFSET(0x1E1D9CD0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_PERFORMCOPY_OFFSET UNITYSDK_OFFSET(0x1E1D92B0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESET_OFFSET UNITYSDK_OFFSET(0xA5ABB0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVECOPYTYPE_OFFSET UNITYSDK_OFFSET(0x1E1D73D0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATHS_OFFSET UNITYSDK_OFFSET(0xA5A2A0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_1_OFFSET UNITYSDK_OFFSET(0x1E1D7DC0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_OFFSET UNITYSDK_OFFSET(0xA5A2B0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYBINDINGS__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5A600)
#define STATETREECORE_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB8C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS__GETPROPERTYCOMPATIBILITY_G__GETPROPERTYENUM_16_0_OFFSET UNITYSDK_OFFSET(0x1E1D8D80)
#define STATETREECORE_STATETREEPROPERTYBINDINGS__RESOLVEPATH_G__CASTARRAYINDEXTOINDEX16_14_0_OFFSET UNITYSDK_OFFSET(0x1E1D88C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyBindings_TypeDefinitionIndex = 31019;

	struct alignas(8) StateTreePropertyBindings
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25780);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF585461D; // 0x0
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeBindableStructDesc> SourceStructs; // 0x10
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyCopyBatch> CopyBatches; // 0x28
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyPathBinding> PropertyPathBindings; // 0x40
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyCopy> PropertyCopies; // 0x58
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyRefPath> PropertyReferencePaths; // 0x70
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyAccess> PropertyAccesses; // 0x88
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyIndirection> PropertyIndirections; // 0xA0
		::System::Boolean _areBindingsResolved; // 0xB8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyCopy> GetBatchCopies(::StateTreeCore::StateTreePropertyCopyBatch& batch)
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyCopy>(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETBATCHCOPIES_OFFSET))(this, batch);
		}
		*/

		/*
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeBindableStructDesc> GetSourceDescByHandle(::StateTreeCore::StateTreeDataHandle sourceDataHandle)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeBindableStructDesc>(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETSOURCEDESCBYHANDLE_OFFSET))(this, sourceDataHandle);
		}
		*/

		::System::Boolean ResolvePaths()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATHS_OFFSET))(this);
		}

		/*
		::System::Boolean ResolvePath(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> scriptStruct, ::StateTreeCore::StateTreePropertyPath& path, ::StateTreeCore::StateTreePropertyIndirection& outFirstIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& outLeafIndirection)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::StateTreeCore::StateTreePropertyPath&, ::StateTreeCore::StateTreePropertyIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_OFFSET))(this, scriptStruct, path, outFirstIndirection, outLeafIndirection);
		}
		*/

		/*
		static ::System::Boolean ResolvePath_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> scriptStruct, ::StateTreeCore::StateTreePropertyPath& path, ::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyIndirection> outIndirections, ::StateTreeCore::StateTreePropertyIndirection& outFirstIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& outLeafIndirection)
		{
			return ((::System::Boolean(*)(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::StateTreeCore::StateTreePropertyPath&, ::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreePropertyIndirection>, ::StateTreeCore::StateTreePropertyIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_1_OFFSET))(scriptStruct, path, outIndirections, outFirstIndirection, outLeafIndirection);
		}
		*/

		/*
		static ::System::Boolean ResolveCopyType(::StateTreeCore::StateTreePropertyPathIndirection& sourceIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& targetIndirection, ::StateTreeCore::StateTreePropertyCopy& outCopy)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPathIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&, ::StateTreeCore::StateTreePropertyCopy&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVECOPYTYPE_OFFSET))(sourceIndirection, targetIndirection, outCopy);
		}
		*/

		static ::StateTreeCore::StateTreePropertyAccessCompatibility GetPropertyCompatibility(::UnrealTypes::Property* fromProperty, ::UnrealTypes::Property* toProperty)
		{
			return ((::StateTreeCore::StateTreePropertyAccessCompatibility(*)(::UnrealTypes::Property*, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETPROPERTYCOMPATIBILITY_OFFSET))(fromProperty, toProperty);
		}

		/*
		::System::Boolean CopyProperty(::StateTreeCore::StateTreePropertyCopy& copy, ::StateTreeCore::StateTreeDataView sourceStructView, ::StateTreeCore::StateTreeDataView targetStructView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopy&, ::StateTreeCore::StateTreeDataView, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_COPYPROPERTY_OFFSET))(this, copy, sourceStructView, targetStructView);
		}
		*/

		/*
		::System::Void* GetAddress(::StateTreeCore::StateTreeDataView structView, ::StateTreeCore::StateTreePropertyIndirection& firstIndirection, ::UnrealTypes::FPropertyHandle leafProperty)
		{
			return ((::System::Void*(*)(::PVOID, ::StateTreeCore::StateTreeDataView, ::StateTreeCore::StateTreePropertyIndirection&, ::UnrealTypes::FPropertyHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETADDRESS_OFFSET))(this, structView, firstIndirection, leafProperty);
		}
		*/

		/*
		static ::System::Void* GetAddress_1(::StateTreeCore::StateTreeDataView structView, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyIndirection> indirections, ::StateTreeCore::StateTreePropertyIndirection& firstIndirection, ::UnrealTypes::FPropertyHandle leafProperty)
		{
			return ((::System::Void*(*)(::StateTreeCore::StateTreeDataView, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyIndirection>, ::StateTreeCore::StateTreePropertyIndirection&, ::UnrealTypes::FPropertyHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETADDRESS_1_OFFSET))(structView, indirections, firstIndirection, leafProperty);
		}
		*/

		static ::System::Void PerformCopy(::StateTreeCore::StateTreePropertyCopy& copy, ::System::Void* sourceAddress, ::System::Void* targetAddress)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreePropertyCopy&, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_PERFORMCOPY_OFFSET))(copy, sourceAddress, targetAddress);
		}

		/*
		static ::System::Void PerformCopyObject(::StateTreeCore::StateTreePropertyCopy& copy, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> objectHandle, ::System::Void* targetAddress)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreePropertyCopy&, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>, ::System::Void*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_PERFORMCOPYOBJECT_OFFSET))(copy, objectHandle, targetAddress);
		}
		*/

		/*
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreePropertyAccess> GetPropertyAccess(::StateTreeCore::StateTreePropertyRef propertyRef)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreePropertyAccess>(*)(::PVOID, ::StateTreeCore::StateTreePropertyRef))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETPROPERTYACCESS_OFFSET))(this, propertyRef);
		}
		*/

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyBindings Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyBindings(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreePropertyBindings DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyBindings(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyBindings CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyBindings(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyBindings MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyBindings(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyBindings& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyBindings&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyBindings& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyBindings&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyBindings__CopyAssign(::StateTreeCore::StateTreePropertyBindings& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyBindings&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYBINDINGS__COPYASSIGN_OFFSET))(this, other);
		}

		static ::System::UInt16 _ResolvePath_g__CastArrayIndexToIndex16_14_0(::System::Int32 index)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS__RESOLVEPATH_G__CASTARRAYINDEXTOINDEX16_14_0_OFFSET))(index);
		}

		static ::UnrealTypes::Enum* _GetPropertyCompatibility_g__GetPropertyEnum_16_0(::UnrealTypes::Property* property)
		{
			return ((::UnrealTypes::Enum*(*)(::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS__GETPROPERTYCOMPATIBILITY_G__GETPROPERTYENUM_16_0_OFFSET))(property);
		}
	};
}
