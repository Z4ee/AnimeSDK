#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_748;
class Class_1_36F606812EC9EB69_7;
class Class_1_C44A70620E7F1D77;
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
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA392460)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA392820)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA392650)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA3927E0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA3926A0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA392860)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA392720)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA392760)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA3926E0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA3927A0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3933A0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA393380)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA393470)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xA393420)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3933C0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA393440)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xA393490)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA393460)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA393400)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA393430)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA3933E0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA393450)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xA393360)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xA393480)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA393350)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA392420)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA393410)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3933B0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA393390)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3933D0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xA3934A0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA3933F0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xA393370)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA392E50)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA391FB0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xA393130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGuideGameData_TypeDefinitionIndex = 55162;

	class RogueTournGuideGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x10
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x18
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x20
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x28
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x30
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x38
		::Class_1_E39756DED83F5D0A* _BlackboardInfo_k__BackingField; // 0x40
		::System::String* _ReportTransNo_k__BackingField; // 0x48
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x50
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x58
		::Class_0_16E4307DCC419505_748* _SettleResultFactory_k__BackingField; // 0x60
		::Class_1_C44A70620E7F1D77* _AvatarCollectionBuilder; // 0x68
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x70
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x74
		::System::UInt32 _AreaID_k__BackingField; // 0x78
		::System::UInt32 _MonsterEliteDropID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* GetRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_36F606812EC9EB69_7* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SYNC_OFFSET))(this, ctrlInfo);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAGROUP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournClassicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournClassicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* get_BlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_748* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_748*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, value);
		}
	};
}
