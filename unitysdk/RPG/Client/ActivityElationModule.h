#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_1CBA230307F9C289_23;
class Class_1_21C7581DFE99F091_36;
namespace RPG::Client { class ActivityElationBattleInfo; }
namespace RPG::Client { class ActivityElationBattleResult; }
namespace RPG::Client { class ActivityElationStage; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x194DB9F0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETACTIVITYELATIONSTAGEBYID_OFFSET UNITYSDK_OFFSET(0x194DA380)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETALLSORTEDSTAGES_OFFSET UNITYSDK_OFFSET(0x194DAD10)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETNEWSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x194DB840)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x194DA610)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x194DA560)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x194DA630)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ONGOINGBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x194DA5D0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_HASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0x194DB610)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x194DA650)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x194DBA50)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x194DB2E0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0x194DB5B0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x194DA620)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x194DA640)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_STARTACTIVITYELATIONSTAGE_OFFSET UNITYSDK_OFFSET(0x194DAED0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x194DB480)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x194DADA0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x194DAA90)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__CLEARBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x194DC320)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x194DCA90)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONACTIVITYAVATAR_OFFSET UNITYSDK_OFFSET(0x194DC990)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x194DAFA0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x194DA930)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x194DC370)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x194DA740)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x194DCAE0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x194DC210)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONELATIONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x194DC100)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONENTERELATIONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x194DC010)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONGETELATIONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x194DBAB0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__SETSTAGERESULT_OFFSET UNITYSDK_OFFSET(0x194DBEE0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__STARTELATIONBATTLE_OFFSET UNITYSDK_OFFSET(0x194DB1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationModule_TypeDefinitionIndex = 58771;

	class ActivityElationModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>* _Stages; // 0x10
		::RPG::Client::ActivityElationBattleInfo* _OnGoingBattleInfo; // 0x18
		::RPG::Client::ActivityElationBattleResult* _BattleResult; // 0x20
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x28
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x2C
		::System::UInt32 _GuideMissionID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::Client::ActivityElationBattleInfo* get_OnGoingBattleInfo()
		{
			return ((::RPG::Client::ActivityElationBattleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ONGOINGBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Void set_ActivityRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SET_ACTIVITYREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Void set_GuideMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SET_GUIDEMISSIONID_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityElationStage* GetActivityElationStageByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityElationStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETACTIVITYELATIONSTAGEBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>* GetAllSortedStages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETALLSORTEDSTAGES_OFFSET))(this);
		}

		::System::Boolean TryShowLevelResultDialog(::RPG::Client::LuaUIController*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIController*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET))(this, a1);
		}

		::System::Void StartActivityElationStage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_STARTACTIVITYELATIONSTAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SETAUTOSHOWSTAGEID_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_HASANYNEWSTAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETNEWSTAGEIDS_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void _OnGetElationActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONGETELATIONACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterElationActivityStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONENTERELATIONACTIVITYSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnElationActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONELATIONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITREQ_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Void _SetStageResult(::Class_1_21C7581DFE99F091_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__SETSTAGERESULT_OFFSET))(this, a1);
		}

		::System::Void _StartElationBattle(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>* a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__STARTELATIONBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>* _GetElationAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_23*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONAVATARLISTFROMIDLIST_OFFSET))(this, a1);
		}

		::Class_1_1CBA230307F9C289_23* _GetElationActivityAvatar(::System::UInt32 a1)
		{
			return ((::Class_1_1CBA230307F9C289_23*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONACTIVITYAVATAR_OFFSET))(this, a1);
		}

		::System::Void _ClearBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__CLEARBATTLEINFO_OFFSET))(this);
		}

		::System::Void _Init_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INIT_B__16_0_OFFSET))(this);
		}
	};
}
