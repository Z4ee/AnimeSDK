#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestBase.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace Foundation { class BundleRequest; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class Object; }

#define FOUNDATION_BUNDLEASSETREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D58DB60)
#define FOUNDATION_BUNDLEASSETREQUEST_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1D58DFD0)
#define FOUNDATION_BUNDLEASSETREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D58DC30)
#define FOUNDATION_BUNDLEASSETREQUEST_GET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1D58CFF0)
#define FOUNDATION_BUNDLEASSETREQUEST_INITBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0x1D58D010)
#define FOUNDATION_BUNDLEASSETREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1D58D840)
#define FOUNDATION_BUNDLEASSETREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1D58D060)
#define FOUNDATION_BUNDLEASSETREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D58DAD0)
#define FOUNDATION_BUNDLEASSETREQUEST_SET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1D58D000)
#define FOUNDATION_BUNDLEASSETREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D58D880)
#define FOUNDATION_BUNDLEASSETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58E0B0)
#define FOUNDATION_BUNDLEASSETREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D58E140)
#define FOUNDATION_BUNDLEASSETREQUEST___BASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1D58E230)
#define FOUNDATION_BUNDLEASSETREQUEST___BASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D58E160)
#define FOUNDATION_BUNDLEASSETREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D58E150)

namespace Foundation
{
	inline static constexpr unsigned int BundleAssetRequest_TypeDefinitionIndex = 7901;

	class BundleAssetRequest : public ::Foundation::AssetRequestBase
	{
	public:
		// static const ::System::Int32 hightestPriority = 0x270F; // 0x0
		::System::Collections::Generic::List_1<::Foundation::BundleRequest*>* children; // 0x70
		::Foundation::BundleRequest* bundle; // 0x78
		::UnityEngine::AssetBundle* assetBundle; // 0x80
		::Foundation::BundleID _BundleID_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST__CTOR_OFFSET))(this);
		}

		::Foundation::BundleID get_BundleID()
		{
			return ((::Foundation::BundleID(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_GET_BUNDLEID_OFFSET))(this);
		}

		::System::Void set_BundleID(::Foundation::BundleID value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_SET_BUNDLEID_OFFSET))(this, value);
		}

		::System::Void InitBundleInfo(::Foundation::BundleID bundleID)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_INITBUNDLEINFO_OFFSET))(this, bundleID);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::UnityEngine::Object* __base_GetInstance(::Foundation::InstantiationParameters P0)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST___BASE_GETINSTANCE_OFFSET))(this, P0);
		}

		::System::Boolean __base_GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstantiationParameters P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASSETREQUEST___BASE_GETINSTANCEASYNC_OFFSET))(this, P0, P1);
		}
	};
}
