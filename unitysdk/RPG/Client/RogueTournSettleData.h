#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_BD2C8496C23D4C2D_3;
class Class_1_E621F95B064E7051_5;
class Class_1_F36D19497C26B279_3;
class Class_1_FA4F4A67B1C04320_819;
namespace Proto { class ItemList; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournGame; }
namespace RPG::Client { class IRogueTournGameScoreSettleResult; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournMiracleInfo; }
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }
namespace RPG::Client { class RogueTournPersonaStyleInfo; }
namespace RPG::Client { class RogueTournSettleTournExpInfoItem; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET UNITYSDK_OFFSET(0xA3D2F00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D2D00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA3D2F60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA3D24C0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA3D2800)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA3D2930)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA3D25F0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xA3D2720)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xA3D2C20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xA3D2B40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xA3D2A60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3D4990)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3D44A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA3D4270)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xA3D4A90)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xA3D2510)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xA3D5080)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3D4600)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3D4950)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3D4970)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEFREEMODE_OFFSET UNITYSDK_OFFSET(0xA3D4FA0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0xA3D4F30)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3D4AD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA3D2850)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_HEXINFO_OFFSET UNITYSDK_OFFSET(0xA3D27A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xA3D4B10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xA3D4830)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xA3D46B0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA3D4320)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA3D2980)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA3D2640)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xA3D4AB0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0xA3D4EB0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xA3D2CA0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_SEASONTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xA3D4F10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_STYLEINFO_OFFSET UNITYSDK_OFFSET(0xA3D2BC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xA3D4EF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xA3D2AE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0xA3D4ED0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA3D4550)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3D4AF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xA3D4AA0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xA3D50A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3D4960)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3D4980)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3D4AE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xA3D4AC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0xA3D4EC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_SEASONTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xA3D4F20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xA3D4F00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0xA3D4EE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA3D4B00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET UNITYSDK_OFFSET(0xA3D2DE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D21E0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA3D3BD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3D3F70)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0xA3D3B40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET UNITYSDK_OFFSET(0xA3D3A60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET UNITYSDK_OFFSET(0xA3D2290)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSettleData_TypeDefinitionIndex = 55324;

	class RogueTournSettleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewardItems_k__BackingField; // 0x10
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScoreInfo_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGameScoreSettleResult* _SeasonTalentCoinInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _AvatarDataList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _WeekChallengeRewardItems_k__BackingField; // 0x30
		::RPG::Client::RogueTournSettleTournExpInfoItem* _TournExpInfo_k__BackingField; // 0x38
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoinInfo_k__BackingField; // 0x40
		::RPG::Client::IRogueTournGame* _GameData; // 0x48
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x50
		::System::UInt32 _DivisionProgress_k__BackingField; // 0x54
		::RPG::Client::MongoObjectId _BuildRefID_k__BackingField; // 0x58
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x64

		::System::Void _ctor(::Class_1_E621F95B064E7051_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET))(this, proto);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* GetRogueTournHexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNHEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* GetRogueTournPersonaStyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* GetRogueTournPersonaRoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRewards(::Proto::ItemList* firstRewards, ::Proto::ItemList* weekChallengeRewards)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET))(this, firstRewards, weekChallengeRewards);
		}

		::System::Void CacheCurGameBuildRefID(::RPG::Client::MongoObjectId buildRefID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET))(this, buildRefID);
		}

		::System::Void GetAllAndFinishedRoomCount(::System::UInt32& allRoomCount, ::System::UInt32& finishedRoomCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET))(this, allRoomCount, finishedRoomCount);
		}

		::System::Void _Sync(::Class_1_E621F95B064E7051_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET))(this, proto);
		}

		::System::Void _SyncScoreInfo(::Class_1_E621F95B064E7051_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncRogueCoin(::Class_1_BD2C8496C23D4C2D_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET))(this, proto);
		}

		::System::Void _SyncAvatarData(::Class_1_F36D19497C26B279_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET))(this, proto);
		}

		::System::Void _SyncDivisionLevel(::Class_1_FA4F4A67B1C04320_819* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_819*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET))(this, proto);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISHARD_OFFSET))(this);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISGUIDE_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_AvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_AvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* get_HexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_HEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* get_StyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_STYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* get_RoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROOMCARDDECKINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_FirstRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_WeekChallengeRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_WeekChallengeRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllCurrencyReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScoreInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET))(this);
		}

		::System::Void set_RogueScoreInfo(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournSettleTournExpInfoItem* get_TournExpInfo()
		{
			return ((::RPG::Client::RogueTournSettleTournExpInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET))(this);
		}

		::System::Void set_TournExpInfo(::RPG::Client::RogueTournSettleTournExpInfoItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournSettleTournExpInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoinInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_TalentCoinInfo(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_SeasonTalentCoinInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_SEASONTALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_SeasonTalentCoinInfo(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_SEASONTALENTCOININFO_OFFSET))(this, value);
		}

		::System::Boolean get_EnableGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEGODMODE_OFFSET))(this);
		}

		::System::Boolean get_EnableFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEFREEMODE_OFFSET))(this);
		}

		::RPG::Client::MongoObjectId get_BuildRefID()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUILDREFID_OFFSET))(this);
		}

		::System::Void set_BuildRefID(::RPG::Client::MongoObjectId value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET))(this, value);
		}
	};
}
