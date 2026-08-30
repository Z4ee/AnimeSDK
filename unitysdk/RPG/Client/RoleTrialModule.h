#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AvatarDemoType.h"

class Class_1_21C7581DFE99F091_3;
class Class_1_D17272E82AE804C2_61;
namespace RPG::Client { class RoleTrialEntranceData; }
namespace RPG::Client { class RoleTrialInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLETRIALMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A17FD0)
#define RPG_CLIENT_ROLETRIALMODULE_GETCANTAKEREWARDENTRANCEID_OFFSET UNITYSDK_OFFSET(0x16A190C0)
#define RPG_CLIENT_ROLETRIALMODULE_GETROLETRIALENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0x16A19DB0)
#define RPG_CLIENT_ROLETRIALMODULE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x16A1A3F0)
#define RPG_CLIENT_ROLETRIALMODULE_GET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x16A1A570)
#define RPG_CLIENT_ROLETRIALMODULE_GET_DEMOTYPE_OFFSET UNITYSDK_OFFSET(0x16A1A480)
#define RPG_CLIENT_ROLETRIALMODULE_GET_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0x16A1A300)
#define RPG_CLIENT_ROLETRIALMODULE_GET_ROLETRIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x16A18B10)
#define RPG_CLIENT_ROLETRIALMODULE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x16A1A370)
#define RPG_CLIENT_ROLETRIALMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x16A17C70)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYEDBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x16A18F30)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x16A19EB0)
#define RPG_CLIENT_ROLETRIALMODULE_ISAVATARSHOWTRIALENTRANCE_OFFSET UNITYSDK_OFFSET(0x16A19CD0)
#define RPG_CLIENT_ROLETRIALMODULE_ISREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x16A17170)
#define RPG_CLIENT_ROLETRIALMODULE_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x16A173C0)
#define RPG_CLIENT_ROLETRIALMODULE_ISSTAGEFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0x16A19380)
#define RPG_CLIENT_ROLETRIALMODULE_ISSTAGEPASSED_OFFSET UNITYSDK_OFFSET(0x16A18ED0)
#define RPG_CLIENT_ROLETRIALMODULE_LEAVEROLETRIAL_OFFSET UNITYSDK_OFFSET(0x16A18D80)
#define RPG_CLIENT_ROLETRIALMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x16A185E0)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWCOLLABORATIONSTAGEID_OFFSET UNITYSDK_OFFSET(0x16A19B10)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALAVATARID_OFFSET UNITYSDK_OFFSET(0x16A19F70)
#define RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALSTAGEID_OFFSET UNITYSDK_OFFSET(0x16A19750)
#define RPG_CLIENT_ROLETRIALMODULE_STARTROLETRIAL_OFFSET UNITYSDK_OFFSET(0x16A18CB0)
#define RPG_CLIENT_ROLETRIALMODULE_TAKESTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x16A19240)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWAVATARNORMALTRIALPAGE_OFFSET UNITYSDK_OFFSET(0x16A1A120)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHACOLLABORATIONTRIALPAGE_OFFSET UNITYSDK_OFFSET(0x16A19900)
#define RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHANORMALTRIALPAGE_OFFSET UNITYSDK_OFFSET(0x16A193E0)
#define RPG_CLIENT_ROLETRIALMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16A181C0)
#define RPG_CLIENT_ROLETRIALMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16A18200)
#define RPG_CLIENT_ROLETRIALMODULE__ADDPASSEDSTAGE_OFFSET UNITYSDK_OFFSET(0x16A1A650)
#define RPG_CLIENT_ROLETRIALMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1ADC0)
#define RPG_CLIENT_ROLETRIALMODULE__INITENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0x16A17D40)
#define RPG_CLIENT_ROLETRIALMODULE__ISINORIGINMAP_OFFSET UNITYSDK_OFFSET(0x16A195E0)
#define RPG_CLIENT_ROLETRIALMODULE__ONGETTRIALACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x16A1A6E0)
#define RPG_CLIENT_ROLETRIALMODULE__ONLEAVEANDCLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x16A18760)
#define RPG_CLIENT_ROLETRIALMODULE__ONLEAVETRIALACTIVITY_OFFSET UNITYSDK_OFFSET(0x16A18B50)
#define RPG_CLIENT_ROLETRIALMODULE__ONSTARTTRIALACTIVITY_OFFSET UNITYSDK_OFFSET(0x16A188B0)
#define RPG_CLIENT_ROLETRIALMODULE__ONTAKETRIALACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x16A1AB60)
#define RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x16A1A960)
#define RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYNOTIFY_OFFSET UNITYSDK_OFFSET(0x16A18BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialModule_TypeDefinitionIndex = 67883;

	class RoleTrialModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FirstPassedStage; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenRewardStage; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RoleTrialEntranceData*>* RoleTrialEntranceDataList; // 0x20
		::RPG::Client::RoleTrialInstance* _RoleTrialInstance; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardEntranceID; // 0x30
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_61*>* _AlreadyPlayedAvatar; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CachePassedStage; // 0x40
		::System::UInt32 _OriginPlaneID; // 0x48
		::System::Int32 _DefaultShowCollaborationTrialGachaID; // 0x4C
		::System::Int32 _DefaultShowNormalTrialStageID; // 0x50
		::System::Int32 _DefaultShowNormalTrialAvatarID; // 0x54
		::System::Int32 _DefaultShowCollaborationTrialStageID; // 0x58
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

		::System::Void _OnStartTrialActivity(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONSTARTTRIALACTIVITY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLeaveTrialActivity(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONLEAVETRIALACTIVITY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLeaveAndClearInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONLEAVEANDCLEARINSTANCE_OFFSET))(this);
		}

		::System::Void _OnTrialActivityNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitEntranceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__INITENTRANCEDATA_OFFSET))(this);
		}

		::System::Void StartRoleTrial(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_STARTROLETRIAL_OFFSET))(this, a1);
		}

		::System::Void LeaveRoleTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_LEAVEROLETRIAL_OFFSET))(this);
		}

		::System::Boolean IsRewardCanTake(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardEntranceID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GETCANTAKEREWARDENTRANCEID_OFFSET))(this);
		}

		::System::Void TakeStageReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TAKESTAGEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean IsStageFirstPassed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISSTAGEFIRSTPASSED_OFFSET))(this, a1);
		}

		::System::Boolean IsStagePassed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISSTAGEPASSED_OFFSET))(this, a1);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Void TryAutoShowGachaNormalTrialPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHANORMALTRIALPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowNormalStageID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALSTAGEID_OFFSET))(this, a1);
		}

		::System::Void TryAutoShowGachaCollaborationTrialPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_TRYAUTOSHOWGACHACOLLABORATIONTRIALPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowCollaborationStageID(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWCOLLABORATIONSTAGEID_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarShowTrialEntrance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARSHOWTRIALENTRANCE_OFFSET))(this, a1);
		}

		::RPG::Client::RoleTrialEntranceData* GetRoleTrialEntranceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RoleTrialEntranceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_GETROLETRIALENTRANCEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarAlreadyPlayed(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarAlreadyPlayedByStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_ISAVATARALREADYPLAYEDBYSTAGEID_OFFSET))(this, a1);
		}

		::System::Void SetAutoShowNormalAvatarID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE_SETAUTOSHOWNORMALAVATARID_OFFSET))(this, a1);
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

		::System::Void _AddPassedStage(::Class_1_21C7581DFE99F091_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ADDPASSEDSTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnGetTrialActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONGETTRIALACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrialActivityDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTRIALACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeTrialActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ONTAKETRIALACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInOriginMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE__ISINORIGINMAP_OFFSET))(this);
		}
	};
}
