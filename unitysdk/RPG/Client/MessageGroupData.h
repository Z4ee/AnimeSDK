#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageSectionData; }
namespace RPG::GameCore { class MessageGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEGROUPDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x9B93420)
#define RPG_CLIENT_MESSAGEGROUPDATA_GETALLSECTIONS_OFFSET UNITYSDK_OFFSET(0x9B93810)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ALLSECTIONIDS_OFFSET UNITYSDK_OFFSET(0x9B93B30)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0x9B94380)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9B93BD0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_INSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9B94C60)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0x9B94C40)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9B94D90)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x9B944F0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9B93DF0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x9B8EDC0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISWAITINGCHOOSE_OFFSET UNITYSDK_OFFSET(0x9B93C70)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTSECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9B8EE70)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x9B93C50)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LATESTSECTIONID_OFFSET UNITYSDK_OFFSET(0x9B935B0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKEDMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x9B94540)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x9B94FC0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9B93BF0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x9B93C30)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0x9B949C0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWMISSION_OFFSET UNITYSDK_OFFSET(0x9B94720)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9B94110)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B93C10)
#define RPG_CLIENT_MESSAGEGROUPDATA_SAFEGETSECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9B931A0)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9B93BE0)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x9B93C60)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9B93C00)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x9B93C40)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B93C20)
#define RPG_CLIENT_MESSAGEGROUPDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9B93480)
#define RPG_CLIENT_MESSAGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B93090)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageGroupData_TypeDefinitionIndex = 53693;

	class MessageGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::MessageGroupRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* _SectionDatas_k__BackingField; // 0x18
		::System::Int64 _LastTime_k__BackingField; // 0x20
		::Enum_3_DB663931210BBC27_28 _Status_k__BackingField; // 0x28
		::System::Boolean IsSubLineGroup; // 0x2C
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA__CTOR_OFFSET))(this, id);
		}

		::RPG::Client::MessageSectionData* SafeGetSectionData(::System::UInt32 sectionID)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SAFEGETSECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Void UpdateStatus(::Enum_3_DB663931210BBC27_28 status, ::System::Int64 lastTime)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_UPDATESTATUS_OFFSET))(this, status, lastTime);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageSectionData*>* GetAllSections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageSectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GETALLSECTIONS_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::MessageGroupRow* get_Row()
		{
			return ((::RPG::GameCore::MessageGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageGroupRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_ROW_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_28 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* get_SectionDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SECTIONDATAS_OFFSET))(this);
		}

		::System::Void set_SectionDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_SECTIONDATAS_OFFSET))(this, value);
		}

		::RPG::Client::MessageSectionData* get_LastSectionData()
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTSECTIONDATA_OFFSET))(this);
		}

		::System::Int64 get_LastTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTTIME_OFFSET))(this);
		}

		::System::Void set_LastTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_LASTTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitingChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISWAITINGCHOOSE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_CanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_CANFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LinkedMainMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKEDMAINMISSIONS_OFFSET))(this);
		}

		::System::Boolean get_ShowMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWMISSION_OFFSET))(this);
		}

		::System::Boolean get_ShowBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_InSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_INSCHEDULE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AllSectionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ALLSECTIONIDS_OFFSET))(this);
		}

		::System::UInt32 get_LatestSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LATESTSECTIONID_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKMISSIONID_OFFSET))(this);
		}
	};
}
