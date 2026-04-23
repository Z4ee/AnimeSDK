#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_NODESYNC_CREATENODESYNC_OFFSET UNITYSDK_OFFSET(0x8C95550)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_INITIALIZEFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x8C95230)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8C95190)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8C95180)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x8C958C0)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SAVENODETOFILE_OFFSET UNITYSDK_OFFSET(0x8C95390)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x8C952E0)
#define HOUDINIENGINEUNITY_HEU_NODESYNC_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x8C958F0)
#define HOUDINIENGINEUNITY_HEU_NODESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x8C95A80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_NodeSync_TypeDefinitionIndex = 43658;

	class HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::System::String* _nodeSaveFilePath; // 0x80

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

		::System::Void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::String* nodeName, ::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_INITIALIZEFROMHOUDINI_OFFSET))(this, session, nodeID, nodeName, filePath);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_SETUPLOADTASK_OFFSET))(this, session);
		}

		::System::Boolean SaveNodeToFile(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_SAVENODETOFILE_OFFSET))(this, filePath);
		}

		static ::System::Void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* opName, ::System::String* nodeNabel)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_NODESYNC_CREATENODESYNC_OFFSET))(session, opName, nodeNabel);
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
