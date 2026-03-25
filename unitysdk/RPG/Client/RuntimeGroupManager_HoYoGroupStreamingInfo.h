#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A6989C352B0F0F0;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA40C770)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA40C8A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0xA40C8C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_ONLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xA40C8E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_ONUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xA40C8F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_STREAMINGDATA_OFFSET UNITYSDK_OFFSET(0xA40C880)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA3FF680)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SETSTREAMINGDATA_OFFSET UNITYSDK_OFFSET(0xA3FF740)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA40C8B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0xA40C8D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_STREAMINGDATA_OFFSET UNITYSDK_OFFSET(0xA40C890)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA40C710)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__ONSTREAMINGUNLOADED_OFFSET UNITYSDK_OFFSET(0xA40C820)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__ONSTREAMLOADED_OFFSET UNITYSDK_OFFSET(0xA40C7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupStreamingInfo_TypeDefinitionIndex = 50401;

	class RuntimeGroupManager_HoYoGroupStreamingInfo : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_8A6989C352B0F0F0*>* _OnLoadCallback_k__BackingField; // 0x10
		::System::Action_1<::Class_1_8A6989C352B0F0F0*>* _OnUnloadCallback_k__BackingField; // 0x18
		::RPG::Client::RuntimeGroupManager* _Manager_k__BackingField; // 0x20
		::RPG::Client::OpenWorld::StreamingItemData* _StreamingData_k__BackingField; // 0x28
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::RuntimeGroupManager* manager, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_INIT_OFFSET))(this, manager, groupID);
		}

		::System::Void SetStreamingData(::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SETSTREAMINGDATA_OFFSET))(this, data);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_CLEAR_OFFSET))(this);
		}

		::System::Void _OnStreamLoaded(::Class_1_8A6989C352B0F0F0* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__ONSTREAMLOADED_OFFSET))(this, instance);
		}

		::System::Void _OnStreamingUnloaded(::Class_1_8A6989C352B0F0F0* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO__ONSTREAMINGUNLOADED_OFFSET))(this, instance);
		}

		::RPG::Client::OpenWorld::StreamingItemData* get_StreamingData()
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_STREAMINGDATA_OFFSET))(this);
		}

		::System::Void set_StreamingData(::RPG::Client::OpenWorld::StreamingItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_STREAMINGDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::Client::RuntimeGroupManager* get_Manager()
		{
			return ((::RPG::Client::RuntimeGroupManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_Manager(::RPG::Client::RuntimeGroupManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_SET_MANAGER_OFFSET))(this, value);
		}

		::System::Action_1<::Class_1_8A6989C352B0F0F0*>* get_OnLoadCallback()
		{
			return ((::System::Action_1<::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_ONLOADCALLBACK_OFFSET))(this);
		}

		::System::Action_1<::Class_1_8A6989C352B0F0F0*>* get_OnUnloadCallback()
		{
			return ((::System::Action_1<::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPSTREAMINGINFO_GET_ONUNLOADCALLBACK_OFFSET))(this);
		}
	};
}
