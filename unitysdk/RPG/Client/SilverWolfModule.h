#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SilverWolfGroupData; }
namespace RPG::GameCore { class SilverWolfCollectionRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xA4849C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET UNITYSDK_OFFSET(0xA483F30)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET UNITYSDK_OFFSET(0xA483DC0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xA4821C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xA481740)
#define RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA481DA0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA4838F0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xA483C00)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA482600)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET UNITYSDK_OFFSET(0xA486DD0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA4869F0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA4861C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0xA486D60)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA486BE0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xA4867F0)
#define RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA485160)
#define RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xA481F50)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4856F0)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA485680)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA486310)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET UNITYSDK_OFFSET(0xA485FC0)
#define RPG_CLIENT_SILVERWOLFMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA486DE0)
#define RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA484600)
#define RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA483A10)
#define RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA485480)
#define RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA4852D0)
#define RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA486850)
#define RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA4840B0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0xA4865D0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET UNITYSDK_OFFSET(0xA486570)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0xA486440)
#define RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xA4863D0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET UNITYSDK_OFFSET(0xA485AF0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA4859E0)
#define RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA485DA0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA486E00)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA486EF0)
#define RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA486E90)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule_TypeDefinitionIndex = 55459;

	class SilverWolfModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionList; // 0x10
		::RPG::Client::ScheduleData* _OnlyShopSchedule; // 0x18
		::RPG::Client::ScheduleData* _DecalUnlockSchedule; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* PremissionList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _SilverWolfGroupDatas; // 0x30
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0x38
		::RPG::Client::ScheduleData* _ActivityOpenSchedule; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _DecalFuncUnlockMissionList; // 0x48
		::System::String* TutorialKeyAfterTrans; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* _DecalCollectionRows; // 0x58
		::System::UInt32 _CompanionMissionID; // 0x60
		::System::Boolean _CompanionMissionNewFinish; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::SilverWolfGroupData* GetSilverWolfGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::SilverWolfGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetSortedSilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* GetDecalCollectionRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET))(this);
		}

		::System::UInt32 GetDecalCollectedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET))(this);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* GetNewTabGroupIDList()
		{
			return ((::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailRewardQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET))(this);
		}

		::System::Boolean ShowCompanionBtnReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetRewardAvailGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _InitUnlockMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET))(this);
		}

		::System::Void _InitPremissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET))(this);
		}

		::System::Void _PrepareTaskMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::System::Void _RefreshPremissionState(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET))(this, arg);
		}

		::System::Void _CheckDecalUnlock(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET))(this, arg);
		}

		::System::Void _CheckCompanionMissionFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnTransferFinishedEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET))(this, arg);
		}

		::System::Void _OnNewDecalDialogExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET))(this, arg);
		}

		::System::Void _PrepareConditionMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _GetOpenGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET))(this);
		}

		::System::Boolean _IsDecalUnlockMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* get_SilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_OnlyShopSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ActivityOpenSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_DecalUnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsDecalFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_CompanionMissionNewFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DecalFuncUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
