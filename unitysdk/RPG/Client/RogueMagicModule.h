#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_02CB8559BDBEC08D;
class Class_1_55B1E96AFC09BA51;
class Class_1_5D5F340EEA440344_1;
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class RogueMagicAreaCollection; }
namespace RPG::Client { class RogueMagicGameData; }
namespace RPG::Client { class RogueMagicHandbookInfo; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicSettleData; }
namespace RPG::Client { class RogueMagicStoryArchiveCollection; }
namespace RPG::Client { class RogueMagicStyleTypeCollection; }
namespace RPG::Client { class RogueMagicTalentInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA321EB0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET UNITYSDK_OFFSET(0xA324090)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xA314F90)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET UNITYSDK_OFFSET(0xA324B00)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0xA324AF0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0xA324B30)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA324BA0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET UNITYSDK_OFFSET(0xA324C00)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xA324C70)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET UNITYSDK_OFFSET(0xA324B50)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET UNITYSDK_OFFSET(0xA324B20)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0xA324B40)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET UNITYSDK_OFFSET(0xA324B10)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET UNITYSDK_OFFSET(0xA324CD0)
#define RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA321490)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA321BC0)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA322A40)
#define RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET UNITYSDK_OFFSET(0xA323C20)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA3236F0)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0xA3237C0)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0xA323210)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0xA323480)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA322DB0)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xA323F50)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET UNITYSDK_OFFSET(0xA323160)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA322D00)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA324D70)
#define RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0xA323DA0)
#define RPG_CLIENT_ROGUEMAGICMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA321020)
#define RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET UNITYSDK_OFFSET(0xA322990)
#define RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0xA3239B0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327B90)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327AC0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327090)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xA327C10)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0xA327350)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xA327160)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA325CE0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA3274D0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xA325D70)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327450)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xA3251A0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xA3275C0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327840)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET UNITYSDK_OFFSET(0xA327980)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET UNITYSDK_OFFSET(0xA325EC0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xA325B70)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET UNITYSDK_OFFSET(0xA3249A0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327C90)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET UNITYSDK_OFFSET(0xA327900)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA327D90)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xA324300)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET UNITYSDK_OFFSET(0xA327E30)
#define RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET UNITYSDK_OFFSET(0xA324180)
#define RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0xA3253E0)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA323100)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0xA322E40)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET UNITYSDK_OFFSET(0xA322F30)
#define RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0xA3227E0)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA327FE0)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA327EF0)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA327F80)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA327FF0)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA328050)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3280B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule_TypeDefinitionIndex = 54919;

	class RogueMagicModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PowerConfigPath; // 0x0
		::RPG::Client::RogueMagicHandbookInfo* _HandbookInfo; // 0x10
		::RPG::Client::ExprConditionChecker* _EntranceUnlockChecker; // 0x18
		::RPG::Client::RogueMagicAreaCollection* _AreaCollection; // 0x20
		::RPG::Client::RogueMagicStyleTypeCollection* _StyleTypeCollection; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _NewUnlockUnits; // 0x30
		::RPG::Client::ExprConditionChecker* _EntranceGuideLockChecker; // 0x38
		::RPG::Client::RogueMagicStoryArchiveCollection* _StoryArchiveCollection; // 0x40
		::Class_1_02CB8559BDBEC08D* _StoryData; // 0x48
		::System::Action* _WaitAutoShowEntrancePageCallback; // 0x50
		::RPG::Client::RogueMagicSettleData* _WaitAutoShowSettleData; // 0x58
		::System::Action* _GetMiscRealTimeDataScRspCallback; // 0x60
		::RPG::Client::RogueMagicGameData* _GameData; // 0x68
		::System::Action* _QueryScRspCallback; // 0x70
		::RPG::GameCore::RogueMagicPowerConfig* _PowerConfig; // 0x78
		::RPG::Client::RogueMagicTalentInfo* _TalentInfo; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _NewUnlockScepters; // 0x88
		::System::Boolean _NeedShowAreaNameAfterTeleport; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Boolean TryShowAreaNameAfterTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePagePromised(::System::UInt32 areaID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET))(this, areaID);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePageWithRogueSelectMainPagePromised(::System::UInt32 areaID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET))(this, areaID);
		}

		::System::Void SetAutoShowEntrancePage(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this, areaID);
		}

		::RPG::Client::Promises::IPromise* SettleGame()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET))(this);
		}

		::System::Void QuickSettleGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET))(this);
		}

		::System::Void TryGetNewUnlockItems(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*& unlockScepters, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*& unlockUnits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*&, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET))(this, unlockScepters, unlockUnits);
		}

		::RPG::GameCore::RogueMagicPowerConfig* GetPowerConfig()
		{
			return ((::RPG::GameCore::RogueMagicPowerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _DisposeStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _GetMiscRealTimeDataPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _ShowConfirmSettleDialog()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET))(this);
		}

		::System::Void _SetNewUnlockItems(::Class_1_5D5F340EEA440344_1* unlockInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5D5F340EEA440344_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET))(this, unlockInfo);
		}

		::System::Void _BlockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _UnblockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _OnRogueMagicStoryDataDispose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET))(this, arg);
		}

		::RPG::Client::RogueMagicGameData* get_GameData()
		{
			return ((::RPG::Client::RogueMagicGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::RogueMagicAreaCollection* get_AreaCollection()
		{
			return ((::RPG::Client::RogueMagicAreaCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicTalentInfo* get_TalentInfo()
		{
			return ((::RPG::Client::RogueMagicTalentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStoryArchiveCollection* get_StoryArchiveCollection()
		{
			return ((::RPG::Client::RogueMagicStoryArchiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::RogueMagicHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStyleTypeCollection* get_StyleTypeCollection()
		{
			return ((::RPG::Client::RogueMagicStyleTypeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET))(this);
		}

		static ::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET))();
		}

		::RPG::Client::IActivityQuestRewardData* get_QuestRewardData()
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsGuideLockEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET))(this);
		}

		::System::Boolean get_IsSkipSettleAutoShowEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET))(this);
		}

		::System::String* get_WebH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueMagicQueryScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicStartScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicLeaveScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicSettleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicBattleFailSettleInfoScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterRoomScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterLayerScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicLevelInfoUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicGetMiscRealTimeDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _SyncRogueCoin(::Class_1_55B1E96AFC09BA51* protoCtrl, ::System::Boolean isUIShowDelta)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_55B1E96AFC09BA51*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET))(this, protoCtrl, isUIShowDelta);
		}

		::System::Void _OnRogueMagicReviveAvatarScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicReviveCostUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicUnitComposeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicSetAutoDressInMagicUnitScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicAutoDressInMagicUnitChangeScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicAreaUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnableTalentScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicStoryInfoUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnSyncRogueHandbookDataUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _SettleGame_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
