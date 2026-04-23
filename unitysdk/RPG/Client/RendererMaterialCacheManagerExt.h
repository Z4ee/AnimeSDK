#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0xAFD5390)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYRENDERERCACHE_OFFSET UNITYSDK_OFFSET(0xAFD52C0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xAFD5700)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xAFD55E0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALSREADONLY_OFFSET UNITYSDK_OFFSET(0xAFD54B0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALS_OFFSET UNITYSDK_OFFSET(0xAFD53F0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xAFD5560)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0xAFD5320)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETRENDERERCACHE_OFFSET UNITYSDK_OFFSET(0xAFD5250)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xAFD58B0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ISEMPTYDEFAULT_OFFSET UNITYSDK_OFFSET(0xAFD4170)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_REMOVEKEYWORDCACHE_OFFSET UNITYSDK_OFFSET(0xAFD5690)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_RETURNSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xAFD5980)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0xAFD57B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RendererMaterialCacheManagerExt_TypeDefinitionIndex = 64368;

	class RendererMaterialCacheManagerExt : public ::System::Object
	{
	public:
		static ::Class_1_9CBC71DC5240DC00* GetRendererCache(::UnityEngine::GameObject* go, ::System::Boolean autoCreate)
		{
			return ((::Class_1_9CBC71DC5240DC00*(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETRENDERERCACHE_OFFSET))(go, autoCreate);
		}

		static ::System::Void DestroyRendererCache(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYRENDERERCACHE_OFFSET))(go);
		}

		static ::RPG::Client::RendererMaterialCache* GetMaterialCache(::UnityEngine::Renderer* renderer, ::System::Boolean autoCreate)
		{
			return ((::RPG::Client::RendererMaterialCache*(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETMATERIALCACHE_OFFSET))(renderer, autoCreate);
		}

		static ::System::Void DestroyMaterialCache(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYMATERIALCACHE_OFFSET))(renderer);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedMaterials(::UnityEngine::Renderer* renderer)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALS_OFFSET))(renderer);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedMaterialsReadonly(::UnityEngine::Renderer* renderer)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALSREADONLY_OFFSET))(renderer);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedOriginMaterials(::UnityEngine::Renderer* renderer)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDORIGINMATERIALS_OFFSET))(renderer);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Material* material, ::System::String* keyword, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ENABLEKEYWORD_OFFSET))(material, keyword, propertyName);
		}

		static ::System::Void RemoveKeywordCache(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_REMOVEKEYWORDCACHE_OFFSET))(material);
		}

		static ::System::Void DisableKeyword(::UnityEngine::Material* material, ::System::String* keyword, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DISABLEKEYWORD_OFFSET))(material, keyword, propertyName);
		}

		static ::System::Void SetMatKeyword(::UnityEngine::Renderer* renderer, ::System::String* keyword, ::System::String* propertyName, ::System::Boolean enable, ::System::Int32 index, ::System::Boolean clear)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_SETMATKEYWORD_OFFSET))(renderer, keyword, propertyName, enable, index, clear);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterials(::UnityEngine::Renderer* renderer, ::System::Int32& length)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETSHAREDMATERIALS_OFFSET))(renderer, length);
		}

		static ::System::Void ReturnSharedMaterials(::UnityEngine::Renderer* renderer, ::Il2CppArray<::UnityEngine::Material*>* sharedMaterials)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_RETURNSHAREDMATERIALS_OFFSET))(renderer, sharedMaterials);
		}

		static ::System::Boolean IsEmptyDefault(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ISEMPTYDEFAULT_OFFSET))(mat);
		}
	};
}
