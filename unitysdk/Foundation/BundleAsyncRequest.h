#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleRequest.h"

namespace UnityEngine { class AssetBundleCreateRequest; }

#define FOUNDATION_BUNDLEASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19FFA120)
#define FOUNDATION_BUNDLEASYNCREQUEST_CLEANUPREQUESTOBJ_OFFSET UNITYSDK_OFFSET(0x19FF99D0)
#define FOUNDATION_BUNDLEASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x19FF95C0)
#define FOUNDATION_BUNDLEASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x19FF9D60)
#define FOUNDATION_BUNDLEASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x19FF9A90)
#define FOUNDATION_BUNDLEASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19FFA090)
#define FOUNDATION_BUNDLEASYNCREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19FF9CB0)
#define FOUNDATION_BUNDLEASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FF9620)
#define FOUNDATION_BUNDLEASYNCREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FFA190)
#define FOUNDATION_BUNDLEASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFA170)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19FFA1A0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x19FFA1B0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x19FFA1D0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x19FFA1C0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19FFA260)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19FFA270)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FFA280)

namespace Foundation
{
	inline static constexpr unsigned int BundleAsyncRequest_TypeDefinitionIndex = 7753;

	class BundleAsyncRequest : public ::Foundation::BundleRequest
	{
	public:
		static ::System::Boolean* StaticGet_EnableCleanupRequest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BundleAsyncRequest_TypeDefinitionIndex)->GetStaticField(0x3630);
		}
		::UnityEngine::AssetBundleCreateRequest* _request; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST__CCTOR_OFFSET))();
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void CleanupRequestObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_CLEANUPREQUESTOBJ_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
