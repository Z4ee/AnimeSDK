#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_6C1C230863C1C3C9_OFFSET UNITYSDK_OFFSET(0x1A288F50)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_9A95C834122D4426_OFFSET UNITYSDK_OFFSET(0x1A288D00)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A289060)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A289070)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_36619D49D09166C9_TypeDefinitionIndex = 68362;

	class ComponentAssetLoader_Class_2_36619D49D09166C9 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_9A95C834122D4426(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_9A95C834122D4426_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_6C1C230863C1C3C9(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_6C1C230863C1C3C9_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_36619D49D09166C9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
