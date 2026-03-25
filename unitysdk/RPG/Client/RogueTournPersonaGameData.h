#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_748;
class Class_1_36F606812EC9EB69_7;
class Class_1_C03D623E9F32FBCB_97;
class Class_1_C03D623E9F32FBCB_98;
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
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournMiracleInfo; }
namespace RPG::Client { class RogueTournPersonaGameLevelInfo; }
namespace RPG::Client { class RogueTournPersonaModifierInfo; }
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }
namespace RPG::Client { class RogueTournPersonaStyleInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B2CF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA3B33A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA3B3920)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA3B3290)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA3B3100)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA3B33F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA3B31C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA3B3200)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA3B3140)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA3B3250)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xA3B3180)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xA3B3350)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xA3B32D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xA3B3310)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3B4A60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA3B4A40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B20)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3B4A80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_HEXINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xA3B4B70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0xA3B4BB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_MODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA3B4A20)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xA3B4A00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xA3B4B30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_STYLEINFO_OFFSET UNITYSDK_OFFSET(0xA3B4B50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA3B49F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA3B4B90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA3B2CB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA3B4AB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3B4A70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA3B4A50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3B4A90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xA3B4B80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0xA3B4BC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA3B4A30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xA3B4A10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA3B4BA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNCADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xA3AF8C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNCUPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA3AFA40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3B3970)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B24E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0xA3B3E60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameData_TypeDefinitionIndex = 55214;

	class RogueTournPersonaGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexInfo* _HexInfo_k__BackingField; // 0x10
		::System::String* _ReportTransNo_k__BackingField; // 0x18
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x28
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x30
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x38
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x40
		::RPG::Client::RogueTournPersonaStyleInfo* _StyleInfo_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_748* _SettleResultFactory_k__BackingField; // 0x50
		::Class_1_C44A70620E7F1D77* _AvatarCollectionBuilder; // 0x58
		::RPG::Client::RogueTournPersonaGameLevelInfo* _LevelInfo_k__BackingField; // 0x60
		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* _RoomCardDeckInfo_k__BackingField; // 0x68
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x70
		::Class_1_E39756DED83F5D0A* _BlackboardInfo_k__BackingField; // 0x78
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x80
		::RPG::Client::RogueTournPersonaModifierInfo* _ModifierInfo_k__BackingField; // 0x88
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x90
		::System::UInt32 _AreaID_k__BackingField; // 0x94
		::System::Boolean _IsFreeMode_k__BackingField; // 0x98
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x99
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x9C
		::System::UInt32 _MonsterEliteDropID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* GetRogueTournHexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNHEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* GetRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* GetRogueTournPersonaRoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* GetRogueTournPersonaStyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaModifierInfo* GetRogueTournPersonaModifierInfo()
		{
			return ((::RPG::Client::RogueTournPersonaModifierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_36F606812EC9EB69_7* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNC_OFFSET))(this, ctrlInfo);
		}

		::System::Void SyncAddModifier(::Class_1_C03D623E9F32FBCB_97* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_97*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNCADDMODIFIER_OFFSET))(this, proto);
		}

		::System::Void SyncUpdateModifier(::Class_1_C03D623E9F32FBCB_98* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SYNCUPDATEMODIFIER_OFFSET))(this, proto);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, value);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_AREAGROUP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* get_HexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_HEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* get_BlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_748* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_748*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* get_RoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ROOMCARDDECKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* get_StyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_STYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaModifierInfo* get_ModifierInfo()
		{
			return ((::RPG::Client::RogueTournPersonaModifierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_MODIFIERINFO_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_GET_ISFREEMODE_OFFSET))(this);
		}

		::System::Void set_IsFreeMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEDATA_SET_ISFREEMODE_OFFSET))(this, value);
		}
	};
}
