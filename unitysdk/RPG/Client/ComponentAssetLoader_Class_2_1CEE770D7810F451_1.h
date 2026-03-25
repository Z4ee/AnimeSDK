#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_3A7FCA46E34F062D_OFFSET UNITYSDK_OFFSET(0x94125F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_56A077B5B7EF6817_OFFSET UNITYSDK_OFFSET(0x9412780)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_6FC73B3608125498_OFFSET UNITYSDK_OFFSET(0x94126C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0x9412480)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_CE53233FFDBC834B_OFFSET UNITYSDK_OFFSET(0x9412530)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_E97DD0112E31A642_OFFSET UNITYSDK_OFFSET(0x9412280)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1__CTOR_OFFSET UNITYSDK_OFFSET(0x94126A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_1CEE770D7810F451_1_TypeDefinitionIndex = 55831;

	class ComponentAssetLoader_Class_2_1CEE770D7810F451_1 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_E97DD0112E31A642(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_E97DD0112E31A642_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_CE53233FFDBC834B(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_CE53233FFDBC834B_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_3A7FCA46E34F062D(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_3A7FCA46E34F062D_OFFSET))(a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_6FC73B3608125498(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0, ::Il2CppArray<::System::String*>* P1, ::System::Boolean P2)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_6FC73B3608125498_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Component* Method_2_56A077B5B7EF6817(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_1CEE770D7810F451_1_METHOD_2_56A077B5B7EF6817_OFFSET))(this, P0);
		}
	};
}
