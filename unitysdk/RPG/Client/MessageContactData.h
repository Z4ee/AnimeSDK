#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageGroupData; }
namespace RPG::GameCore { class MessageContactRow; }
namespace RPG::GameCore { class MessageContactsConditionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTACTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA8886B0)
#define RPG_CLIENT_MESSAGECONTACTDATA_DELETEGROUP_OFFSET UNITYSDK_OFFSET(0xA888B10)
#define RPG_CLIENT_MESSAGECONTACTDATA_GETSHOWNCONTACTROW_OFFSET UNITYSDK_OFFSET(0xA888580)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_CURRENTGROUPIDS_OFFSET UNITYSDK_OFFSET(0xA888BC0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_HASBEENUPDATED_OFFSET UNITYSDK_OFFSET(0xA888CE0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_HASWAITINGGROUP_OFFSET UNITYSDK_OFFSET(0xA888C60)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA888D00)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xA888C00)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_LASTGROUPTIME_OFFSET UNITYSDK_OFFSET(0xA888CC0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_SHOWNROW_OFFSET UNITYSDK_OFFSET(0xA888D20)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_WAITINGGROUPIDS_OFFSET UNITYSDK_OFFSET(0xA888BE0)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_CURRENTGROUPIDS_OFFSET UNITYSDK_OFFSET(0xA888BD0)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_HASBEENUPDATED_OFFSET UNITYSDK_OFFSET(0xA888CF0)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_LASTGROUPTIME_OFFSET UNITYSDK_OFFSET(0xA888CD0)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_WAITINGGROUPIDS_OFFSET UNITYSDK_OFFSET(0xA888BF0)
#define RPG_CLIENT_MESSAGECONTACTDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xA888930)
#define RPG_CLIENT_MESSAGECONTACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA888890)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContactData_TypeDefinitionIndex = 60836;

	class MessageContactData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitingGroupIDs_k__BackingField; // 0x10
		::RPG::GameCore::MessageContactRow* _TrueRow; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentGroupIDs_k__BackingField; // 0x20
		::RPG::GameCore::MessageContactRow* _FakeRow; // 0x28
		::RPG::GameCore::MessageContactsConditionRow* _ConditionRow; // 0x30
		::System::Boolean _HasBeenUpdated_k__BackingField; // 0x38
		::System::Int64 _LastGroupTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::MessageContactRow* GetShownContactRow(::System::UInt32 contactID)
		{
			return ((::RPG::GameCore::MessageContactRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GETSHOWNCONTACTROW_OFFSET))(contactID);
		}

		static ::RPG::Client::MessageContactData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MessageContactData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_CREATE_OFFSET))(id);
		}

		::System::Void Update(::RPG::Client::MessageGroupData* groupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_UPDATE_OFFSET))(this, groupData);
		}

		::System::Void DeleteGroup(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_DELETEGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurrentGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_CURRENTGROUPIDS_OFFSET))(this);
		}

		::System::Void set_CurrentGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_CURRENTGROUPIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_WaitingGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_WAITINGGROUPIDS_OFFSET))(this);
		}

		::System::Void set_WaitingGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_WAITINGGROUPIDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_HasWaitingGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_HASWAITINGGROUP_OFFSET))(this);
		}

		::System::Int64 get_LastGroupTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_LASTGROUPTIME_OFFSET))(this);
		}

		::System::Void set_LastGroupTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_LASTGROUPTIME_OFFSET))(this, value);
		}

		::System::Boolean get_HasBeenUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_HASBEENUPDATED_OFFSET))(this);
		}

		::System::Void set_HasBeenUpdated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_HASBEENUPDATED_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::MessageContactRow* get_ShownRow()
		{
			return ((::RPG::GameCore::MessageContactRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_SHOWNROW_OFFSET))(this);
		}
	};
}
