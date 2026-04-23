#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }
namespace RPG::Client { class ActivityGuessTheSilhouetteRedDotFilter; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9ADD280)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x9ADD360)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0x9ADD0C0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9ADD1A0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTETUTORIALDATA_OFFSET UNITYSDK_OFFSET(0x9ADD550)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETALLDISPLAYACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0x9ADD630)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDAYINDEXDICT_OFFSET UNITYSDK_OFFSET(0x9AE08D0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0x9AE08C0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTELIST_OFFSET UNITYSDK_OFFSET(0x9AE08B0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x9AE0910)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9AE08A0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AE08F0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_CURRENTINPROGRESSGUESSID_OFFSET UNITYSDK_OFFSET(0x9AE08E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9AE0930)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AE0900)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISALLCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9ADE7B0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9ADE5B0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0x9ADDCB0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SETGUESSTHESILHOUETTESEEN_OFFSET UNITYSDK_OFFSET(0x9ADE120)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x9AE0920)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9AE0940)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_TAKEREWARDBYDAY_OFFSET UNITYSDK_OFFSET(0x9ADE300)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9ADE860)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9ADE820)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATECURRENTINPROGRESSGUESSID_OFFSET UNITYSDK_OFFSET(0x9ADF5C0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9ADF940)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CHECKISGIRLGENDERPHOTO_OFFSET UNITYSDK_OFFSET(0x9AE0330)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CONVERTGUESSDATALISTTODAYINDEXDICT_OFFSET UNITYSDK_OFFSET(0x9ADFA50)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE0950)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GENERATEDAYREWARDDICT_OFFSET UNITYSDK_OFFSET(0x9ADFE00)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0x9ADEB70)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x9AE07E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYREFRESHALL_OFFSET UNITYSDK_OFFSET(0x9ADEA00)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ADFF60)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x9AE0790)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x9AE0B20)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SETISSHOWEVENTUI_OFFSET UNITYSDK_OFFSET(0x9AE0700)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTFUNC_OFFSET UNITYSDK_OFFSET(0x9AE0110)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSDATADICT_OFFSET UNITYSDK_OFFSET(0x9AE04E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0x9ADDBB0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTELIST_OFFSET UNITYSDK_OFFSET(0x9ADF430)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__UPDATEISNEW_OFFSET UNITYSDK_OFFSET(0x9ADF780)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9AE0BD0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9AE0B70)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSDATADICT_B__24_0_OFFSET UNITYSDK_OFFSET(0x9AE0B60)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTEDISPLAYLIST_B__17_0_OFFSET UNITYSDK_OFFSET(0x9AE0B50)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x9AE0B30)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_1_OFFSET UNITYSDK_OFFSET(0x9AE0B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteModule_TypeDefinitionIndex = 56735;

	class ActivityGuessTheSilhouetteModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _MaxPhotoPerDay = 0x2; // 0x0
		::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* _ActivityGuessTheSilhouetteRedDotFilter; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteTutorialList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ActivityGuessTheSilhouetteDayRewardDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*>* _ActivityGuessTheSilhouetteDayIndexDict; // 0x28
		::RPG::Client::ScheduleTask* _ScheduleTask; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityGuessTheSilhouetteMissionList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteDisplayList; // 0x48
		::System::Boolean _IsFinish_k__BackingField; // 0x50
		::System::UInt32 _TotalProgress; // 0x54
		::System::UInt32 _CurrentInProgressGuessId; // 0x58
		::System::UInt32 _CompletedProgress; // 0x5C
		::System::UInt32 _ActivityID; // 0x60
		::System::UInt32 _PanelID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteData(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this, id);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteDisplayData(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_OFFSET))(this, id);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteDataByMainMissionId(::System::UInt32 mainMissionId)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_OFFSET))(this, mainMissionId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* GetActivityGuessTheSilhouetteDataBySubMissionId(::System::UInt32 subMissionId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYSUBMISSIONID_OFFSET))(this, subMissionId);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteTutorialData(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTETUTORIALDATA_OFFSET))(this, id);
		}

		::System::Void GetAllDisplayActivityGuessTheSilhouetteData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETALLDISPLAYACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this);
		}

		::System::Void SendGetAllActivityGuessTheSilhouetteData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this);
		}

		::System::Void SetGuessTheSilhouetteSeen(::RPG::Client::ActivityGuessTheSilhouetteData* guessData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SETGUESSTHESILHOUETTESEEN_OFFSET))(this, guessData);
		}

		::System::Void TakeRewardByDay(::System::UInt32 day)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_TAKEREWARDBYDAY_OFFSET))(this, day);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 day)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISREWARDTAKEN_OFFSET))(this, day);
		}

		::System::Boolean IsAllComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISALLCOMPLETE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnActivityRefreshAll(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYREFRESHALL_OFFSET))(this, arg);
		}

		::System::Void _GetAllActivityGuessTheSilhouetteData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this, subMissionDataList);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _SortGuessTheSilhouetteList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTELIST_OFFSET))(this);
		}

		::System::Void _SortGuessTheSilhouetteDisplayList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTEDISPLAYLIST_OFFSET))(this);
		}

		::System::Int32 _SortFunc(::RPG::Client::ActivityGuessTheSilhouetteData* x, ::RPG::Client::ActivityGuessTheSilhouetteData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTFUNC_OFFSET))(this, x, y);
		}

		::System::Void _CalculateCurrentInProgressGuessId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATECURRENTINPROGRESSGUESSID_OFFSET))(this);
		}

		::System::Boolean _CheckIsGirlGenderPhoto(::RPG::Client::ActivityGuessTheSilhouetteData* data, ::System::Int32 index, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* dataList)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CHECKISGIRLGENDERPHOTO_OFFSET))(this, data, index, dataList);
		}

		::System::Void _UpdateIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__UPDATEISNEW_OFFSET))(this);
		}

		::System::Void _CalculateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATEPROGRESS_OFFSET))(this);
		}

		::System::Void _ConvertGuessDataListToDayIndexDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CONVERTGUESSDATALISTTODAYINDEXDICT_OFFSET))(this);
		}

		::System::Void _SortGuessDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSDATADICT_OFFSET))(this);
		}

		::System::Void _SetIsShowEventUI(::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* dayList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SETISSHOWEVENTUI_OFFSET))(this, dayList);
		}

		::System::Void _GenerateDayRewardDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GENERATEDAYREWARDDICT_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Void _OnActivityEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYEND_OFFSET))(this, arg);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* get_ActivityGuessTheSilhouetteList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* get_ActivityGuessTheSilhouetteDisplayList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDISPLAYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*>* get_ActivityGuessTheSilhouetteDayIndexDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDAYINDEXDICT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentInProgressGuessId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_CURRENTINPROGRESSGUESSID_OFFSET))(this);
		}

		::System::UInt32 get_CompletedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_COMPLETEDPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* get_ActivityGuessTheSilhouetteRedDotFilter()
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_ActivityGuessTheSilhouetteRedDotFilter(::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Void _SendGetAllActivityGuessTheSilhouetteData_b__6_0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_B__6_0_OFFSET))(this, subMissionDataList);
		}

		::System::Int32 __SortGuessTheSilhouetteList_b__16_0(::RPG::Client::ActivityGuessTheSilhouetteData* x, ::RPG::Client::ActivityGuessTheSilhouetteData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_0_OFFSET))(this, x, y);
		}

		::System::Int32 __SortGuessTheSilhouetteList_b__16_1(::RPG::Client::ActivityGuessTheSilhouetteData* x, ::RPG::Client::ActivityGuessTheSilhouetteData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_1_OFFSET))(this, x, y);
		}

		::System::Int32 __SortGuessTheSilhouetteDisplayList_b__17_0(::RPG::Client::ActivityGuessTheSilhouetteData* x, ::RPG::Client::ActivityGuessTheSilhouetteData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTEDISPLAYLIST_B__17_0_OFFSET))(this, x, y);
		}

		::System::Int32 __SortGuessDataDict_b__24_0(::RPG::Client::ActivityGuessTheSilhouetteData* x, ::RPG::Client::ActivityGuessTheSilhouetteData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSDATADICT_B__24_0_OFFSET))(this, x, y);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
