#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequest.h"
#include "unitysdk/Foundation/BundleID.h"

namespace System { class String; }
namespace UnityEngine { class AssetBundle; }

#define FOUNDATION_BUNDLEREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1DA33430)
#define FOUNDATION_BUNDLEREQUEST_GET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1DA32CB0)
#define FOUNDATION_BUNDLEREQUEST_GET_BUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1DA32D50)
#define FOUNDATION_BUNDLEREQUEST_GET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1DA32D30)
#define FOUNDATION_BUNDLEREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1DA32D70)
#define FOUNDATION_BUNDLEREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1DA333A0)
#define FOUNDATION_BUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1DA32D20)
#define FOUNDATION_BUNDLEREQUEST_SET_BUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1DA32D60)
#define FOUNDATION_BUNDLEREQUEST_SET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1DA32D40)
#define FOUNDATION_BUNDLEREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1DA330E0)
#define FOUNDATION_BUNDLEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA33590)
#define FOUNDATION_BUNDLEREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1DA335B0)
#define FOUNDATION_BUNDLEREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1DA33650)
#define FOUNDATION_BUNDLEREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1DA33660)
#define FOUNDATION_BUNDLEREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1DA33640)

namespace Foundation
{
	inline static constexpr unsigned int BundleRequest_TypeDefinitionIndex = 8098;

	class BundleRequest : public ::Foundation::AssetRequest
	{
	public:
		::System::String* _BundleFilePath_k__BackingField; // 0x70
		::Foundation::AssetPath RefAssetUrl; // 0x78
		::Foundation::BundleID _BundleID_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::AssetBundle* get_assetBundle()
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_GET_ASSETBUNDLE_OFFSET))(this);
		}

		::System::Void set_assetBundle(::UnityEngine::AssetBundle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AssetBundle*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET))(this, value);
		}

		::Foundation::BundleID get_BundleID()
		{
			return ((::Foundation::BundleID(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_GET_BUNDLEID_OFFSET))(this);
		}

		::System::Void set_BundleID(::Foundation::BundleID value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_SET_BUNDLEID_OFFSET))(this, value);
		}

		::System::String* get_BundleFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_GET_BUNDLEFILEPATH_OFFSET))(this);
		}

		::System::Void set_BundleFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_SET_BUNDLEFILEPATH_OFFSET))(this, value);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEREQUEST___BASE_RECYCLE_OFFSET))(this);
		}
	};
}
