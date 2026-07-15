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

#define RPG_CLIENT_UIPREFABLOADER_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0x18305D30)
#define RPG_CLIENT_UIPREFABLOADER_ASYNCLOADVIEWPREFAB_OFFSET UNITYSDK_OFFSET(0x183050A0)
#define RPG_CLIENT_UIPREFABLOADER_CLEAR_OFFSET UNITYSDK_OFFSET(0x183041F0)
#define RPG_CLIENT_UIPREFABLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x18304110)
#define RPG_CLIENT_UIPREFABLOADER_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18304350)
#define RPG_CLIENT_UIPREFABLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18304580)
#define RPG_CLIENT_UIPREFABLOADER_ENABLECACHE_OFFSET UNITYSDK_OFFSET(0x183041A0)
#define RPG_CLIENT_UIPREFABLOADER_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0x18305A00)
#define RPG_CLIENT_UIPREFABLOADER_LOADPREFAB_OFFSET UNITYSDK_OFFSET(0x18305C60)
#define RPG_CLIENT_UIPREFABLOADER_LOADVIEWPREFAB_OFFSET UNITYSDK_OFFSET(0x183049B0)
#define RPG_CLIENT_UIPREFABLOADER_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x183055D0)
#define RPG_CLIENT_UIPREFABLOADER_SHOULDRELEASETOCACHE_OFFSET UNITYSDK_OFFSET(0x18305550)
#define RPG_CLIENT_UIPREFABLOADER_TRYCANCELASYNCLOADOPERATION_OFFSET UNITYSDK_OFFSET(0x18305E30)
#define RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFABIMPL_OFFSET UNITYSDK_OFFSET(0x18306660)
#define RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0x18305440)
#define RPG_CLIENT_UIPREFABLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18306A70)
#define RPG_CLIENT_UIPREFABLOADER__HANDLELOADRESULT_OFFSET UNITYSDK_OFFSET(0x183062D0)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFABFROMCACHE_OFFSET UNITYSDK_OFFSET(0x18306550)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFABIMPL_OFFSET UNITYSDK_OFFSET(0x18305FE0)
#define RPG_CLIENT_UIPREFABLOADER__LOADPREFAB_OFFSET UNITYSDK_OFFSET(0x18304D70)
#define RPG_CLIENT_UIPREFABLOADER__PUSH2AUTORELEASEOBEJCTS_OFFSET UNITYSDK_OFFSET(0x18305BB0)
#define RPG_CLIENT_UIPREFABLOADER__PUSH2RETURNCACHEOBJECTS_OFFSET UNITYSDK_OFFSET(0x183069C0)
#define RPG_CLIENT_UIPREFABLOADER__RECYCLECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x18305770)
#define RPG_CLIENT_UIPREFABLOADER__REUSECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x18304E10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader_TypeDefinitionIndex = 69741;

	class UIPrefabLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* _AsyncInsRequests; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _AutoReleaseObejcts; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* _AssetOperations; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* _PathToAssetOperations; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::Object*>* _InstantiatedToAssetMap; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _FromCacheObjects; // 0x38
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

		::System::Void EnableCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ENABLECACHE_OFFSET))(this, a1);
		}

		::System::Void DestroyGameObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_DESTROYGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadViewPrefab(::System::String* a1, ::RPG::Client::ViewCacheType a2, ::RPG::Client::UILayer a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADVIEWPREFAB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadViewPrefab(::System::String* a1, ::RPG::Client::ViewCacheType a2, ::RPG::Client::UILayer a3, ::System::Action_1<::UnityEngine::GameObject*>* a4)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ASYNCLOADVIEWPREFAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ShouldReleaseToCache(::UnityEngine::GameObject* a1, ::RPG::Client::ViewCacheType a2, ::RPG::Client::UILayer a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_SHOULDRELEASETOCACHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseView(::UnityEngine::GameObject* a1, ::RPG::Client::ViewCacheType a2, ::RPG::Client::UILayer a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::ViewCacheType, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_RELEASEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_INSTANTIATEPREFAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* LoadPrefab(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADPREFAB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadPrefab(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_ASYNCLOADPREFAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryCancelAsyncLoadOperation(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_TRYCANCELASYNCLOADOPERATION_OFFSET))(this, a1);
		}

		::RPG::Client::UIPrefabLoader_LoadResult* _LoadPrefab(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::UIPrefabLoader_LoadResult*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFAB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::UIPrefabLoader_LoadResult* _LoadPrefabImpl(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::UIPrefabLoader_LoadResult*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFABIMPL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* _AsyncLoadPrefab(::System::String* a1, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFAB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* _AsyncLoadPrefabImpl(::System::String* a1, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__ASYNCLOADPREFABIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* _LoadPrefabFromCache(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__LOADPREFABFROMCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void _RecycleComponents(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__RECYCLECOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void _ReuseComponents(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__REUSECOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void _HandleLoadResult(::RPG::Client::UIPrefabLoader_LoadResult* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__HANDLELOADRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Push2AutoReleaseObejcts(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__PUSH2AUTORELEASEOBEJCTS_OFFSET))(this, a1);
		}

		::System::Void _Push2ReturnCacheObjects(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER__PUSH2RETURNCACHEOBJECTS_OFFSET))(this, a1);
		}
	};
}
