#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_848;
class Class_1_C1A562AF201E3725_7;
class Class_1_D17CAE2570A8D8F0;
class Class_1_E39756DED83F5D0A;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace RPG::Client { class RogueTournClassicGameLevelInfo; }
namespace RPG::Client { class RogueTournMiracleInfo; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0xB111880)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB111670)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xB111AE0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB1118D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xB111AA0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB111920)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xB111B30)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xB1119A0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xB111A20)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB111960)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB111A60)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xB1119E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xB112820)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB112800)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xB1128F0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xB1128A0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB112840)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xB1128C0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0xB112940)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xB112960)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0xB1129A0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xB1128E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xB112880)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB1128B0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xB112860)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB1128D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xB1127E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xB112900)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xB112910)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0xB112920)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xB1127D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB112980)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB111630)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xB112890)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xB112830)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB112810)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB112850)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0xB112950)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xB112970)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0xB1129B0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xB112870)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xB1127F0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_TITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0xB112930)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB112990)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0xB112750)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB112120)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB111160)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xB1124E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanGameData_TypeDefinitionIndex = 62549;

	class RogueTournTitanGameData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_848* _SettleResultFactory_k__BackingField; // 0x10
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x18
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x20
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x28
		::Class_1_D17CAE2570A8D8F0* _AvatarCollectionBuilder; // 0x30
		::Class_1_E39756DED83F5D0A* _BlackboardInfo_k__BackingField; // 0x38
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x40
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x48
		::System::String* _ReportTransNo_k__BackingField; // 0x50
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x58
		::RPG::Client::RogueTournTitanBlessInfo* _TitanBlessInfo_k__BackingField; // 0x60
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x68
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x70
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x78
		::System::UInt32 _TitanBlessProgress_k__BackingField; // 0x7C
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x80
		::System::Boolean _HasPendingTitanBlessProgressUpdate_k__BackingField; // 0x81
		::System::Boolean _IsFreeMode_k__BackingField; // 0x82
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x84
		::System::UInt32 _AreaID_k__BackingField; // 0x88
		::System::UInt32 _MonsterEliteDropID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearPendingTitanBlessProgressUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* GetRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C1A562AF201E3725_7* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNC_OFFSET))(this, ctrlInfo);
		}

		::System::Void SyncTitanBlessProgress(::System::UInt32 curTitanBlessProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET))(this, curTitanBlessProgress);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAGROUP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournClassicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournClassicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* get_BlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_848* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_848*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET))(this);
		}

		::System::Void set_TitanBlessProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_TITANBLESSPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_HasPendingTitanBlessProgressUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Void set_HasPendingTitanBlessProgressUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISFREEMODE_OFFSET))(this);
		}

		::System::Void set_IsFreeMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISFREEMODE_OFFSET))(this, value);
		}
	};
}
