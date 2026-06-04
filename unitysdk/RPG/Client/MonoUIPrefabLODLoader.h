#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUIPrefabLODLoader_Quality.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOUIPREFABLODLOADER_ADD_ONLOADED_OFFSET UNITYSDK_OFFSET(0xC15EE10)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0xC15EAA0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC15E930)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC15EC70)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xC15EDA0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0xC15EE00)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC15EBC0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_REMOVE_ONLOADED_OFFSET UNITYSDK_OFFSET(0xC15EE70)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC15EC20)
#define RPG_CLIENT_MONOUIPREFABLODLOADER__ASYNCLOAD_B__5_0_OFFSET UNITYSDK_OFFSET(0xC15EEE0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xC15EED0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC15ED00)
#define RPG_CLIENT_MONOUIPREFABLODLOADER__GETQUALITYBYGRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xC15EA40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPrefabLODLoader_TypeDefinitionIndex = 64506;

	class MonoUIPrefabLODLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* LowQualityPrefab; // 0x18
		::System::String* MedQualityPrefab; // 0x20
		::System::String* HiQualityPrefab; // 0x28
		::System::Action* OnLoaded; // 0x30
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x38
		::Il2CppArray<::System::String*>* _PrefabPaths; // 0x40
		::UnityEngine::GameObject* _PrefabInstance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_DESPAWNED_OFFSET))(this);
		}

		::System::Void AsyncLoad(::RPG::Client::MonoUIPrefabLODLoader_Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoUIPrefabLODLoader_Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_ASYNCLOAD_OFFSET))(this, a1);
		}

		::System::String* _GetPrefabPath(::RPG::Client::MonoUIPrefabLODLoader_Quality a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MonoUIPrefabLODLoader_Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER__GETPREFABPATH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoUIPrefabLODLoader_Quality _GetQualityByGraphicsQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::RPG::Client::MonoUIPrefabLODLoader_Quality(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER__GETQUALITYBYGRAPHICSQUALITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_GET_ISLOADED_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_PrefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_GET_PREFABINSTANCE_OFFSET))(this);
		}

		::System::Void add_OnLoaded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_ADD_ONLOADED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLoaded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_REMOVE_ONLOADED_OFFSET))(this, a1);
		}

		::System::Void _AsyncLoad_b__5_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER__ASYNCLOAD_B__5_0_OFFSET))(this, a1);
		}
	};
}
