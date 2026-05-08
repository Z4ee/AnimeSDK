#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestBase.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace Foundation { class BundleRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AsyncOperation; }

#define FOUNDATION_SCENEASSETREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1BD3C030)
#define FOUNDATION_SCENEASSETREQUEST_FORCERELEASE_OFFSET UNITYSDK_OFFSET(0x1BD3BB40)
#define FOUNDATION_SCENEASSETREQUEST_FORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1BD3BC10)
#define FOUNDATION_SCENEASSETREQUEST_GET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1BD3AD80)
#define FOUNDATION_SCENEASSETREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1BD3AE80)
#define FOUNDATION_SCENEASSETREQUEST_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1BD3ADA0)
#define FOUNDATION_SCENEASSETREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1BD3B750)
#define FOUNDATION_SCENEASSETREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1BD3AED0)
#define FOUNDATION_SCENEASSETREQUEST_MASKSCENEASSETPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1BD3AE90)
#define FOUNDATION_SCENEASSETREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1BD3BFF0)
#define FOUNDATION_SCENEASSETREQUEST_RESETSCENE_OFFSET UNITYSDK_OFFSET(0x1BD3BFB0)
#define FOUNDATION_SCENEASSETREQUEST_SET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1BD3AD90)
#define FOUNDATION_SCENEASSETREQUEST_SET_SCENE_OFFSET UNITYSDK_OFFSET(0x1BD3ADB0)
#define FOUNDATION_SCENEASSETREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BD3B790)
#define FOUNDATION_SCENEASSETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3ADC0)
#define FOUNDATION_SCENEASSETREQUEST__FORCEUNLOAD_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BD3C0A0)
#define FOUNDATION_SCENEASSETREQUEST__UNLOAD_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BD3C080)
#define FOUNDATION_SCENEASSETREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1BD3C0D0)
#define FOUNDATION_SCENEASSETREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BD3C0C0)

namespace Foundation
{
	inline static constexpr unsigned int SceneAssetRequest_TypeDefinitionIndex = 7902;

	class SceneAssetRequest : public ::Foundation::AssetRequestBase
	{
	public:
		::System::String* sceneName; // 0x70
		::Foundation::BundleRequest* bundle; // 0x78
		::System::Action* unloadSceneCompleted; // 0x80
		::UnityEngine::AssetBundle* assetBundle; // 0x88
		::System::Collections::Generic::List_1<::Foundation::BundleRequest*>* children; // 0x90
		::UnityEngine::SceneManagement::Scene _scene_k__BackingField; // 0x98
		::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode; // 0x9C
		::Foundation::BundleID _BundleID_k__BackingField; // 0xA0

		::System::Void _ctor(::Foundation::AssetPath path, ::System::String* sceneName, ::System::Boolean addictive)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST__CTOR_OFFSET))(this, path, sceneName, addictive);
		}

		::Foundation::BundleID get_BundleID()
		{
			return ((::Foundation::BundleID(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_GET_BUNDLEID_OFFSET))(this);
		}

		::System::Void set_BundleID(::Foundation::BundleID value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_SET_BUNDLEID_OFFSET))(this, value);
		}

		::UnityEngine::SceneManagement::Scene get_scene()
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_GET_SCENE_OFFSET))(this);
		}

		::System::Void set_scene(::UnityEngine::SceneManagement::Scene value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_SET_SCENE_OFFSET))(this, value);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void MaskSceneAssetPersistent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_MASKSCENEASSETPERSISTENT_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void ForceRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_FORCERELEASE_OFFSET))(this);
		}

		::System::Void ForceUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_FORCEUNLOAD_OFFSET))(this);
		}

		::System::Void ResetScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_RESETSCENE_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void _Unload_b__20_0(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST__UNLOAD_B__20_0_OFFSET))(this, operation);
		}

		::System::Void _ForceUnload_b__22_0(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST__FORCEUNLOAD_B__22_0_OFFSET))(this, operation);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}
	};
}
