#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleInfo.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ValueSparseHashMap8_32_1; }
namespace Unity::Collections { template <typename T> class ValueSparseHashMap8_4_1; }
namespace Unity::Collections { template <typename T> class ValueSparseHashMap8_8_1; }
namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF3B580)
#define FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESREMOVEBYKEY_OFFSET UNITYSDK_OFFSET(0x1EF3B600)
#define FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1EF3B690)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLECHILDRENSADD_OFFSET UNITYSDK_OFFSET(0x1EF3B980)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEDIRECTCHILDRENSADD_OFFSET UNITYSDK_OFFSET(0x1EF3BC80)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEINFOSINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF3B4A0)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEINFOSTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1EF3B510)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF3B710)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETOCHILDRENTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1EF3B780)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETODIRECTCHILDRENINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF3BA10)
#define FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETODIRECTCHILDRENTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1EF3BA80)
#define FOUNDATION_BUNDLEINDEXDATABASE_CLEARALLBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1EF3AED0)
#define FOUNDATION_BUNDLEINDEXDATABASE_CLEARALLWITHOUTBUNDLES_OFFSET UNITYSDK_OFFSET(0x1EF3B3B0)
#define FOUNDATION_BUNDLEINDEXDATABASE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1EF3B2A0)
#define FOUNDATION_BUNDLEINDEXDATABASE_CLEARBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1EF3AF10)
#define FOUNDATION_BUNDLEINDEXDATABASE_GETALLASSETHASHES_OFFSET UNITYSDK_OFFSET(0x1EF3BD10)
#define FOUNDATION_BUNDLEINDEXDATABASE_GETBUNDLECHILDRENSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF3B930)
#define FOUNDATION_BUNDLEINDEXDATABASE_GETBUNDLEDIRECTCHILDRENSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF3BC30)
#define FOUNDATION_BUNDLEINDEXDATABASE_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1EF3B7F0)
#define FOUNDATION_BUNDLEINDEXDATABASE_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1EF3BAF0)
#define FOUNDATION_BUNDLEINDEXDATABASE_INITASSETS_OFFSET UNITYSDK_OFFSET(0x1EF3B1C0)
#define FOUNDATION_BUNDLEINDEXDATABASE_INITBUNDLEINDEXASSET_OFFSET UNITYSDK_OFFSET(0x1EF3AE80)
#define FOUNDATION_BUNDLEINDEXDATABASE_INITBUNDLES_OFFSET UNITYSDK_OFFSET(0x1EF3AF60)
#define FOUNDATION_BUNDLEINDEXDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3BD80)

namespace Foundation
{
	inline static constexpr unsigned int BundleIndexDataBase_TypeDefinitionIndex = 8237;

	class BundleIndexDataBase : public ::System::Object
	{
	public:
		::Unity::Collections::ValueSparseHashMap8_32_1<::Foundation::BundleInfo>* BundleInfos; // 0x10
		::Unity::Collections::ValueSparseHashMap8_4_1<::System::Int32>* BundleToChildren; // 0x18
		::Unity::Collections::ValueSparseHashMap8_4_1<::System::Int32>* BundleToDirectChildren; // 0x20
		::System::Collections::Generic::List_1<::Il2CppArray<::Foundation::BundleID>*>* BundleDirectChildrens; // 0x28
		::Unity::Collections::ValueSparseHashMap8_8_1<::System::UInt64>* AssetToBundles; // 0x30
		::System::Collections::Generic::List_1<::Il2CppArray<::Foundation::BundleID>*>* BundleChildrens; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE__CTOR_OFFSET))(this);
		}

		::System::Void InitBundleIndexAsset(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_INITBUNDLEINDEXASSET_OFFSET))(this, asset);
		}

		::System::Void ClearAllBlockLocationCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_CLEARALLBLOCKLOCATIONCACHE_OFFSET))(this);
		}

		::System::Void ClearBlockLocationCache(::Foundation::ResourceFileType type)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_CLEARBLOCKLOCATIONCACHE_OFFSET))(this, type);
		}

		::System::Void InitBundles(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_INITBUNDLES_OFFSET))(this, newSize);
		}

		::System::Void InitAssets(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_INITASSETS_OFFSET))(this, newSize);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_CLEARALL_OFFSET))(this);
		}

		::System::Void ClearAllWithoutBundles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_CLEARALLWITHOUTBUNDLES_OFFSET))(this);
		}

		::System::Void BundleInfosInsertOrUpdate(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEINFOSINSERTORUPDATE_OFFSET))(this, bundleID, bi);
		}

		::System::Boolean BundleInfosTryGetValue(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEINFOSTRYGETVALUE_OFFSET))(this, bundleID, bi);
		}

		::System::Void AssetToBundlesInsertOrUpdate(::System::UInt64 HashPath, ::System::UInt64 bundleHashName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESINSERTORUPDATE_OFFSET))(this, HashPath, bundleHashName);
		}

		::System::Void AssetToBundlesRemoveByKey(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESREMOVEBYKEY_OFFSET))(this, path);
		}

		::System::Boolean AssetToBundlesTryGetValue(::Foundation::AssetPath path, ::System::UInt64& bid)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_ASSETTOBUNDLESTRYGETVALUE_OFFSET))(this, path, bid);
		}

		::System::Void BundleToChildrenInsertOrUpdate(::Foundation::BundleID bundleID, ::System::Int32& existIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET))(this, bundleID, existIndex);
		}

		::System::Boolean BundleToChildrenTryGetValue(::Foundation::BundleID bundle, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETOCHILDRENTRYGETVALUE_OFFSET))(this, bundle, index);
		}

		::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_GETCHILDREN_OFFSET))(this, bundle);
		}

		::System::Int32 GetBundleChildrensCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_GETBUNDLECHILDRENSCOUNT_OFFSET))(this);
		}

		::System::Void BundleChildrensAdd(::Il2CppArray<::Foundation::BundleID>* children)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLECHILDRENSADD_OFFSET))(this, children);
		}

		::System::Void BundleToDirectChildrenInsertOrUpdate(::Foundation::BundleID bundleID, ::System::Int32& existIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETODIRECTCHILDRENINSERTORUPDATE_OFFSET))(this, bundleID, existIndex);
		}

		::System::Boolean BundleToDirectChildrenTryGetValue(::Foundation::BundleID bundle, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLETODIRECTCHILDRENTRYGETVALUE_OFFSET))(this, bundle, index);
		}

		::Il2CppArray<::Foundation::BundleID>* GetDirectChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_GETDIRECTCHILDREN_OFFSET))(this, bundle);
		}

		::System::Int32 GetBundleDirectChildrensCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_GETBUNDLEDIRECTCHILDRENSCOUNT_OFFSET))(this);
		}

		::System::Void BundleDirectChildrensAdd(::Il2CppArray<::Foundation::BundleID>* children)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_BUNDLEDIRECTCHILDRENSADD_OFFSET))(this, children);
		}

		::Il2CppArray<::System::UInt64>* GetAllAssetHashes()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASE_GETALLASSETHASHES_OFFSET))(this);
		}
	};
}
