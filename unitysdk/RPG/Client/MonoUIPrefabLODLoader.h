#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUIPrefabLODLoader_Quality.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOUIPREFABLODLOADER_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9D4CFC0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D4CE10)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D4D1A0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x9D4D300)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D4D360)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_METHOD_5_A9DDFC94DFEB77D3_OFFSET UNITYSDK_OFFSET(0x9D4CF60)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_METHOD_5_AD0657824BB11C7B_OFFSET UNITYSDK_OFFSET(0x9D4D240)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D4D0F0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D4D150)
#define RPG_CLIENT_MONOUIPREFABLODLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4D370)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPrefabLODLoader_TypeDefinitionIndex = 56342;

	class MonoUIPrefabLODLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* LowQualityPrefab; // 0x18
		::System::String* MedQualityPrefab; // 0x20
		::System::String* HiQualityPrefab; // 0x28
		::RPG::Client::UIPrefabLoader* Field_5_3; // 0x30
		::Il2CppArray<::System::String*>* Field_5_4; // 0x38
		::UnityEngine::GameObject* Field_5_5; // 0x40

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

		::System::Void AsyncLoad(::RPG::Client::MonoUIPrefabLODLoader_Quality a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoUIPrefabLODLoader_Quality, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_ASYNCLOAD_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_AD0657824BB11C7B(::RPG::Client::MonoUIPrefabLODLoader_Quality a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MonoUIPrefabLODLoader_Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_METHOD_5_AD0657824BB11C7B_OFFSET))(this, a1);
		}

		::RPG::Client::MonoUIPrefabLODLoader_Quality Method_5_A9DDFC94DFEB77D3(::RPG::CustomRP::Quality a1)
		{
			return ((::RPG::Client::MonoUIPrefabLODLoader_Quality(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_METHOD_5_A9DDFC94DFEB77D3_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_GET_ISLOADED_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_PrefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER_GET_PREFABINSTANCE_OFFSET))(this);
		}
	};
}
