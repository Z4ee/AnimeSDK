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

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC4ED590)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC4ED6C0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0xC4ED330)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC4ED460)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTETUTORIALDATA_OFFSET UNITYSDK_OFFSET(0xC4EDB30)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETALLDISPLAYACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0xC4EDC20)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDAYINDEXDICT_OFFSET UNITYSDK_OFFSET(0xC535370)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xC535330)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTELIST_OFFSET UNITYSDK_OFFSET(0xC534C80)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC535AA0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xC5359A0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC535A20)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_CURRENTINPROGRESSGUESSID_OFFSET UNITYSDK_OFFSET(0xC5359E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC535B30)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC535A60)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISALLCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC4EF220)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC4EF030)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0xC4EE420)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SETGUESSTHESILHOUETTESEEN_OFFSET UNITYSDK_OFFSET(0xC4EEA10)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xC535AE0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC535B40)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_TAKEREWARDBYDAY_OFFSET UNITYSDK_OFFSET(0xC4EECB0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4EF320)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4EF2E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATECURRENTINPROGRESSGUESSID_OFFSET UNITYSDK_OFFSET(0xC4F0230)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC534CC0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CHECKISGIRLGENDERPHOTO_OFFSET UNITYSDK_OFFSET(0xC4F0D60)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CONVERTGUESSDATALISTTODAYINDEXDICT_OFFSET UNITYSDK_OFFSET(0xC534DA0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC535B50)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GENERATEDAYREWARDDICT_OFFSET UNITYSDK_OFFSET(0xC535680)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET UNITYSDK_OFFSET(0xC4EF690)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0xC5358E0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYREFRESHALL_OFFSET UNITYSDK_OFFSET(0xC4EF500)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC4F0680)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xC535890)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xC535D60)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SETISSHOWEVENTUI_OFFSET UNITYSDK_OFFSET(0xC535580)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTFUNC_OFFSET UNITYSDK_OFFSET(0xC4F08D0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSDATADICT_OFFSET UNITYSDK_OFFSET(0xC5353B0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xC4EE310)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTELIST_OFFSET UNITYSDK_OFFSET(0xC4F0070)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__UPDATEISNEW_OFFSET UNITYSDK_OFFSET(0xC534A00)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSDATADICT_B__24_0_OFFSET UNITYSDK_OFFSET(0xC535DA0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTEDISPLAYLIST_B__17_0_OFFSET UNITYSDK_OFFSET(0xC535D90)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xC535D70)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_1_OFFSET UNITYSDK_OFFSET(0xC535D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteModule_TypeDefinitionIndex = 61612;

	class ActivityGuessTheSilhouetteModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _MaxPhotoPerDay = 0x2; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityGuessTheSilhouetteMissionList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteDisplayList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ActivityGuessTheSilhouetteDayRewardDict; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* _ActivityGuessTheSilhouetteTutorialList; // 0x30
		::RPG::Client::ScheduleTask* _ScheduleTask; // 0x38
		::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* _ActivityGuessTheSilhouetteRedDotFilter; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*>* _ActivityGuessTheSilhouetteDayIndexDict; // 0x48
		::System::UInt32 _CompletedProgress; // 0x50
		::System::UInt32 _TotalProgress; // 0x54
		::System::UInt32 _CurrentInProgressGuessId; // 0x58
		::System::UInt32 _PanelID; // 0x5C
		::System::Boolean _IsFinish_k__BackingField; // 0x60
		::System::UInt32 _ActivityID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteDataByMainMissionId(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* GetActivityGuessTheSilhouetteDataBySubMissionId(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTEDATABYSUBMISSIONID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityGuessTheSilhouetteData* GetActivityGuessTheSilhouetteTutorialData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityGuessTheSilhouetteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETACTIVITYGUESSTHESILHOUETTETUTORIALDATA_OFFSET))(this, a1);
		}

		::System::Void GetAllDisplayActivityGuessTheSilhouetteData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GETALLDISPLAYACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this);
		}

		::System::Void SendGetAllActivityGuessTheSilhouetteData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this);
		}

		::System::Void SetGuessTheSilhouetteSeen(::RPG::Client::ActivityGuessTheSilhouetteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SETGUESSTHESILHOUETTESEEN_OFFSET))(this, a1);
		}

		::System::Void TakeRewardByDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_TAKEREWARDBYDAY_OFFSET))(this, a1);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_ISREWARDTAKEN_OFFSET))(this, a1);
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

		::System::Void _OnActivityRefreshAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYREFRESHALL_OFFSET))(this, a1);
		}

		::System::Void _GetAllActivityGuessTheSilhouetteData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GETALLACTIVITYGUESSTHESILHOUETTEDATA_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _SortGuessTheSilhouetteList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTELIST_OFFSET))(this);
		}

		::System::Void _SortGuessTheSilhouetteDisplayList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTGUESSTHESILHOUETTEDISPLAYLIST_OFFSET))(this);
		}

		::System::Int32 _SortFunc(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::RPG::Client::ActivityGuessTheSilhouetteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SORTFUNC_OFFSET))(this, a1, a2);
		}

		::System::Void _CalculateCurrentInProgressGuessId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CALCULATECURRENTINPROGRESSGUESSID_OFFSET))(this);
		}

		::System::Boolean _CheckIsGirlGenderPhoto(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__CHECKISGIRLGENDERPHOTO_OFFSET))(this, a1, a2, a3);
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

		::System::Void _SetIsShowEventUI(::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityGuessTheSilhouetteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SETISSHOWEVENTUI_OFFSET))(this, a1);
		}

		::System::Void _GenerateDayRewardDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__GENERATEDAYREWARDDICT_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Void _OnActivityEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__ONACTIVITYEND_OFFSET))(this, a1);
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

		::System::Void set_ActivityGuessTheSilhouetteRedDotFilter(::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Void _SendGetAllActivityGuessTheSilhouetteData_b__6_0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE__SENDGETALLACTIVITYGUESSTHESILHOUETTEDATA_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 __SortGuessTheSilhouetteList_b__16_0(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::RPG::Client::ActivityGuessTheSilhouetteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SortGuessTheSilhouetteList_b__16_1(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::RPG::Client::ActivityGuessTheSilhouetteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTELIST_B__16_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SortGuessTheSilhouetteDisplayList_b__17_0(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::RPG::Client::ActivityGuessTheSilhouetteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSTHESILHOUETTEDISPLAYLIST_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SortGuessDataDict_b__24_0(::RPG::Client::ActivityGuessTheSilhouetteData* a1, ::RPG::Client::ActivityGuessTheSilhouetteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___SORTGUESSDATADICT_B__24_0_OFFSET))(this, a1, a2);
		}
	};
}
