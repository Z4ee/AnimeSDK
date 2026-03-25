#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AvatarDemoType.h"

class Class_1_4CF8088A158DCE25;
class Class_1_FA4F4A67B1C04320_43;
namespace RPG::Client { class RoleTrialEntranceData; }
namespace RPG::Client { class RoleTrialInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLETRIALMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F3F30)
#define RPG_CLIENT_ROLETRIALMODULE_GETCANTAKEREWARDENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA3F4BA0)
#define RPG_CLIENT_ROLETRIALMODULE_GETROLETRIALENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0xA3F5950)
#define RPG_CLIENT_ROLETRIALMODULE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA3F6010)
#define RPG_CLIENT_ROLETRIALMODULE_GET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0xA3F6140)
#define RPG_CLIENT_ROLETRIALMODULE_GET_DEMOTYPE_OFFSET UNITYSDK_OFFSET(0xA3F6070)
#define RPG_CLIENT_ROLETRIALMODULE_GET_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0xA3F5FB0)
#define RPG_CLIENT_ROLETRIALMODULE_GET_ROLETRIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3F5FA0)
#define RPG_CLIENT_ROLETRIALMODULE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA3F5FC0)
#define RPG_CLIENT_ROLETRIALMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA3F3C70)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYEDBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xA3F4A00)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYED_OFFSET UNITYSDK_OFFSET(0xA3F5A30)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARSHOWTRIALENTRANCE_OFFSET UNITYSDK_OFFSET(0xA3F58C0)
#define RPG_CLIENT_ROLETRIALMODULE_ISREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA3F31B0)
#define RPG_CLIENT_ROLETRIALMODULE_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA3F3410)
#define RPG_CLIENT_ROLETRIALMODULE_ISSTAGEFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xA3F4E20)
#define RPG_CLIENT_ROLETRIALMODULE_ISSTAGEPASSED_OFFSET UNITYSDK_OFFSET(0xA3F49A0)
#define RPG_CLIENT_ROLETRIALMODULE_LEAVEROLETRIAL_OFFSET UNITYSDK_OFFSET(0xA3F4910)
#define RPG_CLIENT_ROLETRIALMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA3F42C0)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWCOLLABORATIONSTAGEID_OFFSET UNITYSDK_OFFSET(0xA3F56A0)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALAVATARID_OFFSET UNITYSDK_OFFSET(0xA3F5AE0)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALSTAGEID_OFFSET UNITYSDK_OFFSET(0xA3F5220)
#define RPG_CLIENT_ROLETRIALMODULE_STARTROLETRIAL_OFFSET UNITYSDK_OFFSET(0xA3F4880)
#define RPG_CLIENT_ROLETRIALMODULE_TAKESTAGEREWARD_OFFSET UNITYSDK_OFFSET(0xA3F4D50)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWAVATARNORMALTRIALPAGE_OFFSET UNITYSDK_OFFSET(0xA3F5CF0)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHACOLLABORATIONTRIALPAGE_OFFSET UNITYSDK_OFFSET(0xA3F5430)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHANORMALTRIALPAGE_OFFSET UNITYSDK_OFFSET(0xA3F4E80)
#define RPG_CLIENT_ROLETRIALMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F40E0)
#define RPG_CLIENT_ROLETRIALMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F4120)
#define RPG_CLIENT_ROLETRIALMODULE__ADDPASSEDSTAGE_OFFSET UNITYSDK_OFFSET(0xA3F61D0)
#define RPG_CLIENT_ROLETRIALMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F67A0)
#define RPG_CLIENT_ROLETRIALMODULE__INITENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0xA3F3D80)
#define RPG_CLIENT_ROLETRIALMODULE__ISINORIGINMAP_OFFSET UNITYSDK_OFFSET(0xA3F50C0)
#define RPG_CLIENT_ROLETRIALMODULE__ONGETTRIALACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA3F6260)
#define RPG_CLIENT_ROLETRIALMODULE__ONLEAVEANDCLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3F44A0)
#define RPG_CLIENT_ROLETRIALMODULE__ONLEAVETRIALACTIVITY_OFFSET UNITYSDK_OFFSET(0xA3F4720)
#define RPG_CLIENT_ROLETRIALMODULE__ONSTARTTRIALACTIVITY_OFFSET UNITYSDK_OFFSET(0xA3F4590)
#define RPG_CLIENT_ROLETRIALMODULE__ONTAKETRIALACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA3F65C0)
#define RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3F6440)
#define RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3F4780)
#define RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F6850)
#define RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3F67C0)
#define RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA3F6920)
#define RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F6860)
#define RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F68C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialModule_TypeDefinitionIndex = 55385;

	class RoleTrialModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FirstPassedStage; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CachePassedStage; // 0x18
		::RPG::Client::RoleTrialInstance* _RoleTrialInstance; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenRewardStage; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RoleTrialEntranceData*>* RoleTrialEntranceDataList; // 0x30
		::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_43*>* _AlreadyPlayedAvatar; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardEntranceID; // 0x40
		::System::UInt32 _OriginPlaneID; // 0x48
		::System::Int32 _DefaultShowNormalTrialAvatarID; // 0x4C
		::System::Int32 _DefaultShowCollaborationTrialGachaID; // 0x50
		::System::Int32 _DefaultShowCollaborationTrialStageID; // 0x54
		::System::Int32 _DefaultShowNormalTrialStageID; // 0x58
		::System::UInt32 _OriginFloorID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnStartTrialActivity(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONSTARTTRIALACTIVITY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLeaveTrialActivity(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONLEAVETRIALACTIVITY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLeaveAndClearInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONLEAVEANDCLEARINSTANCE_OFFSET))(this);
		}

		::System::Void _OnTrialActivityNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitEntranceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__INITENTRANCEDATA_OFFSET))(this);
		}

		::System::Void StartRoleTrial(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_STARTROLETRIAL_OFFSET))(this, stageID);
		}

		::System::Void LeaveRoleTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_LEAVEROLETRIAL_OFFSET))(this);
		}

		::System::Boolean IsRewardCanTake(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISREWARDCANTAKE_OFFSET))(this, stageID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardEntranceID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GETCANTAKEREWARDENTRANCEID_OFFSET))(this);
		}

		::System::Void TakeStageReward(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TAKESTAGEREWARD_OFFSET))(this, stageID);
		}

		::System::Boolean IsStageFirstPassed(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISSTAGEFIRSTPASSED_OFFSET))(this, stageID);
		}

		::System::Boolean IsStagePassed(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISSTAGEPASSED_OFFSET))(this, stageID);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISREWARDTAKEN_OFFSET))(this, stageID);
		}

		::System::Void TryAutoShowGachaNormalTrialPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHANORMALTRIALPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowNormalStageID(::System::Int32 defaultStageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALSTAGEID_OFFSET))(this, defaultStageID);
		}

		::System::Void TryAutoShowGachaCollaborationTrialPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHACOLLABORATIONTRIALPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowCollaborationStageID(::System::Int32 defaultStageID, ::System::Int32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWCOLLABORATIONSTAGEID_OFFSET))(this, defaultStageID, gachaID);
		}

		::System::Boolean IsAvatarShowTrialEntrance(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARSHOWTRIALENTRANCE_OFFSET))(this, avatarID);
		}

		::RPG::Client::RoleTrialEntranceData* GetRoleTrialEntranceData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RoleTrialEntranceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GETROLETRIALENTRANCEDATA_OFFSET))(this, avatarID);
		}

		::System::Boolean IsAvatarAlreadyPlayed(::System::UInt32 avatarID, ::System::UInt32 enhanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYED_OFFSET))(this, avatarID, enhanceID);
		}

		::System::Boolean IsAvatarAlreadyPlayedByStageID(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYEDBYSTAGEID_OFFSET))(this, stageID);
		}

		::System::Void SetAutoShowNormalAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void TryAutoShowAvatarNormalTrialPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWAVATARNORMALTRIALPAGE_OFFSET))(this);
		}

		::RPG::Client::RoleTrialInstance* get_RoleTrialInstance()
		{
			return ((::RPG::Client::RoleTrialInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_ROLETRIALINSTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsInTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_ISINTRIAL_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_AVATARID_OFFSET))(this);
		}

		::RPG::GameCore::AvatarDemoType get_DemoType()
		{
			return ((::RPG::GameCore::AvatarDemoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_DEMOTYPE_OFFSET))(this);
		}

		::System::Boolean get_CanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GET_CANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Void _AddPassedStage(::Class_1_4CF8088A158DCE25* passedStage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ADDPASSEDSTAGE_OFFSET))(this, passedStage);
		}

		::System::Void _OnGetTrialActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONGETTRIALACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrialActivityDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeTrialActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTAKETRIALACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _IsInOriginMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ISINORIGINMAP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
