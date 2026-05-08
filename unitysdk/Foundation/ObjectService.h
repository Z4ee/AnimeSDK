#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/DefaultNativeSparseArrayElementAllocator.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/ObjectService_ObjectItem.h"
#include "unitysdk/Foundation/ObjectService___c__DisplayClass32_0.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_OBJECTSERVICE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1AB765C0)
#define FOUNDATION_OBJECTSERVICE_COLLECTCHILDRENRELEASEOBJECTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AB7B7E0)
#define FOUNDATION_OBJECTSERVICE_COLLECTRELEASEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AB7CBF0)
#define FOUNDATION_OBJECTSERVICE_DORELEASEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AB7B550)
#define FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_1_OFFSET UNITYSDK_OFFSET(0x1AB7B0B0)
#define FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x1AB7A720)
#define FOUNDATION_OBJECTSERVICE_DOREMOVE_OFFSET UNITYSDK_OFFSET(0x1AB7BA80)
#define FOUNDATION_OBJECTSERVICE_DOSETPARENT_OFFSET UNITYSDK_OFFSET(0x1AB7B360)
#define FOUNDATION_OBJECTSERVICE_ENSUREOBJECTSINDEX_OFFSET UNITYSDK_OFFSET(0x1AB7B4C0)
#define FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AB7FEE0)
#define FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1AB7FE60)
#define FOUNDATION_OBJECTSERVICE_GETROOT_OFFSET UNITYSDK_OFFSET(0x1AB7E020)
#define FOUNDATION_OBJECTSERVICE_INITRELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB7CB80)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_1_OFFSET UNITYSDK_OFFSET(0x1AB7D960)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_2_OFFSET UNITYSDK_OFFSET(0x1AB7DE90)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1AB778F0)
#define FOUNDATION_OBJECTSERVICE_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x1AB7EB60)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_1_OFFSET UNITYSDK_OFFSET(0x1AB7E3D0)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_OFFSET UNITYSDK_OFFSET(0x1AB7E1A0)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALLOCATED_OFFSET UNITYSDK_OFFSET(0x1AB7E8A0)
#define FOUNDATION_OBJECTSERVICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1AB7EB80)
#define FOUNDATION_OBJECTSERVICE_MARKFORREMOVAL_OFFSET UNITYSDK_OFFSET(0x1AB77E90)
#define FOUNDATION_OBJECTSERVICE_NEWITEM_OFFSET UNITYSDK_OFFSET(0x1AB7B540)
#define FOUNDATION_OBJECTSERVICE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1AB76520)
#define FOUNDATION_OBJECTSERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AB7EB90)
#define FOUNDATION_OBJECTSERVICE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AB78C40)
#define FOUNDATION_OBJECTSERVICE_RESET_OFFSET UNITYSDK_OFFSET(0x1AB771C0)
#define FOUNDATION_OBJECTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB801B0)
#define FOUNDATION_OBJECTSERVICE__COLLECTRELEASEOBJECT_G__COLLECTANDMOVENEXT_32_0_OFFSET UNITYSDK_OFFSET(0x1AB7D800)
#define FOUNDATION_OBJECTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB76330)

namespace Foundation
{
	inline static constexpr unsigned int ObjectService_TypeDefinitionIndex = 8894;

	class ObjectService : public ::System::Object
	{
	public:
		static ::Foundation::Container::DefaultNativeSparseArrayElementAllocator* StaticGet_NativeAllocator()
		{
			return (::Foundation::Container::DefaultNativeSparseArrayElementAllocator*)Il2CppClass::FromTypeDefinitionIndex(ObjectService_TypeDefinitionIndex)->GetStaticField(0x3CB0);
		}
		::System::Collections::Generic::List_1<::Foundation::IObject*>* _objects; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _objectsToRelease; // 0x18
		::Foundation::ObjectService_ObjectItem _aliveRoot; // 0x20
		::Foundation::Container::NativeSparseArrayData_3<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem, ::Foundation::Native::RawPointer> _objectItems; // 0x38
		::System::Int32 _idGenerator; // 0x48
		::Foundation::ObjectService_ObjectItem _removalRoot; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__CCTOR_OFFSET))();
		}

		::Foundation::ObjectHandle Allocate(::Foundation::ObjectHandle parent)
		{
			return ((::Foundation::ObjectHandle(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ALLOCATE_OFFSET))(this, parent);
		}

		::System::Void Reset(::Foundation::ObjectHandle handle, ::Foundation::IObject* handleObject)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle, ::Foundation::IObject*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_RESET_OFFSET))(this, handle, handleObject);
		}

		::System::Boolean IsAlive(::Foundation::ObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_OFFSET))(this, handle);
		}

		::System::Void MarkForRemoval(::Foundation::ObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_MARKFORREMOVAL_OFFSET))(this, handle);
		}

		::System::Void Remove(::Foundation::ObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_REMOVE_OFFSET))(this, handle);
		}

		::System::Void DoRemoveFromParent(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_OFFSET))(this, objectItems, child, childIndex);
		}

		static ::System::Void DoRemoveFromParent_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex, ::Foundation::ObjectService_ObjectItem& parent)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32, ::Foundation::ObjectService_ObjectItem&))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_1_OFFSET))(objectItems, child, childIndex, parent);
		}

		static ::System::Void DoSetParent(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex, ::Foundation::ObjectService_ObjectItem& parent, ::System::Int32 parentIndex)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32, ::Foundation::ObjectService_ObjectItem&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOSETPARENT_OFFSET))(objectItems, child, childIndex, parent, parentIndex);
		}

		::System::Void EnsureObjectsIndex(::System::Int64 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ENSUREOBJECTSINDEX_OFFSET))(this, index);
		}

		static ::Foundation::ObjectService_ObjectItem NewItem(::System::Int32 id)
		{
			return ((::Foundation::ObjectService_ObjectItem(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_NEWITEM_OFFSET))(id);
		}

		static ::System::Void DoReleaseObject(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Collections::Generic::List_1<::Foundation::IObject*>* objects, ::System::Int32 index)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Collections::Generic::List_1<::Foundation::IObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DORELEASEOBJECT_OFFSET))(objectItems, objects, index);
		}

		static ::System::Void CollectChildrenReleaseObjectRecursive(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> view, ::System::Int32 firstChild, ::System::Collections::Generic::List_1<::System::Int32>* objectsToRelease)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_COLLECTCHILDRENRELEASEOBJECTRECURSIVE_OFFSET))(view, firstChild, objectsToRelease);
		}

		::System::Void DoRemove(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVE_OFFSET))(this, objectItems, index);
		}

		::System::Void InitReleaseBuffer(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_INITRELEASEBUFFER_OFFSET))(this, objectItems);
		}

		::System::Void CollectReleaseObject(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Int32 index, ::System::Collections::Generic::List_1<::System::Int32>* objectsToRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_COLLECTRELEASEOBJECT_OFFSET))(this, objectItems, index, objectsToRelease);
		}

		static ::System::Boolean IsAlive_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> view, ::Foundation::ObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_1_OFFSET))(view, handle);
		}

		static ::System::Boolean IsAlive_2(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> view, ::Foundation::ObjectService_ObjectItem item)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_2_OFFSET))(view, item);
		}

		static ::System::Int32 GetRoot(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::Foundation::ObjectService_ObjectItem item)
		{
			return ((::System::Int32(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_GETROOT_OFFSET))(objectItems, item);
		}

		static ::System::Boolean IsMatchAndAlive(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> view, ::Foundation::ObjectService_ObjectItem item, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::Foundation::ObjectService_ObjectItem, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_OFFSET))(view, item, id);
		}

		static ::System::Boolean IsMatchAndAlive_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Int32 index, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_1_OFFSET))(objectItems, index, id);
		}

		static ::System::Boolean IsMatchAndAllocated(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Int32 index, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALLOCATED_OFFSET))(objectItems, index, id);
		}

		static ::System::Boolean IsAllocated(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALLOCATED_OFFSET))(objectItems, index);
		}

		static ::System::Boolean IsMatch(::Foundation::ObjectService_ObjectItem item, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::ObjectService_ObjectItem, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCH_OFFSET))(item, id);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_RELEASE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ONCREATE_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void _CollectReleaseObject_g__CollectAndMoveNext_32_0(::System::Int32& cursor, ::Foundation::ObjectService___c__DisplayClass32_0& a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::Foundation::ObjectService___c__DisplayClass32_0&))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__COLLECTRELEASEOBJECT_G__COLLECTANDMOVENEXT_32_0_OFFSET))(cursor, a2);
		}
	};
}
