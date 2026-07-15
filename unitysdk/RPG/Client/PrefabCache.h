#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A0302E9AE0B8A2B9;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PREFABCACHE_GETPOOL_OFFSET UNITYSDK_OFFSET(0x1939CEA0)
#define RPG_CLIENT_PREFABCACHE_GET_MPREFAB_OFFSET UNITYSDK_OFFSET(0x1939CD10)
#define RPG_CLIENT_PREFABCACHE_METHOD_5_890C39EA0468D280_OFFSET UNITYSDK_OFFSET(0x1939CDA0)
#define RPG_CLIENT_PREFABCACHE_PREFABDESPAWNCHECK_OFFSET UNITYSDK_OFFSET(0x1939D250)
#define RPG_CLIENT_PREFABCACHE_SET_MPREFAB_OFFSET UNITYSDK_OFFSET(0x1939CD50)
#define RPG_CLIENT_PREFABCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1939D480)
#define RPG_CLIENT_PREFABCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1939D470)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefabCache_TypeDefinitionIndex = 69348;

	class PrefabCache : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_PrefabCacheEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrefabCache_TypeDefinitionIndex)->GetStaticField(0x14480);
		}
		static ::System::Boolean* StaticGet_PrefabCacheCheckEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrefabCache_TypeDefinitionIndex)->GetStaticField(0x14481);
		}
		// static const ::System::String* Field_5_2; // 0x0
		::System::String* mPrefabPath; // 0x18
		::UnityEngine::GameObject* Field_5_4; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_mPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_GET_MPREFAB_OFFSET))(this);
		}

		::System::Void set_mPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_SET_MPREFAB_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_890C39EA0468D280(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_METHOD_5_890C39EA0468D280_OFFSET))(this, a1, a2);
		}

		::Class_1_A0302E9AE0B8A2B9* GetPool(::System::String* a1)
		{
			return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_GETPOOL_OFFSET))(this, a1);
		}

		::System::Boolean PrefabDespawnCheck(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_PREFABDESPAWNCHECK_OFFSET))(this, a1, a2);
		}
	};
}
