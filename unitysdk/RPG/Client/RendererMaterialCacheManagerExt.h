#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x1739E830)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYRENDERERCACHE_OFFSET UNITYSDK_OFFSET(0x1739E760)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1739EBA0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1739EA80)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALSREADONLY_OFFSET UNITYSDK_OFFSET(0x1739E950)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1739E890)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0x1739EA00)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x1739E7C0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETRENDERERCACHE_OFFSET UNITYSDK_OFFSET(0x1739E6F0)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1739ED50)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ISEMPTYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1739D600)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_REMOVEKEYWORDCACHE_OFFSET UNITYSDK_OFFSET(0x1739EB30)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_RETURNSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1739EE90)
#define RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0x1739EC50)

namespace RPG::Client
{
	inline static constexpr unsigned int RendererMaterialCacheManagerExt_TypeDefinitionIndex = 66699;

	class RendererMaterialCacheManagerExt : public ::System::Object
	{
	public:
		static ::Class_1_1342B57709FD7AC5* GetRendererCache(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::Class_1_1342B57709FD7AC5*(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETRENDERERCACHE_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyRendererCache(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYRENDERERCACHE_OFFSET))(a1);
		}

		static ::RPG::Client::RendererMaterialCache* GetMaterialCache(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::RendererMaterialCache*(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETMATERIALCACHE_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyMaterialCache(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DESTROYMATERIALCACHE_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedMaterials(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedMaterialsReadonly(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDMATERIALSREADONLY_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetCachedOriginMaterials(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETCACHEDORIGINMATERIALS_OFFSET))(a1);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ENABLEKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveKeywordCache(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_REMOVEKEYWORDCACHE_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_DISABLEKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMatKeyword(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_SETMATKEYWORD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterials(::UnityEngine::Renderer* a1, ::System::Int32& a2)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::Renderer*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_GETSHAREDMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Void ReturnSharedMaterials(::UnityEngine::Renderer* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_RETURNSHAREDMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsEmptyDefault(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHEMANAGEREXT_ISEMPTYDEFAULT_OFFSET))(a1);
		}
	};
}
