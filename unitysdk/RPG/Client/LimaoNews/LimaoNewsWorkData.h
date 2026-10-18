#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3CF6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKEMPLOYEEICONPATHLIST_OFFSET UNITYSDK_OFFSET(0xD3F2950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GETWORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD3D0FA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_MESSAGEUSER_OFFSET UNITYSDK_OFFSET(0xD3F2CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD3F2CD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_STARTWORKPHASE_OFFSET UNITYSDK_OFFSET(0xD3F2D70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0xD3F2CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKGROUPPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3F2D30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0xD3F2C90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3F2D10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD3F2D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_GET_WORKSTARTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD3F2D50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_MESSAGEUSER_OFFSET UNITYSDK_OFFSET(0xD3F2D00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD3F2CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_STARTWORKPHASE_OFFSET UNITYSDK_OFFSET(0xD3F2D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0xD3F2CC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKGROUPPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3F2D40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0xD3F2CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3F2D20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD3F2DA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA_SET_WORKSTARTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD3F2D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2740)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkData_TypeDefinitionIndex = 80305;

	class LimaoNewsWorkData : public ::System::Object
	{
	public:
		::System::String* _WorkStartEventPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _WorkEmployeeList_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _StartWorkPhase_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* _WorkPhaseDataList_k__BackingField; // 0x28
		::RPG::Client::TextID _WorkMessage_k__BackingField; // 0x30
		::System::UInt32 _WorkGroupPhoneMessage_k__BackingField; // 0x40
		::System::UInt32 _MessageUser_k__BackingField; // 0x44
		::System::UInt32 _WorkID_k__BackingField; // 0x48
		::System::UInt32 _RewardID_k__BackingField; // 0x4C

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
