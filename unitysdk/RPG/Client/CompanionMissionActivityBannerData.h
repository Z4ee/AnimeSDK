#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCC598C0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xCC59E50)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_BANNERID_OFFSET UNITYSDK_OFFSET(0xCC59DE0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_MAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xCC59D40)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xCC59E00)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_ISMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xCC59960)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_SET_BANNERID_OFFSET UNITYSDK_OFFSET(0xCC59DF0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC59950)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityBannerData_TypeDefinitionIndex = 63594;

	class CompanionMissionActivityBannerData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityBannerCompanyMissionRow* _Row; // 0x10
		::System::UInt32 _BannerID_k__BackingField; // 0x18
		::System::Boolean IsFinish; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CompanionMissionActivityBannerData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CompanionMissionActivityBannerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_ISMISSIONFINISH_OFFSET))(this);
		}

		::System::UInt32 get_BannerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_BANNERID_OFFSET))(this);
		}

		::System::Void set_BannerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_SET_BANNERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYBANNERDATA_GET_MAINMISSIONIDLIST_OFFSET))(this);
		}
	};
}
