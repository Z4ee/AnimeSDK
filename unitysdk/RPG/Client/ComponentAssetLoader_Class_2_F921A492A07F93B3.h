#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_7FBE3C6CF1DBC5FA_OFFSET UNITYSDK_OFFSET(0xB6FE8B0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_8A4F20EA599A8ACE_OFFSET UNITYSDK_OFFSET(0xB6FEAB0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0xB6FED60)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_D0172DBC391B172D_OFFSET UNITYSDK_OFFSET(0xB6FECA0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB6FEC70)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FEC80)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_F921A492A07F93B3_TypeDefinitionIndex = 63983;

	class ComponentAssetLoader_Class_2_F921A492A07F93B3 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_7FBE3C6CF1DBC5FA(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_7FBE3C6CF1DBC5FA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_8A4F20EA599A8ACE(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_8A4F20EA599A8ACE_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_D0172DBC391B172D(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_D0172DBC391B172D_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F921A492A07F93B3_METHOD_2_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}
	};
}
