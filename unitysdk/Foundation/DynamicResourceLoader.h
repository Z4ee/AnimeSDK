#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetsUnloadType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_DYNAMICRESOURCELOADER_ADDRESPATHCOMMONPREFIX_OFFSET UNITYSDK_OFFSET(0x1D965FE0)
#define FOUNDATION_DYNAMICRESOURCELOADER_ADDSCENEPATHCOMMONPREFIX_OFFSET UNITYSDK_OFFSET(0x1D965AD0)
#define FOUNDATION_DYNAMICRESOURCELOADER_CONTAINSASSET_1_OFFSET UNITYSDK_OFFSET(0x1D966B30)
#define FOUNDATION_DYNAMICRESOURCELOADER_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x1D966A70)
#define FOUNDATION_DYNAMICRESOURCELOADER_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D9656C0)
#define FOUNDATION_DYNAMICRESOURCELOADER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1D965620)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADASSETASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D9664C0)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1D966320)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1D966630)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADINSTANCEASSET_1_OFFSET UNITYSDK_OFFSET(0x1D9667F0)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADINSTANCEASSET_OFFSET UNITYSDK_OFFSET(0x1D966740)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHESYNC_1_OFFSET UNITYSDK_OFFSET(0x1D966270)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHESYNC_OFFSET UNITYSDK_OFFSET(0x1D9661B0)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHE_1_OFFSET UNITYSDK_OFFSET(0x1D966100)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1D965F20)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADSCENEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D965B80)
#define FOUNDATION_DYNAMICRESOURCELOADER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1D965A00)
#define FOUNDATION_DYNAMICRESOURCELOADER_REMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1D9669F0)
#define FOUNDATION_DYNAMICRESOURCELOADER_SETSCENEPATHPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1D9658A0)
#define FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLAUTO_OFFSET UNITYSDK_OFFSET(0x1D966BD0)
#define FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLSCENESINADDITIVESCENE_OFFSET UNITYSDK_OFFSET(0x1D965EA0)
#define FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLSCENES_OFFSET UNITYSDK_OFFSET(0x1D965E20)
#define FOUNDATION_DYNAMICRESOURCELOADER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1D966EF0)
#define FOUNDATION_DYNAMICRESOURCELOADER_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1D965D20)
#define FOUNDATION_DYNAMICRESOURCELOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D966FE0)
#define FOUNDATION_DYNAMICRESOURCELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D966FD0)

namespace Foundation
{
	inline static constexpr unsigned int DynamicResourceLoader_TypeDefinitionIndex = 7939;

	class DynamicResourceLoader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_AutoHandles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(DynamicResourceLoader_TypeDefinitionIndex)->GetStaticField(0x6D70);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_HookAutoHandles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(DynamicResourceLoader_TypeDefinitionIndex)->GetStaticField(0x6D78);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_persistentSceneDict()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicResourceLoader_TypeDefinitionIndex)->GetStaticField(0x6D80);
		}
		// static const ::System::String* ScenePathPrefix; // 0x0
		// static const ::System::String* CommonPathPrefix; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER__CCTOR_OFFSET))();
		}

		static ::System::Void DestroyObject(::Foundation::AssetPath path, ::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_DESTROYOBJECT_OFFSET))(path, target);
		}

		static ::System::Void DestroyObject_1(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_DESTROYOBJECT_1_OFFSET))(target);
		}

		static ::System::Void SetScenePathPersistent(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_SETSCENEPATHPERSISTENT_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadSceneAsync(::System::String* path, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADSCENEASYNC_OFFSET))(path, mode);
		}

		static ::Foundation::AssetRequestHandle LoadSceneAsync_1(::System::String* path, ::System::Boolean additive)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADSCENEASYNC_1_OFFSET))(path, additive);
		}

		static ::System::Void UnloadScene(::Foundation::AssetRequestHandle scene, ::System::Boolean additive, ::System::Boolean force)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_UNLOADSCENE_OFFSET))(scene, additive, force);
		}

		static ::System::Void UnloadAllScenes(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLSCENES_OFFSET))(excludeList);
		}

		static ::System::Void UnloadAllScenesInAdditiveScene(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLSCENESINADDITIVESCENE_OFFSET))(excludeList);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCache(::System::String* path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHE_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCache_1(::Foundation::AssetPath assetPath)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHE_1_OFFSET))(assetPath);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheSync(::System::String* path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHESYNC_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheSync_1(::Foundation::AssetPath assetPath)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADOBJECTINSTANCECACHESYNC_1_OFFSET))(assetPath);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::System::String* path, ::System::Type* type, ::Foundation::AssetRequestCompleteDel* completed, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::System::Type*, ::Foundation::AssetRequestCompleteDel*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADASSETASYNC_OFFSET))(path, type, completed, unloadType);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync_1(::Foundation::AssetPath path, ::System::Type* type, ::Foundation::AssetRequestCompleteDel* completed, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequestCompleteDel*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADASSETASYNC_1_OFFSET))(path, type, completed, unloadType);
		}

		static ::UnityEngine::Object* LoadAsset(::Foundation::AssetPath assetPath, ::System::Type*& type, ::Foundation::AssetRequestHandle& requestHandle)
		{
			return ((::UnityEngine::Object*(*)(::Foundation::AssetPath, ::System::Type*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADASSET_OFFSET))(assetPath, type, requestHandle);
		}

		static ::UnityEngine::GameObject* LoadInstanceAsset(::System::String* path, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADINSTANCEASSET_OFFSET))(path, parent);
		}

		static ::UnityEngine::GameObject* LoadInstanceAsset_1(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_LOADINSTANCEASSET_1_OFFSET))(assetPath, parent);
		}

		static ::System::Void RemoveUnusedAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_REMOVEUNUSEDASSETS_OFFSET))();
		}

		static ::System::Boolean ContainsAsset(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_CONTAINSASSET_OFFSET))(path);
		}

		static ::System::Boolean ContainsAsset_1(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_CONTAINSASSET_1_OFFSET))(path);
		}

		static ::System::Void UnloadAllAuto()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_UNLOADALLAUTO_OFFSET))();
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle handle, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_UNLOADASSET_OFFSET))(handle, immediate);
		}

		static ::System::String* AddScenePathCommonPrefix(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_ADDSCENEPATHCOMMONPREFIX_OFFSET))(path);
		}

		static ::System::String* AddResPathCommonPrefix(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DYNAMICRESOURCELOADER_ADDRESPATHCOMMONPREFIX_OFFSET))(path);
		}
	};
}
