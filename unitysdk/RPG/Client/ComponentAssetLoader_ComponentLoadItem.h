#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetType.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_ComponentLoadAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::Client { class ComponentAssetLoader_Class_1_A733C3439371489B; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET UNITYSDK_OFFSET(0xB6FFC70)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_6F856DFDDA0B1107_OFFSET UNITYSDK_OFFSET(0xB6FE400)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_759AE46ABF74C9EA_OFFSET UNITYSDK_OFFSET(0xB6FFD60)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_98B7D142FBED6D85_OFFSET UNITYSDK_OFFSET(0xB6FEA00)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_FE6CC0AE50391631_OFFSET UNITYSDK_OFFSET(0xB6FF4D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB700000)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadItem_TypeDefinitionIndex = 63975;

	class ComponentAssetLoader_ComponentLoadItem : public ::System::Object
	{
	public:
		::UnityEngine::Component* Component; // 0x10
		::RPG::Client::ComponentAssetLoader_AssetType Type; // 0x18
		::Il2CppArray<::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo>* AssetStates; // 0x20
		::Il2CppArray<::System::String*>* LoadedAssetPath; // 0x28
		::Il2CppArray<::UnityEngine::Object*>* LoadedAssets; // 0x30
		::Il2CppArray<::UnityEngine::Object*>* CachedInsts; // 0x38
		::Il2CppArray<::System::String*>* _TempSkinMappedParamArray; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B* get_LoaderProxy()
		{
			return ((::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_1_6F856DFDDA0B1107(::RPG::Client::ComponentAssetLoader* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_6F856DFDDA0B1107_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* Method_1_759AE46ABF74C9EA(::RPG::Client::ComponentAssetLoader* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_METHOD_1_759AE46ABF74C9EA_OFFSET))(this, a1, a2);
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
