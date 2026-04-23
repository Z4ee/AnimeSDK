#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_848;
class Class_1_C1A562AF201E3725_7;
class Class_1_D17CAE2570A8D8F0;
class Class_1_E39756DED83F5D0A;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
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
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0B80C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xB0B8480)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB0B82B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xB0B8440)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB0B8300)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xB0B84C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xB0B8380)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xB0B83C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB0B8340)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB0B8400)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xB0B96B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB0B9690)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xB0B9760)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xB0B9710)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB0B96D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xB0B9730)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xB0B9780)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0xB0B97C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xB0B9750)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xB0B96F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB0B9720)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xB0B9670)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB0B9740)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xB0B9650)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xB0B9770)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xB0B9640)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB0B97A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB0B8080)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xB0B9700)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xB0B96C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB0B96A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB0B96E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xB0B9790)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0xB0B97D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xB0B9680)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xB0B9660)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB0B97B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0B8D50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B7B70)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xB0B9140)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET UNITYSDK_OFFSET(0xB0B90A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameData_TypeDefinitionIndex = 62329;

	class RogueTournClassicGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x10
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x18
		::Class_1_D17CAE2570A8D8F0* _AvatarCollectionBuilder; // 0x20
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x28
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x30
		::Class_1_E39756DED83F5D0A* _BlackboardInfo_k__BackingField; // 0x38
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x40
		::System::String* _ReportTransNo_k__BackingField; // 0x48
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x50
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x58
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _DiffCompIDs; // 0x68
		::Class_0_16E4307DCC419505_848* _SettleResultFactory_k__BackingField; // 0x70
		::System::UInt32 _AreaID_k__BackingField; // 0x78
		::System::UInt32 _MonsterEliteDropID; // 0x7C
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x80
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x84
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x88
		::System::Boolean _IsGodMode_k__BackingField; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* GetRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C1A562AF201E3725_7* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET))(this, ctrlInfo);
		}

		::System::Void _SyncDiffComp(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* diffCompIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET))(this, diffCompIDs);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, value);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournClassicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournClassicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* get_BlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_848* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_848*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET))(this);
		}

		::System::Void set_IsGodMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET))(this, value);
		}
	};
}
