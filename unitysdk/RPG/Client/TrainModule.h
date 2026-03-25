#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_7CEC8DBE7729999B;
class Class_1_CC12BEA64A5FD961;
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class TrainVisitorInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET UNITYSDK_OFFSET(0xA5E9140)
#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0xA5E90D0)
#define RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E9D60)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET UNITYSDK_OFFSET(0xA5E5E70)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET UNITYSDK_OFFSET(0xA5E8AE0)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0xA5E8C50)
#define RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET UNITYSDK_OFFSET(0xA5E95C0)
#define RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA5E9280)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9500)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET UNITYSDK_OFFSET(0xA5E7610)
#define RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9A10)
#define RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C50)
#define RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C10)
#define RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C70)
#define RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0xA5E9BF0)
#define RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xA5E9C30)
#define RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA5E6350)
#define RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET UNITYSDK_OFFSET(0xA5E97F0)
#define RPG_CLIENT_TRAINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA5E9C90)
#define RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0xA5E8DD0)
#define RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET UNITYSDK_OFFSET(0xA5E9850)
#define RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET UNITYSDK_OFFSET(0xA5E9920)
#define RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET UNITYSDK_OFFSET(0xA5E8260)
#define RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA5E76D0)
#define RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET UNITYSDK_OFFSET(0xA5E89C0)
#define RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET UNITYSDK_OFFSET(0xA5E9650)
#define RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C60)
#define RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C20)
#define RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xA5E9C80)
#define RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0xA5E9C00)
#define RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xA5E9C40)
#define RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET UNITYSDK_OFFSET(0xA5E9740)
#define RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET UNITYSDK_OFFSET(0xA5E9000)
#define RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E9E60)
#define RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E9F30)
#define RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0xA5E7160)
#define RPG_CLIENT_TRAINMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5EA290)
#define RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET UNITYSDK_OFFSET(0xA5E6070)
#define RPG_CLIENT_TRAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EA040)
#define RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__37_0_OFFSET UNITYSDK_OFFSET(0xA5EA4A0)
#define RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xA5E6450)
#define RPG_CLIENT_TRAINMODULE__ONCMDENTERSCENEBYSERVERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA5E7040)
#define RPG_CLIENT_TRAINMODULE__ONCMDGETCURSCENEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA5E6A60)
#define RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET UNITYSDK_OFFSET(0xA5E6AE0)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET UNITYSDK_OFFSET(0xA5E9FB0)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xA5E70C0)
#define RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA5E7AF0)
#define RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA5E87A0)
#define RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA5E8600)
#define RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET UNITYSDK_OFFSET(0xA5E7440)
#define RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E5E00)
#define RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET UNITYSDK_OFFSET(0xA5E5C20)
#define RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET UNITYSDK_OFFSET(0xA5E6260)
#define RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET UNITYSDK_OFFSET(0xA5E5D90)
#define RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__38_0_OFFSET UNITYSDK_OFFSET(0xA5EA4C0)
#define RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E69B0)
#define RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E6830)
#define RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E67C0)
#define RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET UNITYSDK_OFFSET(0xA5E6400)
#define RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET UNITYSDK_OFFSET(0xA5E65E0)
#define RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5EA570)
#define RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5EA4E0)
#define RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5EA580)
#define RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5EA5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule_TypeDefinitionIndex = 55638;

	class TrainModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_PERFORMANCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_SEQ_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xFD24);
		}
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_TALKSENTENCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xFD28);
		}
		// static const ::System::Int32 PASSENGER_RANDOMSEED_ADD = 0x1; // 0x0
		// static const ::System::UInt32 TRAIN_PLANE_ID = 0x2710; // 0x0
		::System::Collections::Generic::List_1<::Class_1_7CEC8DBE7729999B*>* _TrainVisitors; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewRedDotVisitorIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_CC12BEA64A5FD961*>* _TrainPassengers; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewVisitorIDList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardRedDotVisitorIDList_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* _TrainVisitorInfoDict_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _VisitorBehaviorCount_k__BackingField; // 0x40
		::System::Int32 _TimeStampRawSeed; // 0x48
		::System::UInt64 _TrainRefreshTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CCTOR_OFFSET))();
		}

		::System::Void _PassengerInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET))(this);
		}

		::System::Void _PassengerUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET))(this);
		}

		::System::Void _PassengerDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET))(this);
		}

		::Class_1_CC12BEA64A5FD961* FindTrainPassenger(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::Class_1_CC12BEA64A5FD961*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET))(this, npcDef);
		}

		::System::Void _PassengerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET))(this);
		}

		::System::Boolean _CheckPassenger(::Class_1_CC12BEA64A5FD961* passenger, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CC12BEA64A5FD961*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET))(this, passenger, npcDef);
		}

		::System::Void _VisitorInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET))(this);
		}

		::System::Void _VisitorUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET))(this);
		}

		::System::Void _VisitorDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET))(this);
		}

		::System::Void _VisitorAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _VisitorAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetCurSceneInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDGETCURSCENEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnterSceneByServerScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDENTERSCENEBYSERVERSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnCmdTrainVisitorBehaviorFinishScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSceneInfo(::Class_1_14E02E1F6D70E487_1* sceneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET))(this, sceneInfo);
		}

		::System::Void _OnTrainVisitorRewardSendNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnGetTrainVisitorRegisterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeTrainVisitorBehaviorRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnNotifyFinishedMainMission(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET))(this, o);
		}

		::Class_1_7CEC8DBE7729999B* FindTrainVisitorByGroup(::System::UInt32 groupID, ::System::UInt32 groupNPCID)
		{
			return ((::Class_1_7CEC8DBE7729999B*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET))(this, groupID, groupNPCID);
		}

		::Class_1_7CEC8DBE7729999B* FindTrainVisitor(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::Class_1_7CEC8DBE7729999B*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET))(this, npcDef);
		}

		::System::Boolean IsVisitorOnTrain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* VisitorConditionPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET))(this);
		}

		::System::Boolean CanVisitorOnTrain(::System::UInt32 visitorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET))(this, visitorID);
		}

		::System::Boolean CanVisitorOnTrain_1(::RPG::GameCore::TrainVisitorConfigRow* visitorRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET))(this, visitorRow);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMissionUnlockedVisitorAvatarIDs(::System::UInt32 missionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET))(this, missionID);
		}

		::RPG::Client::TrainVisitorInfo* GetTrainVisitorInfo(::System::UInt32 visitorID)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET))(this, visitorID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTrainVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>* GetAllTrainVisitorInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET))(this);
		}

		::System::Void SendGetTrainVisitorRegisterCsReq(::System::Boolean isByMutual)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET))(this, isByMutual);
		}

		::System::Void SendNewSupplementVisitorCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET))(this);
		}

		::System::Void TakeTrainVisitorReward(::System::UInt32 visitorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET))(this, visitorID);
		}

		::System::Boolean HasUnclaimedCompensationReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET))(this);
		}

		::System::Boolean IsVisitorSeenInRegister(::System::UInt32 visitorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET))(this, visitorID);
		}

		::System::Void RecordVisitorInRegisterSeen(::System::UInt32 visitorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET))(this, visitorID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET))(this);
		}

		::System::Void RefreshNewVisitorRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET))(this);
		}

		::System::Void RefreshRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _AddTrainVisitor(::Proto::SceneEntityInfo* entityInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET))(this, entityInfo);
		}

		::System::Void _InitVisitorBehaviorCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* get_TrainVisitorInfoDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET))(this);
		}

		::System::Void set_TrainVisitorInfoDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_VisitorBehaviorCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Void set_VisitorBehaviorCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_RewardRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdTrainRefreshTimeNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Int32 get__RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET))(this);
		}

		::System::Boolean _GetUnseenVisitorIDList_b__37_0(::RPG::Client::TrainVisitorInfo* visitorInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__37_0_OFFSET))(this, visitorInfo);
		}

		::System::Boolean _RefreshNewVisitorRedDot_b__38_0(::RPG::Client::TrainVisitorInfo* visitorInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__38_0_OFFSET))(this, visitorInfo);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
