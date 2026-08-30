#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD49BF60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKEMPLOYEEICONPATHLIST_OFFSET UNITYSDK_OFFSET(0xD49C430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD47C6C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_MESSAGEUSER_OFFSET UNITYSDK_OFFSET(0xD49C7D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD49C7B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_STARTWORKPHASE_OFFSET UNITYSDK_OFFSET(0xD49C850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0xD49C790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKGROUPPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD49C810)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0xD49C770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKMESSAGE_OFFSET UNITYSDK_OFFSET(0xD49C7F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD49C870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKSTARTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD49C830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_MESSAGEUSER_OFFSET UNITYSDK_OFFSET(0xD49C7E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD49C7C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_STARTWORKPHASE_OFFSET UNITYSDK_OFFSET(0xD49C860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0xD49C7A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKGROUPPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD49C820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0xD49C780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKMESSAGE_OFFSET UNITYSDK_OFFSET(0xD49C800)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD49C880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKSTARTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD49C840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD49C220)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkData_TypeDefinitionIndex = 78982;

	class LimaoNewsWorkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* _WorkPhaseDataList_k__BackingField; // 0x10
		::System::String* _WorkStartEventPath_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _WorkEmployeeList_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _StartWorkPhase_k__BackingField; // 0x28
		::System::UInt32 _WorkID_k__BackingField; // 0x30
		::System::UInt32 _RewardID_k__BackingField; // 0x34
		::System::UInt32 _WorkGroupPhoneMessage_k__BackingField; // 0x38
		::System::UInt32 _MessageUser_k__BackingField; // 0x3C
		::RPG::Client::TextID _WorkMessage_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* GetWorkPhaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKPHASEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetWorkEmployeeIconPathList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKEMPLOYEEICONPATHLIST_OFFSET))(this);
		}

		::System::UInt32 get_WorkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKID_OFFSET))(this);
		}

		::System::Void set_WorkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_WorkEmployeeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKEMPLOYEELIST_OFFSET))(this);
		}

		::System::Void set_WorkEmployeeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKEMPLOYEELIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MessageUser()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_MESSAGEUSER_OFFSET))(this);
		}

		::System::Void set_MessageUser(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_MESSAGEUSER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_WorkMessage()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKMESSAGE_OFFSET))(this);
		}

		::System::Void set_WorkMessage(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKMESSAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkGroupPhoneMessage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKGROUPPHONEMESSAGE_OFFSET))(this);
		}

		::System::Void set_WorkGroupPhoneMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKGROUPPHONEMESSAGE_OFFSET))(this, a1);
		}

		::System::String* get_WorkStartEventPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKSTARTEVENTPATH_OFFSET))(this);
		}

		::System::Void set_WorkStartEventPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKSTARTEVENTPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_StartWorkPhase()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_STARTWORKPHASE_OFFSET))(this);
		}

		::System::Void set_StartWorkPhase(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_STARTWORKPHASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* get_WorkPhaseDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKPHASEDATALIST_OFFSET))(this);
		}

		::System::Void set_WorkPhaseDataList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKPHASEDATALIST_OFFSET))(this, a1);
		}
	};
}
