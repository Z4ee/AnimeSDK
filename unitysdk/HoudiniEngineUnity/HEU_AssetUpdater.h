#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_BaseSync; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ADDASSETFORUPDATE_OFFSET UNITYSDK_OFFSET(0x8C31EB0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ADDNODESYNCFORUPDATE_OFFSET UNITYSDK_OFFSET(0x8C31ED0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ONBEFOREASSEMBLYRELOAD_OFFSET UNITYSDK_OFFSET(0x8C31E40)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ONPREFABINSTANCEUPDATE_OFFSET UNITYSDK_OFFSET(0x8C31EF0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_REMOVEASSET_OFFSET UNITYSDK_OFFSET(0x8C31EC0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_REMOVENODESYNC_OFFSET UNITYSDK_OFFSET(0x8C31EE0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8C31EA0)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C31E30)
#define HOUDINIENGINEUNITY_HEU_ASSETUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C31F00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetUpdater_TypeDefinitionIndex = 43489;

	class HEU_AssetUpdater : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER__CTOR_OFFSET))(this);
		}

		static ::System::Void OnBeforeAssemblyReload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ONBEFOREASSEMBLYRELOAD_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_UPDATE_OFFSET))();
		}

		static ::System::Void AddAssetForUpdate(::HoudiniEngineUnity::HEU_HoudiniAsset* asset)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ADDASSETFORUPDATE_OFFSET))(asset);
		}

		static ::System::Void RemoveAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* asset)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_REMOVEASSET_OFFSET))(asset);
		}

		static ::System::Void AddNodeSyncForUpdate(::HoudiniEngineUnity::HEU_BaseSync* nodeSync)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_BaseSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ADDNODESYNCFORUPDATE_OFFSET))(nodeSync);
		}

		static ::System::Void RemoveNodeSync(::HoudiniEngineUnity::HEU_BaseSync* nodeSync)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_BaseSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_REMOVENODESYNC_OFFSET))(nodeSync);
		}

		static ::System::Void OnPrefabInstanceUpdate(::UnityEngine::GameObject* instance)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETUPDATER_ONPREFABINSTANCEUPDATE_OFFSET))(instance);
		}
	};
}
