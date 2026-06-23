#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleAssetRequest.h"

namespace Foundation { class BundleRequest; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleRequest; }

#define FOUNDATION_BUNDLEASSETASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D881E50)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1D881070)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1D881EA0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1D881860)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x1D8812E0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D881DC0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D881D20)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D8813F0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D882520)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D8825B0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1D8825C0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1D8825E0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1D8825D0)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D882670)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D882680)
#define FOUNDATION_BUNDLEASSETASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D882690)

namespace Foundation
{
	inline static constexpr unsigned int BundleAssetAsyncRequest_TypeDefinitionIndex = 8349;

	class BundleAssetAsyncRequest : public ::Foundation::BundleAssetRequest
	{
	public:
		::UnityEngine::AssetBundleRequest* _request; // 0x90
		::UnityEngine::AssetBundleCreateRequest* _bundleRequest; // 0x98

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
