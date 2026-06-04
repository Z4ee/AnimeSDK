#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF9832A6EE2A67F_4;
class Class_1_69A5DDEA5F31A2DF_3;
class Class_1_D17272E82AE804C2_894;
class Class_1_FF220487FAB45279_5;
namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
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

#define RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET UNITYSDK_OFFSET(0xC85E0E0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC85DF40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC85E140)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xC85D600)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC85D9A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC85DAF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC85D750)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xC85D8A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xC85DE40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xC85DD40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xC85DC40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC85FC40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC85F750)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC85F520)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC85FD50)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xC85D650)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xC860360)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC85F8B0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC85FC00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xC85FC20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEFREEMODE_OFFSET UNITYSDK_OFFSET(0xC860260)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0xC8601F0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC85FD90)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC85D9F0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_HEXINFO_OFFSET UNITYSDK_OFFSET(0xC85D930)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xC85FDD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xC85FAE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xC85F960)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC85F5D0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC85DB40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC85D7A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC85FD70)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0xC860170)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xC85DED0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_SEASONTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xC8601D0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_STYLEINFO_OFFSET UNITYSDK_OFFSET(0xC85DDD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xC8601B0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xC85DCD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0xC860190)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC85F800)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC85FDB0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC85FD60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xC860380)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC85FC10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xC85FC30)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC85FDA0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC85FD80)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0xC860180)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_SEASONTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xC8601E0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0xC8601C0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0xC8601A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC85FDC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET UNITYSDK_OFFSET(0xC85E020)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC85D320)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC85EE00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC85F220)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0xC85ED40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET UNITYSDK_OFFSET(0xC85EC60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET UNITYSDK_OFFSET(0xC85D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSettleData_TypeDefinitionIndex = 63448;

	class RogueTournSettleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoinInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewardItems_k__BackingField; // 0x18
		::RPG::Client::RogueTournSettleTournExpInfoItem* _TournExpInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _AvatarDataList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _WeekChallengeRewardItems_k__BackingField; // 0x30
		::RPG::Client::IRogueTournGameScoreSettleResult* _SeasonTalentCoinInfo_k__BackingField; // 0x38
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScoreInfo_k__BackingField; // 0x40
		::RPG::Client::IRogueTournGame* _GameData; // 0x48
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x50
		::System::UInt32 _DivisionProgress_k__BackingField; // 0x54
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x58
		::RPG::Client::MongoObjectId _BuildRefID_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_1_FF220487FAB45279_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET))(this, a1);
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

		::System::Void SyncRewards(::Proto::ItemList* a1, ::Proto::ItemList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void CacheCurGameBuildRefID(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET))(this, a1);
		}

		::System::Void GetAllAndFinishedRoomCount(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void _Sync(::Class_1_FF220487FAB45279_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncScoreInfo(::Class_1_FF220487FAB45279_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncRogueCoin(::Class_1_4AF9832A6EE2A67F_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET))(this, a1);
		}

		::System::Void _SyncAvatarData(::Class_1_69A5DDEA5F31A2DF_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncDivisionLevel(::Class_1_D17272E82AE804C2_894* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_894*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET))(this, a1);
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

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_AvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_AvatarDataList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, a1);
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

		::System::Void set_FirstRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_WeekChallengeRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_WeekChallengeRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllCurrencyReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScoreInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET))(this);
		}

		::System::Void set_RogueScoreInfo(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournSettleTournExpInfoItem* get_TournExpInfo()
		{
			return ((::RPG::Client::RogueTournSettleTournExpInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET))(this);
		}

		::System::Void set_TournExpInfo(::RPG::Client::RogueTournSettleTournExpInfoItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournSettleTournExpInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoinInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_TalentCoinInfo(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_SeasonTalentCoinInfo()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_SEASONTALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_SeasonTalentCoinInfo(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_SEASONTALENTCOININFO_OFFSET))(this, a1);
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

		::System::Void set_BuildRefID(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET))(this, a1);
		}
	};
}
