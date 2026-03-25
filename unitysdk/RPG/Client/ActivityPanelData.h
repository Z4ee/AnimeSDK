#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityPanelDataResidentAdaptor; }
namespace RPG::Client { class ActivityPanelResidentExtraData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::Client { class ActivityStateData; }
namespace RPG::Client { class ActivityTagData; }
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ActivityThemeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYPANELDATA_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0x8F7D5F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F74FE0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ACTIVITYTHEMEID_OFFSET UNITYSDK_OFFSET(0x8F8B9E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x8F89940)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8F898B0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x8F8A050)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DAILYHINT_OFFSET UNITYSDK_OFFSET(0x8F8AE00)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x8F8B770)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMMANUALSORT_OFFSET UNITYSDK_OFFSET(0x8F8B820)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x8F89B00)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8F89A70)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x8F89300)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0x8F89680)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0x8F8B6A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDELAYEDFOREXCHANGE_OFFSET UNITYSDK_OFFSET(0x8F89EC0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x8F7A3F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F8A0B0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8F897A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x8F89E60)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET UNITYSDK_OFFSET(0x8F89D00)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x8F89CA0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPANELHAVERESIDENTPART_OFFSET UNITYSDK_OFFSET(0x8F89D70)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREGUIDECOMPLETE_OFFSET UNITYSDK_OFFSET(0x8F89E00)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREMISSIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8F89DA0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISRESIDENTPANEL_OFFSET UNITYSDK_OFFSET(0x8F897C0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSKIPSWITCHSTORYLINE_OFFSET UNITYSDK_OFFSET(0x8F8BA70)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F8A170)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELBRIEFDESC_OFFSET UNITYSDK_OFFSET(0x8F8B970)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELDESC_OFFSET UNITYSDK_OFFSET(0x8F8B5D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x8F89450)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8F8A9E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x8F897F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x8F897D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTADAPTOR_OFFSET UNITYSDK_OFFSET(0x8F8B510)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTEXTRADATA_OFFSET UNITYSDK_OFFSET(0x8F8B500)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8F89850)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTEDDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x8F8BA90)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x8F8B520)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_STATEDATA_OFFSET UNITYSDK_OFFSET(0x8F89D80)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TABICON_OFFSET UNITYSDK_OFFSET(0x8F8B8F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x8F8B910)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGDESC_OFFSET UNITYSDK_OFFSET(0x8F8B9A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x8F8B9D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_THEME_OFFSET UNITYSDK_OFFSET(0x8F8BA00)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TITLENAME_OFFSET UNITYSDK_OFFSET(0x8F8B940)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x8F8B8D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x8F892E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x8F8A110)
#define RPG_CLIENT_ACTIVITYPANELDATA_INIT_OFFSET UNITYSDK_OFFSET(0x8F74580)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x8F894E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x8F89760)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8F89F10)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AA10)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8F89C30)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0x8F8AF40)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AD00)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWEARLYACCESSREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AB80)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8ACB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0x8F89720)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AB00)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AB40)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AED0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AAC0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AA80)
#define RPG_CLIENT_ACTIVITYPANELDATA_MANUALMARKOLD_OFFSET UNITYSDK_OFFSET(0x8F75580)
#define RPG_CLIENT_ACTIVITYPANELDATA_MARKOLD_OFFSET UNITYSDK_OFFSET(0x8F8B020)
#define RPG_CLIENT_ACTIVITYPANELDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8F8A1D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x8F896E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_ACTIVITYGOTO_OFFSET UNITYSDK_OFFSET(0x8F8BE10)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDEGOTO_OFFSET UNITYSDK_OFFSET(0x8F8BDB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDETAKEMISSION_OFFSET UNITYSDK_OFFSET(0x8F8BD50)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x8F8BD40)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x8F8BD30)
#define RPG_CLIENT_ACTIVITYPANELDATA_SETPANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8F8A970)
#define RPG_CLIENT_ACTIVITYPANELDATA_SETRELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x8F74530)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8F897B0)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELID_OFFSET UNITYSDK_OFFSET(0x8F89460)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8F8AA00)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_RELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x8F897E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_STATEDATA_OFFSET UNITYSDK_OFFSET(0x8F89D90)
#define RPG_CLIENT_ACTIVITYPANELDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8F8A2A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x8F896A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x8F8B470)
#define RPG_CLIENT_ACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F89030)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISCACHEDDISPLAYITEMLISTDIRTY_OFFSET UNITYSDK_OFFSET(0x8F8BAF0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISHIDEPANEL_OFFSET UNITYSDK_OFFSET(0x8F89470)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8AE20)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISNOTSHIELDED_OFFSET UNITYSDK_OFFSET(0x8F89580)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISSHOWEARLYACCESSREDDOT_OFFSET UNITYSDK_OFFSET(0x8F8ABD0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8F89630)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x8F8A930)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x8F8A830)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x8F8A8F0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x8F8A770)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8F89410)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x8F893D0)
#define RPG_CLIENT_ACTIVITYPANELDATA__REFRESHDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x8F8BBC0)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYMARKOLDWITHOLDPREFSDATA_OFFSET UNITYSDK_OFFSET(0x8F8B140)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET UNITYSDK_OFFSET(0x8F8A2F0)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEENDHANDLER_OFFSET UNITYSDK_OFFSET(0x8F8A530)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelData_TypeDefinitionIndex = 50052;

	class ActivityPanelData : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleTask* _WaitEndTask; // 0x10
		::RPG::Client::ActivityData* _RelatedActivity_k__BackingField; // 0x18
		::RPG::Client::ConditionChecker* _FinishConditionChecker; // 0x20
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x28
		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList; // 0x30
		::RPG::GameCore::ActivityPanelRow* _Row; // 0x38
		::RPG::Client::ActivityPanelDataResidentAdaptor* _ResidentAdaptor_k__BackingField; // 0x40
		::RPG::Client::ActivityStateData* _StateData_k__BackingField; // 0x48
		::RPG::Client::ExprConditionChecker* _UnlockChecker; // 0x50
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityTagData*>* _Tags_ReadOnly; // 0x58
		::RPG::Client::ActivityPanelResidentExtraData* _ResidentExtraData_k__BackingField; // 0x60
		::RPG::Client::ActivityPanelTemplate _PanelTemplate_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTagData*>* _Tags; // 0x88
		::System::UInt32 _CachePlayerLevel; // 0x90
		::System::UInt32 _PanelID_k__BackingField; // 0x94
		::System::Boolean _CacheIsInResident; // 0x98
		::System::Boolean _IsFullCompleted_k__BackingField; // 0x99

		::System::Void _ctor(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__CTOR_OFFSET))(this, panelID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_INIT_OFFSET))(this);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONDISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELID_OFFSET))(this);
		}

		::System::Void set_PanelID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELID_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsNotShielded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISNOTSHIELDED_OFFSET))(this);
		}

		::System::Boolean _IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsHidePanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISHIDEPANEL_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void RequestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_REQUESTDATA_OFFSET))(this);
		}

		::System::Boolean IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean get_IsFullCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISFULLCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsFullCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_ISFULLCOMPLETED_OFFSET))(this, value);
		}

		::System::Boolean get_IsResidentPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISRESIDENTPANEL_OFFSET))(this);
		}

		::System::Void SetRelatedActivity(::RPG::Client::ActivityData* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SETRELATEDACTIVITY_OFFSET))(this, activityData);
		}

		::RPG::Client::ActivityData* get_RelatedActivity()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET))(this);
		}

		::System::Void set_RelatedActivity(::RPG::Client::ActivityData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_RELATEDACTIVITY_OFFSET))(this, value);
		}

		::System::UInt32 get_RelatedActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsInTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsInResident()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET))(this);
		}

		::System::Boolean get_IsPanelHaveResidentPart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPANELHAVERESIDENTPART_OFFSET))(this);
		}

		::RPG::Client::ActivityStateData* get_StateData()
		{
			return ((::RPG::Client::ActivityStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_STATEDATA_OFFSET))(this);
		}

		::System::Void set_StateData(::RPG::Client::ActivityStateData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStateData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_STATEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsPreMissionComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREMISSIONCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsPreGuideComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREGUIDECOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsDelayedForExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDELAYEDFOREXCHANGE_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Boolean get_IsWorldEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& mainMissionIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& subMissionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_COLLECTREQUIREDMISSION_OFFSET))(this, mainMissionIDs, subMissionIDs);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Void _TrySetScheduleBeginHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENED_OFFSET))(this, data);
		}

		::System::Void _TrySetScheduleEndHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEENDHANDLER_OFFSET))(this);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDED_OFFSET))(this, data);
		}

		::System::Void _OnActivityOpenedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET))(this);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Void SetPanelTemplate(::RPG::Client::ActivityPanelTemplate panelTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SETPANELTEMPLATE_OFFSET))(this, panelTemplate);
		}

		::RPG::Client::ActivityPanelTemplate get_PanelTemplate()
		{
			return ((::RPG::Client::ActivityPanelTemplate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELTEMPLATE_OFFSET))(this);
		}

		::System::Void set_PanelTemplate(::RPG::Client::ActivityPanelTemplate value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELTEMPLATE_OFFSET))(this, value);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowEarlyAccessRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWEARLYACCESSREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsNeedShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISNEW_OFFSET))(this);
		}

		::System::Void MarkOld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_MARKOLD_OFFSET))(this);
		}

		::System::Void _TryMarkOldWithOldPrefsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYMARKOLDWITHOLDPREFSDATA_OFFSET))(this);
		}

		::System::Boolean _IsShowEarlyAccessRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISSHOWEARLYACCESSREDDOT_OFFSET))(this);
		}

		::System::Void ManualMarkOld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_MANUALMARKOLD_OFFSET))(this);
		}

		::System::Void UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_UPDATEREDDOTSTATUS_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelResidentExtraData* get_ResidentExtraData()
		{
			return ((::RPG::Client::ActivityPanelResidentExtraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTEXTRADATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelDataResidentAdaptor* get_ResidentAdaptor()
		{
			return ((::RPG::Client::ActivityPanelDataResidentAdaptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTADAPTOR_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::Client::TextID get_PanelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_INTRODESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Boolean get_DisplayItemManualSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMMANUALSORT_OFFSET))(this);
		}

		::System::String* get_UIPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_UIPREFAB_OFFSET))(this);
		}

		::System::String* get_TabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TABICON_OFFSET))(this);
		}

		::System::String* get_UnlockConditions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_UNLOCKCONDITIONS_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPanelFinishType get_FinishType()
		{
			return ((::RPG::GameCore::ActivityPanelFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::System::String* get_FinishConditions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::System::Boolean get_DailyHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DAILYHINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TABNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_TitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TITLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PanelBriefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELBRIEFDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TagDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* get_Tags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGS_OFFSET))(this);
		}

		::System::UInt32 get_ActivityThemeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ACTIVITYTHEMEID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityThemeRow* get_Theme()
		{
			return ((::RPG::GameCore::ActivityThemeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_THEME_OFFSET))(this);
		}

		::System::Boolean get_IsSkipSwitchStoryLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSKIPSWITCHSTORYLINE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* get_SortedDisplayItemList()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTEDDISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Boolean _IsCachedDisplayItemListDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISCACHEDDISPLAYITEMLISTDIRTY_OFFSET))(this);
		}

		::System::Void _RefreshDisplayItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__REFRESHDISPLAYITEMLIST_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_RelatedActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_RELATEDACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_PANELID_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_GuideTakeMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDETAKEMISSION_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_GuideGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDEGOTO_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_ActivityGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_ACTIVITYGOTO_OFFSET))(this);
		}
	};
}
