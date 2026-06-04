#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_94DD10B3DE84BC0B_OFFSET UNITYSDK_OFFSET(0xB700870)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_C8553AEB07BE1FEF_1_OFFSET UNITYSDK_OFFSET(0xB700AB0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0xB7009F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_D0172DBC391B172D_OFFSET UNITYSDK_OFFSET(0xB700A50)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5__CTOR_OFFSET UNITYSDK_OFFSET(0xB700850)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_613BC62C559E98B5_TypeDefinitionIndex = 63981;

	class ComponentAssetLoader_Class_2_613BC62C559E98B5 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_94DD10B3DE84BC0B(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_94DD10B3DE84BC0B_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_D0172DBC391B172D(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_D0172DBC391B172D_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF_1(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_613BC62C559E98B5_METHOD_2_C8553AEB07BE1FEF_1_OFFSET))(this, a1);
		}
	};
}
