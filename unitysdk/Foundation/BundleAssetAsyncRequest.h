#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleAssetRequest.h"

namespace Foundation { class BundleRequest; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleRequest; }

#define FOUNDATION_BUNDLEASSETASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1B616610)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1B615830)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B616660)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1B616020)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x1B615AA0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1B616580)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1B6164E0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B615BB0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B616CD0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1B616D60)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1B616D70)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B616D90)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1B616D80)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1B616E20)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1B616E30)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B616E40)

namespace Foundation
{
	inline static constexpr unsigned int BundleAssetAsyncRequest_TypeDefinitionIndex = 8092;

	class BundleAssetAsyncRequest : public ::Foundation::BundleAssetRequest
	{
	public:
		::UnityEngine::AssetBundleCreateRequest* _bundleRequest; // 0x90
		::UnityEngine::AssetBundleRequest* _request; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST__CTOR_OFFSET))(this);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Boolean OnError(::Foundation::BundleRequest* bundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_ONERROR_OFFSET))(this, bundle);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
