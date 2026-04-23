#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class BattlePassQuestData; }
namespace RPG::Client { class BattlePassRewardPointData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E69760)
#define RPG_CLIENT_BATTLEPASSFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E69660)
#define RPG_CLIENT_BATTLEPASSFILTER_GET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9E69520)
#define RPG_CLIENT_BATTLEPASSFILTER_GET_WEEKLYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9E69500)
#define RPG_CLIENT_BATTLEPASSFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9E69540)
#define RPG_CLIENT_BATTLEPASSFILTER_SET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9E69530)
#define RPG_CLIENT_BATTLEPASSFILTER_SET_WEEKLYQUESTAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9E69510)
#define RPG_CLIENT_BATTLEPASSFILTER__ADDAVAILABLEQUESTIDS_OFFSET UNITYSDK_OFFSET(0x9E6ABC0)
#define RPG_CLIENT_BATTLEPASSFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6B030)
#define RPG_CLIENT_BATTLEPASSFILTER__NEEDREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6A930)
#define RPG_CLIENT_BATTLEPASSFILTER__ONBATTLEPASSCHANGED_OFFSET UNITYSDK_OFFSET(0x9E69B40)
#define RPG_CLIENT_BATTLEPASSFILTER__ONQUESTREFRESH_OFFSET UNITYSDK_OFFSET(0x9E6A3C0)
#define RPG_CLIENT_BATTLEPASSFILTER__ONREFRESH_OFFSET UNITYSDK_OFFSET(0x9E6A8A0)
#define RPG_CLIENT_BATTLEPASSFILTER__ONREWARDREFRESH_OFFSET UNITYSDK_OFFSET(0x9E69BD0)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEAVAILABLEQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6A420)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATENEWQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6A550)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x9E69600)
#define RPG_CLIENT_BATTLEPASSFILTER__UPDATEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x9E69C20)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E6B220)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6B1A0)
#define RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9E6B120)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassFilter_TypeDefinitionIndex = 61540;

	class BattlePassFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvailableRewardKeys; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* AvailableQuestIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* NewActivityQuestIDs; // 0x20
		::System::UInt32 _ActivityQuestAvailableCount_k__BackingField; // 0x28
		::System::UInt32 _WeeklyQuestAvailableCount_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WeeklyQuestAvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_GET_WEEKLYQUESTAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Void set_WeeklyQuestAvailableCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_SET_WEEKLYQUESTAVAILABLECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityQuestAvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_GET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Void set_ActivityQuestAvailableCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_SET_ACTIVITYQUESTAVAILABLECOUNT_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattlePassChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONBATTLEPASSCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnRewardRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONREWARDREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnQuestRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONQUESTREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ONREFRESH_OFFSET))(this, arg);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateAvailableQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATEAVAILABLEQUESTREDDOT_OFFSET))(this);
		}

		::System::UInt32 _AddAvailableQuestIDs(::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* datas)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__ADDAVAILABLEQUESTIDS_OFFSET))(this, datas);
		}

		::System::Void _UpdateNewQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__UPDATENEWQUESTREDDOT_OFFSET))(this);
		}

		::System::Boolean _NeedRedDot(::RPG::Client::BattlePassRewardPointData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattlePassRewardPointData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER__NEEDREDDOT_OFFSET))(this, data);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
