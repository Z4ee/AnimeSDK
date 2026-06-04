#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BenefitActivityState.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_963E317C37FB5E9A;
class Class_1_E577B5580A99D425_3;
class Class_1_F91AD0C5A85E4AFA_7;
namespace Proto { class ItemList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ASSESACTIVITYSTATEBYTIME_OFFSET UNITYSDK_OFFSET(0xB0A11D0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB0A0A50)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETLUCKYKOIINFOLIST_OFFSET UNITYSDK_OFFSET(0xB0A0B20)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDLISTBYREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xB0A0E80)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDREVEALDATETIME_OFFSET UNITYSDK_OFFSET(0xB0A1790)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETSPECIALREWARDNUM_OFFSET UNITYSDK_OFFSET(0xB0A1A00)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLCHOOSEEND_OFFSET UNITYSDK_OFFSET(0xB0A15C0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLNEXTTIMEWINDOW_OFFSET UNITYSDK_OFFSET(0xB0A1350)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLREWARDREVEAL_OFFSET UNITYSDK_OFFSET(0xB0A1830)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_DATE_OFFSET UNITYSDK_OFFSET(0xB0A1A50)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB0A1A70)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ISVALIDCHOOSETIME_OFFSET UNITYSDK_OFFSET(0xB0A14B0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_DATE_OFFSET UNITYSDK_OFFSET(0xB0A1A60)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB0A1A80)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A0970)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__INITDAILYINFO_OFFSET UNITYSDK_OFFSET(0xB0A09E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyInfo_TypeDefinitionIndex = 57391;

	class ActivityBenefitDailyInfo : public ::System::Object
	{
	public:
		::Class_1_E577B5580A99D425_3* _Config; // 0x10
		::System::UInt32 _Date_k__BackingField; // 0x18
		::RPG::Client::BenefitActivityState _State_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityBenefitDailyInfo* Create(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::RPG::Client::ActivityBenefitDailyInfo*(*)(::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_7*>* GetLuckyKoiInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETLUCKYKOIINFOLIST_OFFSET))(this);
		}

		::Proto::ItemList* GetRewardListByRewardLevel(::System::UInt32 a1)
		{
			return ((::Proto::ItemList*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDLISTBYREWARDLEVEL_OFFSET))(this, a1);
		}

		::System::Void AssesActivityStateByTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ASSESACTIVITYSTATEBYTIME_OFFSET))(this);
		}

		::System::Int64 GetTimeTillNextTimeWindow()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLNEXTTIMEWINDOW_OFFSET))(this);
		}

		::System::Boolean IsValidChooseTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_ISVALIDCHOOSETIME_OFFSET))(this);
		}

		::System::TimeSpan GetTimeTillChooseEnd()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLCHOOSEEND_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetRewardRevealDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETREWARDREVEALDATETIME_OFFSET))(this);
		}

		::System::TimeSpan GetTimeTillRewardReveal()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETTIMETILLREWARDREVEAL_OFFSET))(this);
		}

		::System::UInt32 GetSpecialRewardNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GETSPECIALREWARDNUM_OFFSET))(this);
		}

		::System::Void _InitDailyInfo(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO__INITDAILYINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_Date()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_DATE_OFFSET))(this, a1);
		}

		::RPG::Client::BenefitActivityState get_State()
		{
			return ((::RPG::Client::BenefitActivityState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::BenefitActivityState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BenefitActivityState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYINFO_SET_STATE_OFFSET))(this, a1);
		}
	};
}
