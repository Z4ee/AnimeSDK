#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBD0D260)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0B810)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0B980)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0BA80)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBD0D270)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET UNITYSDK_OFFSET(0xBD0B8D0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0xBD0BFA0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET UNITYSDK_OFFSET(0xBD0C070)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0xBD0C270)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET UNITYSDK_OFFSET(0xBD0C110)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET UNITYSDK_OFFSET(0xBD0C1C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD0B0B0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET UNITYSDK_OFFSET(0xBD0BE10)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET UNITYSDK_OFFSET(0xBD0CD60)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xBD0BCF0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET UNITYSDK_OFFSET(0xBD0BEF0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0BA40)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0BB00)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET UNITYSDK_OFFSET(0xBD0CD10)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xBD0D070)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xBD0D1E0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xBD0B320)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET UNITYSDK_OFFSET(0xBD0D280)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0D2B0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0D310)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBD0D3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusActivityData_TypeDefinitionIndex = 57625;

	class HeliobusActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SpMainMissionIDList_k__BackingField; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityMainMissionIDList; // 0xA8
		::System::Boolean _IsTeleportUnlock; // 0xB0
		::System::UInt32 _HeliobusTeleportUnlockMissionID; // 0xB4

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsAllSpMainMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean _CheckInComeEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyMissionPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanTakeAnchorPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::Boolean _IsEveryDayRedDotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET))(this);
		}

		::System::Boolean _CheckHasChallengeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET))(this);
		}

		::System::Boolean _CheckHasTimeLimitedReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET))(this);
		}

		::System::Void _GenerateFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET))(this);
		}

		::System::Void _OnHeliobusGetInfo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET))(this, a1);
		}

		::System::Void _GetCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET))(this);
		}

		::System::Void _OnMainMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnSubMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _SetMainMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_SpMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET))(this, a1);
		}

		::System::Void __GetCondition_b__16_1(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
