#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7039134DC553D20_RogueTournSelectType.h"
#include "unitysdk/Enum_3_5AA38DC400740F29.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_3A7B270FE0BE90AE_3;
class Class_1_3AD2528CD53B1639_11;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournDivisionData; }
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournPersonaGameStyleData; }
namespace RPG::Client { class RogueTournSettleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_1_OFFSET UNITYSDK_OFFSET(0xA3E6740)
#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_2_OFFSET UNITYSDK_OFFSET(0xA3E6790)
#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_OFFSET UNITYSDK_OFFSET(0xA3E6700)
#define RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET UNITYSDK_OFFSET(0xA3E48B0)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0xA3DE230)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0xA3E0FC0)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0xA3DE130)
#define RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xA3E3E30)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xA3E6F70)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET UNITYSDK_OFFSET(0xA3E7380)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xA3E6ED0)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xA3D4070)
#define RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET UNITYSDK_OFFSET(0xA3E5CC0)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET UNITYSDK_OFFSET(0xA3E3820)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET UNITYSDK_OFFSET(0xA3E2D00)
#define RPG_CLIENT_ROGUETOURNUTILS_GETBATTLEGAMESTYLEDATA_OFFSET UNITYSDK_OFFSET(0xA3E36C0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATAR_OFFSET UNITYSDK_OFFSET(0xA3E2F20)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET UNITYSDK_OFFSET(0xA3E2E80)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0xA3E3D80)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xA3E6C60)
#define RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET UNITYSDK_OFFSET(0xA3E6D30)
#define RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET UNITYSDK_OFFSET(0xA3E2B90)
#define RPG_CLIENT_ROGUETOURNUTILS_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET UNITYSDK_OFFSET(0xA3E5210)
#define RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xA3E5480)
#define RPG_CLIENT_ROGUETOURNUTILS_GETSEASONTALENTCOINTYPE_OFFSET UNITYSDK_OFFSET(0xA3E7530)
#define RPG_CLIENT_ROGUETOURNUTILS_GETSORTEDROOMCARDINGAME_OFFSET UNITYSDK_OFFSET(0xA3E2FC0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET UNITYSDK_OFFSET(0xA3E3870)
#define RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET UNITYSDK_OFFSET(0xA3E52C0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xA3E17F0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET UNITYSDK_OFFSET(0xA3E1E50)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xA3E1D70)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET UNITYSDK_OFFSET(0xA3E0F00)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET UNITYSDK_OFFSET(0xA3E0E50)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET UNITYSDK_OFFSET(0xA3E1770)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET UNITYSDK_OFFSET(0xA3E1300)
#define RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xA3E5360)
#define RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET UNITYSDK_OFFSET(0xA3E3B60)
#define RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xA3E5070)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET UNITYSDK_OFFSET(0xA3E4710)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0xA3E3FE0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xA3E50C0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xA3E5160)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET UNITYSDK_OFFSET(0xA3E6DD0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0xA3E66A0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA3C6A90)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0xA3E6650)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA3E6610)
#define RPG_CLIENT_ROGUETOURNUTILS_LOG_1_OFFSET UNITYSDK_OFFSET(0xA3E65C0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET UNITYSDK_OFFSET(0xA3E6580)
#define RPG_CLIENT_ROGUETOURNUTILS_MERGESAMEUIDCARD_OFFSET UNITYSDK_OFFSET(0xA3E3260)
#define RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xA3E67E0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0xA3E63A0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xA3E5530)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xA3E57C0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xA3E5A40)
#define RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xA3E3A30)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_1_OFFSET UNITYSDK_OFFSET(0xA3E4540)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA3E44E0)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA3E4290)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA3E4400)
#define RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xA3E3EE0)
#define RPG_CLIENT_ROGUETOURNUTILS_TRYDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3E7600)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET UNITYSDK_OFFSET(0xA3DE310)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHHEXRATE_OFFSET UNITYSDK_OFFSET(0xA3DED80)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET UNITYSDK_OFFSET(0xA3DF900)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET UNITYSDK_OFFSET(0xA3E0240)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET UNITYSDK_OFFSET(0xA3E0A50)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0xA3E1070)
#define RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET UNITYSDK_OFFSET(0xA3E4FC0)
#define RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0xA3E3C40)
#define RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xA3E18D0)
#define RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET UNITYSDK_OFFSET(0xA3E11E0)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0xA3E4630)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0xA3E4370)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils_TypeDefinitionIndex = 55314;

	class RogueTournUtils : public ::System::Object
	{
	public:
		// static const ::System::Double _SortToLastOpWeight; // 0x0
		// static const ::System::Double _SortToFirstOpWeight; // 0x0
		// static const ::System::Double _SortOpWeightCheckEpsilon; // 0x0
		// static const ::System::Single _BackScreenTransferFadeInTime; // 0x0
		// static const ::System::Single _BackScreenTransferFadeOutTime; // 0x0
		// static const ::System::Single _BackScreenTransferKeepTime; // 0x0

		static ::System::UInt32 CalcCurGameBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET))(data, selectingFormulaIDs, selectingHexMiracleIDs);
		}

		static ::System::UInt32 CalcBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueFormulaInfo* formulaInfo, ::RPG::Client::RogueTournHexInfo* hexInfo, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::Client::RogueTournHexInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET))(data, formulaInfo, hexInfo, selectingFormulaIDs, selectingHexMiracleIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueFormulaInfo* formulaInfo, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET))(data, formulaInfo, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchHexRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueTournHexInfo* hexInfo, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournHexInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHHEXRATE_OFFSET))(data, hexInfo, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET))(data, selectingFormulaIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingMiracleRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET))(data, selectingHexMiracleIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchTeamRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET))(data, config);
		}

		static ::System::Boolean IsBuildRefSortToLast(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefSortToFirst(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET))(data);
		}

		static ::System::Double CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET))(data);
		}

		static ::System::Double _CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::GameCore::RogueTournBuildRefSortConfig* config)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefSortConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET))(data, config);
		}

		static ::System::Boolean _IsCurVersionBuildRefForSort(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissingInTeam(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET))(team);
		}

		static ::System::Boolean IsBuildRefEssentialFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefOptionalFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET))(data);
		}

		static ::System::Boolean _IsBuildRefFormulaMissing(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* formulaDataList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET))(formulaDataList);
		}

		static ::System::Boolean IsBuildRefHexMiracleMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET))(data);
		}

		static ::System::String* GetGameLangCodeByCDNLangCode(::System::String* cdnLangCode)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET))(cdnLangCode);
		}

		static ::System::String* ConvertGameLangCode2API(::System::String* gameLangCode)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET))(gameLangCode);
		}

		static ::RPG::Client::RogueFormulaData* GetCachedFormulaData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET))(formulaID);
		}

		static ::RPG::Client::IAvatarInfoProvider* GetCachedAvatar(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATAR_OFFSET))(avatarRealID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetSortedRoomCardInGame(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* cards)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETSORTEDROOMCARDINGAME_OFFSET))(cards);
		}

		static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*> MergeSameUIDCard(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* roomCards, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* roomCardsBefore)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*>(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_MERGESAMEUIDCARD_OFFSET))(roomCards, roomCardsBefore);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleData* GetBattleGameStyleData()
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETBATTLEGAMESTYLEDATA_OFFSET))();
		}

		static ::RPG::GameCore::RogueTitanCategory ConvertFloorTypeToTitanCategory(::RPG::GameCore::RogueTournTitanFloorType floorType)
		{
			return ((::RPG::GameCore::RogueTitanCategory(*)(::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET))(floorType);
		}

		static ::System::UInt32 GetTournExpLevelByExp(::System::UInt32 tournExp)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET))(tournExp);
		}

		static ::System::Void ShowTournExpRewardPageFromActivityPanel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET))();
		}

		static ::System::Boolean IsExpDouble()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32& entranceID, ::System::UInt32& mappingInfoID)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(entranceID, mappingInfoID);
		}

		static ::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Void TransferToLauncher(::System::Action* preTeleportCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET))(preTeleportCallback);
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void TeleportIntoRogueScene(::Class_1_3A7B270FE0BE90AE_3* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportOutOfRogueScene(::Class_1_3A7B270FE0BE90AE_3* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportInsideRogueScene(::Class_1_3A7B270FE0BE90AE_3* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportInsideRogueScene_1(::Class_1_3AD2528CD53B1639_11* mapRotation, ::Class_1_14E02E1F6D70E487_1* scene, ::Class_1_14E02E1F6D70E487_2* lineup)
		{
			return ((::System::Void(*)(::Class_1_3AD2528CD53B1639_11*, ::Class_1_14E02E1F6D70E487_1*, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_1_OFFSET))(mapRotation, scene, lineup);
		}

		static ::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean crossMap)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(crossMap);
		}

		static ::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(isEnter);
		}

		static ::System::Boolean IsInEvolveRelicCocoonBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* BackToModeSelectPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET))();
		}

		static ::System::Boolean IsGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsPermanentGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsSeasonGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::UInt32 GetPassedSeasonGuideAreaCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET))();
		}

		static ::System::Boolean IsAnyFormalAreaPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET))();
		}

		static ::System::Boolean IsCurWeekChallengeExpired()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET))();
		}

		static ::System::UInt32 GetQuestRewardActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Void SetAllQuestRewardQuestsSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET))();
		}

		static ::System::Void SetQuestRewardTabGroupQuestsSeen(::System::UInt32 tabGroupID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET))(tabGroupID);
		}

		static ::System::Void SetQuestRewardTabQuestsSeen(::System::UInt32 tabID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET))(tabID);
		}

		static ::System::Void ClearOutdatedQuestRewardRedDotData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET))();
		}

		static ::System::Void SetActivityWeekChallengeSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET))();
		}

		static ::System::Void Log(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET))(message);
		}

		static ::System::Void Log_1(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOG_1_OFFSET))(pattern, args);
		}

		static ::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogWarning_1(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_1_OFFSET))(pattern, args);
		}

		static ::System::Void LogError(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET))(message);
		}

		static ::System::Void LogError_1(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_1_OFFSET))(pattern, args);
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_1_OFFSET))(condition, message);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_2_OFFSET))(condition, pattern, args);
		}

		static ::System::Void ReportBuffSelection(::Class_1_B7039134DC553D20_RogueTournSelectType selectType, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* selectedBuffs, ::System::Collections::Generic::List_1<::System::UInt32>* availableBuffIDs)
		{
			return ((::System::Void(*)(::Class_1_B7039134DC553D20_RogueTournSelectType, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET))(selectType, selectedBuffs, availableBuffIDs);
		}

		static ::RPG::Client::RogueTournDivisionData* GetCurDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET))();
		}

		static ::RPG::Client::RogueTournDivisionData* GetDivisionDataByLevel(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET))(divisionLevel);
		}

		static ::System::Boolean IsShowSettleDivsionUI(::RPG::Client::RogueTournSettleData* settleData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET))(settleData);
		}

		static ::System::Boolean CheckSettleIsChallengeDivision(::RPG::Client::RogueTournSettleData* settleData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET))(settleData);
		}

		static ::System::Boolean CheckLevelIsChallengeDivision(::System::UInt32 targetDivisionLevel)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET))(targetDivisionLevel);
		}

		static ::System::Boolean CheckGameIsChallengeDivision()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET))();
		}

		static ::System::Boolean CheckIsChallengeDivisionProgressDown(::RPG::Client::IRogueTournGameSettleResultComposition* settleResult)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournGameSettleResultComposition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET))(settleResult);
		}

		static ::Enum_3_5AA38DC400740F29 GetSeasonTalentCoinType()
		{
			return ((::Enum_3_5AA38DC400740F29(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETSEASONTALENTCOINTYPE_OFFSET))();
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>* _DelayedPromise(::System::Single delayedTime)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET))(delayedTime);
		}

		static ::System::Void TryDispose(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRYDISPOSE_OFFSET))(obj);
		}
	};
}
