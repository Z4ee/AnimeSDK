#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_AssetSync_AssetSyncCallback; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_CREATETHREADEDTASK_OFFSET UNITYSDK_OFFSET(0x1B3C4CC0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_INITIALIZEASSET_OFFSET UNITYSDK_OFFSET(0x1B3C4BA0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B3C49B0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3C49A0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3C4E60)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x1B3C5100)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3C4D20)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x1B3C4DA0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5570)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSync_TypeDefinitionIndex = 39295;

	class HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* _onAssetLoaded; // 0x88
		::System::String* _assetPath; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Transform* a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_INITIALIZEASSET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask()
		{
			return ((::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_CREATETHREADEDTASK_OFFSET))(this);
		}

		::System::Void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETUPLOADTASK_OFFSET))(this, a1);
		}

		::System::Void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONLOADCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void Resync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_RESYNC_OFFSET))(this);
		}
	};
}
