#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityObjectPool_1.h"

namespace FluffyUnderware::DevTools { class PoolSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D69EC10)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GETITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D69F140)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D69E9C0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GET_PREFABS_OFFSET UNITYSDK_OFFSET(0x1D69E9E0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D69E1D0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D69EA00)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D69E9D0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_SET_PREFABS_OFFSET UNITYSDK_OFFSET(0x1D69E9F0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F150)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PrefabPool_TypeDefinitionIndex = 28392;

	class PrefabPool : public ::FluffyUnderware::DevTools::UnityObjectPool_1<::UnityEngine::GameObject*>
	{
	public:
		::System::String* m_Identifier; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_Prefabs; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL__CTOR_OFFSET))(this);
		}

		::System::String* get_Identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_Prefabs()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GET_PREFABS_OFFSET))(this);
		}

		::System::Void set_Prefabs(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_SET_PREFABS_OFFSET))(this, value);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Initialize(::System::String* identifier, ::FluffyUnderware::DevTools::PoolSettings* settings, ::Il2CppArray<::UnityEngine::GameObject*>* prefabs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FluffyUnderware::DevTools::PoolSettings*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_INITIALIZE_OFFSET))(this, identifier, settings, prefabs);
		}

		::UnityEngine::GameObject* CreateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_CREATEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetItemGameObject(::UnityEngine::GameObject* item)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL_GETITEMGAMEOBJECT_OFFSET))(this, item);
		}
	};
}
