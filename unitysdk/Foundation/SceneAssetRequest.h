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

#define FOUNDATION_SCENEASSETREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1F0209C0)
#define FOUNDATION_SCENEASSETREQUEST_FORCERELEASE_OFFSET UNITYSDK_OFFSET(0x1F0204D0)
#define FOUNDATION_SCENEASSETREQUEST_FORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1F0205A0)
#define FOUNDATION_SCENEASSETREQUEST_GET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1F01F700)
#define FOUNDATION_SCENEASSETREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1F01F800)
#define FOUNDATION_SCENEASSETREQUEST_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1F01F720)
#define FOUNDATION_SCENEASSETREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1F0200E0)
#define FOUNDATION_SCENEASSETREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1F01F850)
#define FOUNDATION_SCENEASSETREQUEST_MASKSCENEASSETPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1F01F810)
#define FOUNDATION_SCENEASSETREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1F020980)
#define FOUNDATION_SCENEASSETREQUEST_RESETSCENE_OFFSET UNITYSDK_OFFSET(0x1F020940)
#define FOUNDATION_SCENEASSETREQUEST_SET_BUNDLEID_OFFSET UNITYSDK_OFFSET(0x1F01F710)
#define FOUNDATION_SCENEASSETREQUEST_SET_SCENE_OFFSET UNITYSDK_OFFSET(0x1F01F730)
#define FOUNDATION_SCENEASSETREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F020120)
#define FOUNDATION_SCENEASSETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01F740)
#define FOUNDATION_SCENEASSETREQUEST__FORCEUNLOAD_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F020A30)
#define FOUNDATION_SCENEASSETREQUEST__UNLOAD_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F020A10)
#define FOUNDATION_SCENEASSETREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1F020A60)
#define FOUNDATION_SCENEASSETREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F020A50)

namespace Foundation
{
	inline static constexpr unsigned int SceneAssetRequest_TypeDefinitionIndex = 8406;

	class SceneAssetRequest : public ::Foundation::AssetRequestBase
	{
	public:
		::System::String* sceneName; // 0x70
		::System::Collections::Generic::List_1<::Foundation::BundleRequest*>* children; // 0x78
		::UnityEngine::AssetBundle* assetBundle; // 0x80
		::Foundation::BundleRequest* bundle; // 0x88
		::System::Action* unloadSceneCompleted; // 0x90
		::Foundation::BundleID _BundleID_k__BackingField; // 0x98
		::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode; // 0xA0
		::UnityEngine::SceneManagement::Scene _scene_k__BackingField; // 0xA4

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
