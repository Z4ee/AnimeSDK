#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleInfo.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class BundleIndexDataBaseInterface; }
namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1D2E65D0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESREMOVEBYKEY_OFFSET UNITYSDK_OFFSET(0x1D2E6730)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D2E68A0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLECHILDRENSADD_OFFSET UNITYSDK_OFFSET(0x1D2E6F60)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLEINFOSINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1D2E6310)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLEINFOSTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D2E6470)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1D2E6A10)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLETOCHILDRENTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D2E6B70)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALLBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1D2E5B90)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALLWITHOUTBUNDLES_OFFSET UNITYSDK_OFFSET(0x1D2E61D0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1D2E6090)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1D2E5CD0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_GETALLASSETHASHES_OFFSET UNITYSDK_OFFSET(0x1D2E70B0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_GETBUNDLECHILDRENSCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2E6E20)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D2E6CD0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_INITASSETS_OFFSET UNITYSDK_OFFSET(0x1D2E5F50)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_INITBUNDLEINDEXASSET_OFFSET UNITYSDK_OFFSET(0x1D2E5A40)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_INITBUNDLES_OFFSET UNITYSDK_OFFSET(0x1D2E5E10)
#define FOUNDATION_NAPBUNDLEINDEXPROXY_INITDATABASE_OFFSET UNITYSDK_OFFSET(0x1D2E58E0)
#define FOUNDATION_NAPBUNDLEINDEXPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7200)
#define FOUNDATION_NAPBUNDLEINDEXPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E71F0)

namespace Foundation
{
	inline static constexpr unsigned int NapBundleIndexProxy_TypeDefinitionIndex = 7757;

	class NapBundleIndexProxy : public ::System::Object
	{
	public:
		static ::Foundation::BundleIndexDataBaseInterface** StaticGet_s_bundleIndexDatabase()
		{
			return (::Foundation::BundleIndexDataBaseInterface**)Il2CppClass::FromTypeDefinitionIndex(NapBundleIndexProxy_TypeDefinitionIndex)->GetStaticField(0x71F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY__CCTOR_OFFSET))();
		}

		static ::System::Void InitDataBase()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_INITDATABASE_OFFSET))();
		}

		static ::System::Void InitBundleIndexAsset(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_INITBUNDLEINDEXASSET_OFFSET))(asset);
		}

		static ::System::Void ClearAllBlockLocationCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALLBLOCKLOCATIONCACHE_OFFSET))();
		}

		static ::System::Void ClearBlockLocationCache(::Foundation::ResourceFileType type)
		{
			return ((::System::Void(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARBLOCKLOCATIONCACHE_OFFSET))(type);
		}

		static ::System::Void InitBundles(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_INITBUNDLES_OFFSET))(newSize);
		}

		static ::System::Void InitAssets(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_INITASSETS_OFFSET))(newSize);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALL_OFFSET))();
		}

		static ::System::Void ClearAllWithoutBundles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_CLEARALLWITHOUTBUNDLES_OFFSET))();
		}

		static ::System::Void BundleInfosInsertOrUpdate(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Void(*)(::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLEINFOSINSERTORUPDATE_OFFSET))(bundleID, bi);
		}

		static ::System::Boolean BundleInfosTryGetValue(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Boolean(*)(::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLEINFOSTRYGETVALUE_OFFSET))(bundleID, bi);
		}

		static ::System::Void AssetToBundlesInsertOrUpdate(::System::UInt64 HashPath, ::System::UInt64 bundleHashName)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESINSERTORUPDATE_OFFSET))(HashPath, bundleHashName);
		}

		static ::System::Void AssetToBundlesRemoveByKey(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESREMOVEBYKEY_OFFSET))(path);
		}

		static ::System::Boolean AssetToBundlesTryGetValue(::Foundation::AssetPath path, ::System::UInt64& bid)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_ASSETTOBUNDLESTRYGETVALUE_OFFSET))(path, bid);
		}

		static ::System::Void BundleToChildrenInsertOrUpdate(::Foundation::BundleID bundleID, ::System::Int32& existIndex)
		{
			return ((::System::Void(*)(::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET))(bundleID, existIndex);
		}

		static ::System::Boolean BundleToChildrenTryGetValue(::Foundation::BundleID bundle, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLETOCHILDRENTRYGETVALUE_OFFSET))(bundle, index);
		}

		static ::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_GETCHILDREN_OFFSET))(bundle);
		}

		static ::System::Int32 GetBundleChildrensCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_GETBUNDLECHILDRENSCOUNT_OFFSET))();
		}

		static ::System::Void BundleChildrensAdd(::Il2CppArray<::Foundation::BundleID>* children)
		{
			return ((::System::Void(*)(::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_BUNDLECHILDRENSADD_OFFSET))(children);
		}

		static ::Il2CppArray<::System::UInt64>* GetAllAssetHashes()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXPROXY_GETALLASSETHASHES_OFFSET))();
		}
	};
}
