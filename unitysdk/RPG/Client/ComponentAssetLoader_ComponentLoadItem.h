#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetType.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_ComponentLoadAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader_Class_1_A733C3439371489B; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET UNITYSDK_OFFSET(0xA0C0FB0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_183822470B7F369D_OFFSET UNITYSDK_OFFSET(0xA0BFA20)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_98B7D142FBED6D85_OFFSET UNITYSDK_OFFSET(0xA0C0690)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_FE6CC0AE50391631_OFFSET UNITYSDK_OFFSET(0xA0C0740)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C10B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadItem_TypeDefinitionIndex = 63060;

	class ComponentAssetLoader_ComponentLoadItem : public ::System::Object
	{
	public:
		::UnityEngine::Component* Component; // 0x10
		::RPG::Client::ComponentAssetLoader_AssetType Type; // 0x18
		::Il2CppArray<::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo>* AssetStates; // 0x20
		::Il2CppArray<::System::String*>* LoadedAssetPath; // 0x28
		::Il2CppArray<::UnityEngine::Object*>* LoadedAssets; // 0x30
		::Il2CppArray<::UnityEngine::Object*>* CachedInsts; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B* get_LoaderProxy()
		{
			return ((::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_1_183822470B7F369D(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_183822470B7F369D_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Method_1_FE6CC0AE50391631(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_FE6CC0AE50391631_OFFSET))(this, a1);
		}

		::System::Void Method_1_98B7D142FBED6D85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_98B7D142FBED6D85_OFFSET))(this);
		}
	};
}
