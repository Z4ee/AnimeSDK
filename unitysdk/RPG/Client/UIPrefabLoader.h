#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIAsyncPrefabLoaderProxy; }
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIPREFABLOADER_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xA7283C0)
#define RPG_CLIENT_UIPREFABLOADER_ASYNCLOADVIEWPREFAB_OFFSET UNITYSDK_OFFSET(0xA727890)
#define RPG_CLIENT_UIPREFABLOADER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA726A40)
#define RPG_CLIENT_UIPREFABLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0xA726960)
#define RPG_CLIENT_UIPREFABLOADER_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA726BD0)
#define RPG_CLIENT_UIPREFABLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA726D90)
#define RPG_CLIENT_UIPREFABLOADER_ENABLECACHE_OFFSET UNITYSDK_OFFSET(0xA7269F0)
#define RPG_CLIENT_UIPREFABLOADER_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0xA728130)
#define RPG_CLIENT_UIPREFABLOADER_LOADPREFAB_OFFSET UNITYSDK_OFFSET(0xA7282F0)
#define RPG_CLIENT_UIPREFABLOADER_LOADVIEWPREFAB_OFFSET UNITYSDK_OFFSET(0xA727210)
#define RPG_CLIENT_UIPREFABLOADER_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xA727D80)
#define RPG_CLIENT_UIPREFABLOADER_SHOULDRELEASETOCACHE_OFFSET UNITYSDK_OFFSET(0xA727D00)
#define RPG_CLIENT_UIPREFABLOADER_TRYCANCELASYNCLOADOPERATION_OFFSET UNITYSDK_OFFSET(0xA7284A0)
#define RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFABIMPL_OFFSET UNITYSDK_OFFSET(0xA728BB0)
#define RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xA727C00)
#define RPG_CLIENT_UIPREFABLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xA728F50)
#define RPG_CLIENT_UIPREFABLOADER__HANDLELOADRESULT_OFFSET UNITYSDK_OFFSET(0xA7288F0)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFABFROMCACHE_OFFSET UNITYSDK_OFFSET(0xA728AA0)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFABIMPL_OFFSET UNITYSDK_OFFSET(0xA7285F0)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFAB_OFFSET UNITYSDK_OFFSET(0xA7275E0)
#define RPG_CLIENT_UIPREFABLOADER__PUSH2AUTORELEASEOBEJCTS_OFFSET UNITYSDK_OFFSET(0xA728280)
#define RPG_CLIENT_UIPREFABLOADER__PUSH2RETURNCACHEOBJECTS_OFFSET UNITYSDK_OFFSET(0xA728EE0)
#define RPG_CLIENT_UIPREFABLOADER__RECYCLECOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA727F20)
#define RPG_CLIENT_UIPREFABLOADER__REUSECOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA727680)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader_TypeDefinitionIndex = 59902;

	class UIPrefabLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _AutoReleaseObejcts; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::Object*>* _InstantiatedToAssetMap; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* _AssetOperations; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _FromCacheObjects; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* _AsyncInsRequests; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* _PathToAssetOperations; // 0x38
		::System::Boolean _EnableFromCache; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIPrefabLoader* Create()
		{
			return ((::RPG::Client::UIPrefabLoader*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_CLEAR_OFFSET))(this);
		}

		::System::Void EnableCache(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ENABLECACHE_OFFSET))(this, enable);
		}

		::System::Void DestroyGameObject(::UnityEngine::GameObject* gameObject, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_DESTROYGAMEOBJECT_OFFSET))(this, gameObject, immediate);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadViewPrefab(::System::String* path, ::RPG::Client::ViewCacheType cacheType, ::RPG::Client::UILayer layer)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADVIEWPREFAB_OFFSET))(this, path, cacheType, layer);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadViewPrefab(::System::String* path, ::RPG::Client::ViewCacheType cacheType, ::RPG::Client::UILayer layer, ::System::Action_1<::UnityEngine::GameObject*>* callback)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ASYNCLOADVIEWPREFAB_OFFSET))(this, path, cacheType, layer, callback);
		}

		::System::Boolean ShouldReleaseToCache(::UnityEngine::GameObject* view, ::RPG::Client::ViewCacheType cacheType, ::RPG::Client::UILayer layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_SHOULDRELEASETOCACHE_OFFSET))(this, view, cacheType, layer);
		}

		::System::Void ReleaseView(::UnityEngine::GameObject* view, ::RPG::Client::ViewCacheType cacheType, ::RPG::Client::UILayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_RELEASEVIEW_OFFSET))(this, view, cacheType, layer);
		}

		::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::GameObject* original, ::UnityEngine::Transform* parent, ::System::Boolean worldPositionStays, ::System::Boolean autoRelease)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_INSTANTIATEPREFAB_OFFSET))(this, original, parent, worldPositionStays, autoRelease);
		}

		::UnityEngine::GameObject* LoadPrefab(::System::String* path, ::UnityEngine::Transform* parent, ::System::Boolean autoRelease)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADPREFAB_OFFSET))(this, path, parent, autoRelease);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadPrefab(::System::String* path, ::System::Action_1<::UnityEngine::GameObject*>* callback, ::UnityEngine::Transform* parent, ::System::Boolean autoRelease)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ASYNCLOADPREFAB_OFFSET))(this, path, callback, parent, autoRelease);
		}

		::System::Boolean TryCancelAsyncLoadOperation(::RPG::Client::IAssetOperation* operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_TRYCANCELASYNCLOADOPERATION_OFFSET))(this, operation);
		}

		::RPG::Client::UIPrefabLoader_LoadResult* _LoadPrefab(::System::String* path, ::UnityEngine::Transform* parent, ::System::Boolean autoRelease, ::System::Boolean autoReturnCache, ::System::Boolean active)
		{
			return ((::RPG::Client::UIPrefabLoader_LoadResult*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFAB_OFFSET))(this, path, parent, autoRelease, autoReturnCache, active);
		}

		::RPG::Client::UIPrefabLoader_LoadResult* _LoadPrefabImpl(::System::String* path, ::UnityEngine::Transform* parent, ::System::Boolean active)
		{
			return ((::RPG::Client::UIPrefabLoader_LoadResult*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFABIMPL_OFFSET))(this, path, parent, active);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* _AsyncLoadPrefab(::System::String* path, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* callback, ::UnityEngine::Transform* parent, ::System::Boolean autoRelease, ::System::Boolean autoReturnCache, ::System::Boolean active)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFAB_OFFSET))(this, path, callback, parent, autoRelease, autoReturnCache, active);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* _AsyncLoadPrefabImpl(::System::String* path, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* callback, ::UnityEngine::Transform* parent, ::System::Boolean active)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFABIMPL_OFFSET))(this, path, callback, parent, active);
		}

		::UnityEngine::GameObject* _LoadPrefabFromCache(::System::String* path, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFABFROMCACHE_OFFSET))(this, path, parent);
		}

		::System::Void _RecycleComponents(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__RECYCLECOMPONENTS_OFFSET))(this, gameObject);
		}

		::System::Void _ReuseComponents(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__REUSECOMPONENTS_OFFSET))(this, gameObject);
		}

		::System::Void _HandleLoadResult(::RPG::Client::UIPrefabLoader_LoadResult* loadResult, ::System::Boolean autoRelease, ::System::Boolean autoReturnCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__HANDLELOADRESULT_OFFSET))(this, loadResult, autoRelease, autoReturnCache);
		}

		::System::Void _Push2AutoReleaseObejcts(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__PUSH2AUTORELEASEOBEJCTS_OFFSET))(this, gameObject);
		}

		::System::Void _Push2ReturnCacheObjects(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__PUSH2RETURNCACHEOBJECTS_OFFSET))(this, gameObject);
		}
	};
}
