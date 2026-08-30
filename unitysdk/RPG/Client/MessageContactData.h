#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageGroupData; }
namespace RPG::GameCore { class MessageContactRow; }
namespace RPG::GameCore { class MessageContactsConditionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTACTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD6A0450)
#define RPG_CLIENT_MESSAGECONTACTDATA_DELETEGROUP_OFFSET UNITYSDK_OFFSET(0xD6A0BD0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GETSHOWNCONTACTROW_OFFSET UNITYSDK_OFFSET(0xD6A0320)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_CURRENTGROUPIDS_OFFSET UNITYSDK_OFFSET(0xD6A0D10)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_HASBEENUPDATED_OFFSET UNITYSDK_OFFSET(0xD6A0E30)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_HASWAITINGGROUP_OFFSET UNITYSDK_OFFSET(0xD6A0DB0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xD6A0E50)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD6A0D50)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_LASTGROUPTIME_OFFSET UNITYSDK_OFFSET(0xD6A0E10)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_SHOWNROW_OFFSET UNITYSDK_OFFSET(0xD6A0EA0)
#define RPG_CLIENT_MESSAGECONTACTDATA_GET_WAITINGGROUPIDS_OFFSET UNITYSDK_OFFSET(0xD6A0D30)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_CURRENTGROUPIDS_OFFSET UNITYSDK_OFFSET(0xD6A0D20)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_HASBEENUPDATED_OFFSET UNITYSDK_OFFSET(0xD6A0E40)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_LASTGROUPTIME_OFFSET UNITYSDK_OFFSET(0xD6A0E20)
#define RPG_CLIENT_MESSAGECONTACTDATA_SET_WAITINGGROUPIDS_OFFSET UNITYSDK_OFFSET(0xD6A0D40)
#define RPG_CLIENT_MESSAGECONTACTDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD6A06E0)
#define RPG_CLIENT_MESSAGECONTACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A0630)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContactData_TypeDefinitionIndex = 66117;

	class MessageContactData : public ::System::Object
	{
	public:
		::RPG::GameCore::MessageContactRow* _TrueRow; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentGroupIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitingGroupIDs_k__BackingField; // 0x20
		::RPG::GameCore::MessageContactRow* _FakeRow; // 0x28
		::RPG::GameCore::MessageContactsConditionRow* _ConditionRow; // 0x30
		::System::Boolean _HasBeenUpdated_k__BackingField; // 0x38
		::System::Int64 _LastGroupTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::MessageContactRow* GetShownContactRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageContactRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GETSHOWNCONTACTROW_OFFSET))(a1);
		}

		static ::RPG::Client::MessageContactData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContactData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Update(::RPG::Client::MessageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::Void DeleteGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_DELETEGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurrentGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_CURRENTGROUPIDS_OFFSET))(this);
		}

		::System::Void set_CurrentGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_CURRENTGROUPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_WaitingGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_WAITINGGROUPIDS_OFFSET))(this);
		}

		::System::Void set_WaitingGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_WAITINGGROUPIDS_OFFSET))(this, a1);
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

		::System::Void set_LastGroupTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_LASTGROUPTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBeenUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_GET_HASBEENUPDATED_OFFSET))(this);
		}

		::System::Void set_HasBeenUpdated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTACTDATA_SET_HASBEENUPDATED_OFFSET))(this, a1);
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
