#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleLoadInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETBUNDLELOADHELPER_GETASSETBUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1BEDB650)
#define FOUNDATION_ASSETBUNDLELOADHELPER_GETBUNDLELOG_OFFSET UNITYSDK_OFFSET(0x1BEDB340)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1BEDB830)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1BEDB6D0)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1BEDB450)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1BEDB390)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1BEDB5B0)
#define FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1BEDB4F0)

namespace Foundation
{
	inline static constexpr unsigned int AssetBundleLoadHelper_TypeDefinitionIndex = 8090;

	class AssetBundleLoadHelper : public ::System::Object
	{
	public:
		static ::System::String* GetBundleLog(::Foundation::BundleID& bundleID)
		{
			return ((::System::String*(*)(::Foundation::BundleID&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_GETBUNDLELOG_OFFSET))(bundleID);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Foundation::BundleLoadInfo& bundleLoadInfo)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Foundation::BundleLoadInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILEASYNC_OFFSET))(bundleLoadInfo);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile(::Foundation::BundleLoadInfo& bundleLoadInfo)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Foundation::BundleLoadInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILE_OFFSET))(bundleLoadInfo);
		}

		static ::System::String* GetAssetBundleFilePath(::System::String*& folderPath, ::System::UInt64& fileNameHash, ::System::String*& fileExt)
		{
			return ((::System::String*(*)(::System::String*&, ::System::UInt64&, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_GETASSETBUNDLEFILEPATH_OFFSET))(folderPath, fileNameHash, fileExt);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_1(::System::String*& folderPath, ::System::UInt64& fileNameHash, ::System::String*& fileExt, ::System::UInt32& crc, ::System::UInt64& offset, ::System::UInt64& fileSize)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*&, ::System::UInt64&, ::System::String*&, ::System::UInt32&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILE_1_OFFSET))(folderPath, fileNameHash, fileExt, crc, offset, fileSize);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_1(::System::String*& folderPath, ::System::UInt64& fileNameHash, ::System::String*& fileExt, ::System::UInt32& crc, ::System::UInt64& offset, ::System::UInt64& fileSize)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*&, ::System::UInt64&, ::System::String*&, ::System::UInt32&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADFROMFILEASYNC_1_OFFSET))(folderPath, fileNameHash, fileExt, crc, offset, fileSize);
		}

		static ::UnityEngine::Object* LoadAsset(::UnityEngine::AssetBundle*& assetBundle, ::Foundation::AssetPath& assetPath, ::System::Type*& assetType)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::AssetBundle*&, ::Foundation::AssetPath&, ::System::Type*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADASSET_OFFSET))(assetBundle, assetPath, assetType);
		}

		static ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::UnityEngine::AssetBundle*& assetBundle, ::Foundation::AssetPath& assetPath, ::System::Type*& assetType)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::UnityEngine::AssetBundle*&, ::Foundation::AssetPath&, ::System::Type*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETBUNDLELOADHELPER_LOADASSETASYNC_OFFSET))(assetBundle, assetPath, assetType);
		}
	};
}
