#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_NODESYNC_CREATENODESYNC_OFFSET UNITYSDK_OFFSET(0x11A6CD70)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_INITIALIZEFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x11A6CA90)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A6CA80)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A6CA70)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x11A6D440)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SAVENODETOFILE_OFFSET UNITYSDK_OFFSET(0x11A6CC00)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x11A6CB40)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x11A6D470)
#define HOUDINIENGINEUNITY_HEU_NODESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6D610)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_NodeSync_TypeDefinitionIndex = 39301;

	class HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::System::String* _nodeSaveFilePath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_INITIALIZEFROMHOUDINI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_SETUPLOADTASK_OFFSET))(this, a1);
		}

		::System::Boolean SaveNodeToFile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_SAVENODETOFILE_OFFSET))(this, a1);
		}

		static ::System::Void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_CREATENODESYNC_OFFSET))(a1, a2, a3);
		}

		::System::Void Resync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_RESYNC_OFFSET))(this);
		}

		::System::Void SyncUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_SYNCUPDATE_OFFSET))(this);
		}
	};
}
