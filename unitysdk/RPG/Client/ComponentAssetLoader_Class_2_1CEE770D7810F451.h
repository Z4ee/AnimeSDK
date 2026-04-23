#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_56A077B5B7EF6817_OFFSET UNITYSDK_OFFSET(0xA0C1560)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_6FC73B3608125498_OFFSET UNITYSDK_OFFSET(0xA0C1500)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_C6356C0715A52E55_OFFSET UNITYSDK_OFFSET(0xA0C11D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_FE9456DE83579470_OFFSET UNITYSDK_OFFSET(0xA0C13E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C14F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_1CEE770D7810F451_TypeDefinitionIndex = 63064;

	class ComponentAssetLoader_Class_2_1CEE770D7810F451 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_C6356C0715A52E55(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_C6356C0715A52E55_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_FE9456DE83579470(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_FE9456DE83579470_OFFSET))(this, a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_6FC73B3608125498(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0, ::Il2CppArray<::System::String*>* P1, ::System::Boolean P2)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_6FC73B3608125498_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Component* Method_2_56A077B5B7EF6817(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_METHOD_2_56A077B5B7EF6817_OFFSET))(this, P0);
		}
	};
}
