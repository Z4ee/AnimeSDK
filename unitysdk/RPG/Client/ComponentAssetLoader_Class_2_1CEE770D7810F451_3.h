#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_56A077B5B7EF6817_OFFSET UNITYSDK_OFFSET(0x94146B0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_6FC73B3608125498_OFFSET UNITYSDK_OFFSET(0x9414650)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_7FDFCAEC99648D37_OFFSET UNITYSDK_OFFSET(0x9414490)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_D785ACC2D3E7E343_OFFSET UNITYSDK_OFFSET(0x9414330)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3__CTOR_OFFSET UNITYSDK_OFFSET(0x94132B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_1CEE770D7810F451_3_TypeDefinitionIndex = 55834;

	class ComponentAssetLoader_Class_2_1CEE770D7810F451_3 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_D785ACC2D3E7E343(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_D785ACC2D3E7E343_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_7FDFCAEC99648D37(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_7FDFCAEC99648D37_OFFSET))(this, a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_6FC73B3608125498(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0, ::Il2CppArray<::System::String*>* P1, ::System::Boolean P2)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_6FC73B3608125498_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Component* Method_2_56A077B5B7EF6817(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_3_METHOD_2_56A077B5B7EF6817_OFFSET))(this, P0);
		}
	};
}
