#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_988;
class Class_1_8BDFF2A06D54FDB1;
class Class_1_C22769E5B6B38BE7;
class Class_1_E95AD75CA23B8C6C;
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

#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF585D0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xDF58AD0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xDF58900)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xDF58A90)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xDF58950)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xDF58B10)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xDF589D0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xDF58A10)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xDF58990)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xDF58A50)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xDF59CC0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xDF59CA0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xDF59DC0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xDF59D70)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xDF59CE0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xDF59D90)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xDF59DE0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xDF59DB0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xDF59D20)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xDF59D80)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xDF59D00)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xDF59DA0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xDF59C80)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xDF59DD0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xDF59C40)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xDF58590)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xDF59D30)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xDF59CD0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xDF59CB0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xDF59CF0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xDF59DF0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xDF59D10)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xDF59C90)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDF592C0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF580D0)
#define RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xDF595B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGuideGameData_TypeDefinitionIndex = 67646;

	class RogueTournGuideGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x10
		::System::String* _ReportTransNo_k__BackingField; // 0x18
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x20
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_988* _SettleResultFactory_k__BackingField; // 0x30
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x38
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x40
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x48
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x50
		::Class_1_C22769E5B6B38BE7* _BlackboardInfo_k__BackingField; // 0x58
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x60
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x68
		::System::UInt32 _MonsterEliteDropID; // 0x70
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x74
		::System::UInt32 _AreaID_k__BackingField; // 0x78
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x7C

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

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
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

		::Class_1_C22769E5B6B38BE7* GetRogueBlackboardInfo()
		{
			return ((::Class_1_C22769E5B6B38BE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_8BDFF2A06D54FDB1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8BDFF2A06D54FDB1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SYNC_OFFSET))(this, a1);
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

		::System::Void set_ServerControllerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, a1);
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

		::Class_1_C22769E5B6B38BE7* get_BlackboardInfo()
		{
			return ((::Class_1_C22769E5B6B38BE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_988* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGUIDEGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, a1);
		}
	};
}
