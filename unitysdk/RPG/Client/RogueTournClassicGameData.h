#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_899;
class Class_1_C1A562AF201E3725_7;
class Class_1_C22769E5B6B38BE7;
class Class_1_E95AD75CA23B8C6C;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
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

#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8075B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC807970)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC8077A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xC807930)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xC8077F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC8079B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC807870)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC8078B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC807830)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC8078F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC808B20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC808B00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xC808BD0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xC808B80)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC808B40)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC808BA0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xC808BF0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0xC808C30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC808BC0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xC808B60)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC808B90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xC808AE0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC808BB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xC808AC0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xC808BE0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC808AB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC808C10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC807570)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xC808B70)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC808B30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC808B10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC808B50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xC808C00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0xC808C40)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xC808AF0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xC808AD0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC808C20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC8081C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC807090)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xC8085E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET UNITYSDK_OFFSET(0xC808560)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameData_TypeDefinitionIndex = 63262;

	class RogueTournClassicGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x10
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x18
		::Class_1_C22769E5B6B38BE7* _BlackboardInfo_k__BackingField; // 0x20
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_899* _SettleResultFactory_k__BackingField; // 0x30
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x38
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _DiffCompIDs; // 0x48
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x50
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x58
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x60
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x68
		::System::String* _ReportTransNo_k__BackingField; // 0x70
		::System::UInt32 _MonsterEliteDropID; // 0x78
		::System::Boolean _IsGodMode_k__BackingField; // 0x7C
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x7D
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x80
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x84
		::System::UInt32 _AreaID_k__BackingField; // 0x88

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

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
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

		::Class_1_C22769E5B6B38BE7* GetRogueBlackboardInfo()
		{
			return ((::Class_1_C22769E5B6B38BE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C1A562AF201E3725_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncDiffComp(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET))(this, a1);
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

		::System::Void set_ServerControllerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, a1);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET))(this, a1);
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

		::Class_1_C22769E5B6B38BE7* get_BlackboardInfo()
		{
			return ((::Class_1_C22769E5B6B38BE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_899* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_899*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET))(this);
		}

		::System::Void set_IsGodMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET))(this, a1);
		}
	};
}
