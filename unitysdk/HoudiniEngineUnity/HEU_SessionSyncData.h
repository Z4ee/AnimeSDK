#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionSyncInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Viewport.h"
#include "unitysdk/HoudiniEngineUnity/HEU_SessionSyncData_Status.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA_GET_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x1B481130)
#define HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA_SET_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x1B481140)
#define HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B47B6E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionSyncData_TypeDefinitionIndex = 39293;

	class HEU_SessionSyncData : public ::System::Object
	{
	public:
		::System::Int32 _status; // 0x10
		::System::Single _timeLastUpdate; // 0x14
		::System::Single _timeStartConnection; // 0x18
		::System::String* _newNodeName; // 0x20
		::System::Int32 _nodeTypeIndex; // 0x28
		::System::Boolean _validForConnection; // 0x2C
		::HoudiniEngineUnity::HAPI_Viewport _viewportHAPI; // 0x30
		::HoudiniEngineUnity::HAPI_Viewport _viewportLocal; // 0x48
		::System::Boolean _viewportJustUpdated; // 0x60
		::HoudiniEngineUnity::HAPI_SessionSyncInfo _syncInfo; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionSyncData_Status get_SyncStatus()
		{
			return ((::HoudiniEngineUnity::HEU_SessionSyncData_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA_GET_SYNCSTATUS_OFFSET))(this);
		}

		::System::Void set_SyncStatus(::HoudiniEngineUnity::HEU_SessionSyncData_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionSyncData_Status))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONSYNCDATA_SET_SYNCSTATUS_OFFSET))(this, a1);
		}
	};
}
