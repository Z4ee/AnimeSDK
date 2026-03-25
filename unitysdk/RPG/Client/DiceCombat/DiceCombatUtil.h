#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class DiceCombatBigAvatarCardDisplayer; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DiceCombatDiceRarityIconDisplayer; }
namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client { class DiceCombatOutOfBattleDiceModel; }
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::DiceCombat { class DiceCombatAvatarLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET UNITYSDK_OFFSET(0x94909E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x9492060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKPROGRESSFINISH_OFFSET UNITYSDK_OFFSET(0x947EA80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x94902B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x948A0E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET UNITYSDK_OFFSET(0x948FC00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET UNITYSDK_OFFSET(0x948F890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET UNITYSDK_OFFSET(0x948FD30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9487D30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x948AA70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x948A9B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x948A820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET UNITYSDK_OFFSET(0x948D930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET UNITYSDK_OFFSET(0x948E0D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x948B280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLRANKLEVELINFO_OFFSET UNITYSDK_OFFSET(0x948AEA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0x9488930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET UNITYSDK_OFFSET(0x948F6D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET UNITYSDK_OFFSET(0x948F640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET UNITYSDK_OFFSET(0x948F830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x948D1F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBILLBOARDANDOPTIONPRESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x9487C60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET UNITYSDK_OFFSET(0x9490810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCARDMAXRARITY_OFFSET UNITYSDK_OFFSET(0x948BA90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEAPPEARANDDISAPPEAREFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0x948C470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSETIMEVALUE_OFFSET UNITYSDK_OFFSET(0x948C250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSEWITHDEFENDERADDITIVEPOINTTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x948C360)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHEALEFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0x948C570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHUGEDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x948C150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATROLLDICEMAXSIMULATIONTIME_OFFSET UNITYSDK_OFFSET(0x948C8F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0x948B790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEREMAINMILLISECOND_OFFSET UNITYSDK_OFFSET(0x948B690)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOUNTDOWNSTARTHINTVALUE_OFFSET UNITYSDK_OFFSET(0x948C050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0x947ED40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x9491F00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x948D3C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x9488490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECHANGEPERMISSIONITEMID_OFFSET UNITYSDK_OFFSET(0x948CE50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECOMBATMAINPAGEDICELIST_OFFSET UNITYSDK_OFFSET(0x948C9F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0x9488A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET UNITYSDK_OFFSET(0x948F040)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEMAXRARITY_OFFSET UNITYSDK_OFFSET(0x948B990)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET UNITYSDK_OFFSET(0x94886D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET UNITYSDK_OFFSET(0x9488B30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDUSTITEMID_OFFSET UNITYSDK_OFFSET(0x948BB90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET UNITYSDK_OFFSET(0x948FE60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9491820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETMAINPAGEROLLDICECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0x948C7F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0x947EAE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x9488320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGECAMPAIGNTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x948C730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGENORMALTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x948C670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDID_OFFSET UNITYSDK_OFFSET(0x948BC90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDREQUIREDLEVEL_OFFSET UNITYSDK_OFFSET(0x948BD90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x948CBD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGTYPEID_OFFSET UNITYSDK_OFFSET(0x948BE90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET UNITYSDK_OFFSET(0x948F0D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNDUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x948CD60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x948E700)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETPLAYERISFEMALE_OFFSET UNITYSDK_OFFSET(0x948CC90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0x948B120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKSCORE_OFFSET UNITYSDK_OFFSET(0x948AD30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET UNITYSDK_OFFSET(0x948F3E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0x947FA90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x9488290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET UNITYSDK_OFFSET(0x948CF50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETWEATHERDIALOGPERFORMANCETIME_OFFSET UNITYSDK_OFFSET(0x948B890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0x947E0F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9478C60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_PVPLOBBY_OFFSET UNITYSDK_OFFSET(0x9487AE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET UNITYSDK_OFFSET(0x9485F70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET UNITYSDK_OFFSET(0x9490640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x948A670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET UNITYSDK_OFFSET(0x9491760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0x9491B20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x948AC30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9488570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPNEWUNLOCKED_OFFSET UNITYSDK_OFFSET(0x948ADF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPUNLOCK_OFFSET UNITYSDK_OFFSET(0x948A500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISSHOWBILLBOARDANDOPTION_OFFSET UNITYSDK_OFFSET(0x9487BA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET UNITYSDK_OFFSET(0x9485E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9490DF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9491070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET UNITYSDK_OFFSET(0x948D800)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET UNITYSDK_OFFSET(0x948D630)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0x948D470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET UNITYSDK_OFFSET(0x94912B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0x9492120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET UNITYSDK_OFFSET(0x94914E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET UNITYSDK_OFFSET(0x94913E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0x94887F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x94903F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET UNITYSDK_OFFSET(0x9490360)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET UNITYSDK_OFFSET(0x94901A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x9491D80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET UNITYSDK_OFFSET(0x9491E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET UNITYSDK_OFFSET(0x9491950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x9492180)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET UNITYSDK_OFFSET(0x9488C00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil_TypeDefinitionIndex = 61935;

	class DiceCombatUtil : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_EntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil_TypeDefinitionIndex)->GetStaticField(0x11D20);
		}
		// static const ::System::String* Dice_Gameplay_State_Group_Name; // 0x0
		// static const ::System::String* Dice_Gameplay_In_State_Name; // 0x0
		// static const ::System::String* Dice_Gameplay_Out_State_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatModule* get_Module()
		{
			return ((::RPG::Client::DiceCombatModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_MODULE_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_GAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatPVPLobby* get_PVPLobby()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPLobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_PVPLOBBY_OFFSET))();
		}

		static ::System::Boolean IsShowBillboardAndOption()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISSHOWBILLBOARDANDOPTION_OFFSET))();
		}

		static ::System::UInt32 GetBillboardAndOptionPreSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBILLBOARDANDOPTIONPRESUBMISSIONID_OFFSET))();
		}

		static ::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* subMissionIDs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(subMissionIDs);
		}

		static ::RPG::GameCore::SubMissionState GetSubMissionState(::System::UInt32 subMissionID)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET))(subMissionID);
		}

		static ::System::Boolean CheckProgressFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKPROGRESSFINISH_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatStageInfo* GetNextStageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTSTAGEINFO_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatStageInfo* GetCurrentStageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENTSTAGEINFO_OFFSET))();
		}

		static ::System::UInt32 GetCurCampaignID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURCAMPAIGNID_OFFSET))();
		}

		static ::System::UInt32 GetNextCampaignID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTCAMPAIGNID_OFFSET))();
		}

		static ::System::UInt32 GetStageIDByCampaignID(::System::UInt32 campaignID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET))(campaignID);
		}

		static ::System::Boolean IsNewBossAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET))();
		}

		static ::System::String* GetDiceRarityIconPath(::System::UInt32 rare)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET))(rare);
		}

		static ::System::Void SortForEditTeamAvatarList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* list, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs, ::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET))(list, selectedAvatarIDs, stageID);
		}

		static ::System::String* GetAssetPathByDiceID(::System::UInt32 diceID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET))(diceID);
		}

		static ::System::String* GetDiceFaceMatPathByDiceID(::System::UInt32 diceID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET))(diceID);
		}

		static ::System::String* GetDiceTypeIconPathByID(::System::UInt32 diceID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET))(diceID);
		}

		static ::System::Int32 _SortForEditTeamAvatarListComparer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* b, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs, ::System::UInt32 stageID)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET))(a, b, selectedAvatarIDs, stageID);
		}

		static ::System::Boolean CheckShowProgressPageByStageID(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET))(stageID);
		}

		static ::System::Boolean IsPVPUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISACTIVITYINSCHEDULE_OFFSET))();
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYID_OFFSET))();
		}

		static ::RPG::Client::ActivityData* GetActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYDATA_OFFSET))();
		}

		static ::System::UInt32 GetActivityAvatarRewardQuestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYAVATARREWARDQUESTID_OFFSET))();
		}

		static ::System::Boolean IsMaxRankLevel(::System::UInt32 rankLevel)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET))(rankLevel);
		}

		static ::System::UInt32 GetRankScore()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKSCORE_OFFSET))();
		}

		static ::System::Boolean IsPVPNewUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPNEWUNLOCKED_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>* GetAllRankLevelInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLRANKLEVELINFO_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatRankLevelData* GetRankLevelInfoByScore(::System::UInt32 rankScore)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET))(rankScore);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* GetAllCommunicateDataByType(::RPG::GameCore::DiceCombatCommunicateType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>*(*)(::RPG::GameCore::DiceCombatCommunicateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET))(type);
		}

		static ::System::UInt32 GetCommunicateRemainMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEREMAINMILLISECOND_OFFSET))();
		}

		static ::System::UInt32 GetCommunicateCooldownMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATECOOLDOWNMILLISECOND_OFFSET))();
		}

		static ::System::UInt32 GetWeatherDialogPerformanceTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETWEATHERDIALOGPERFORMANCETIME_OFFSET))();
		}

		static ::System::UInt32 GetDiceMaxRarity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEMAXRARITY_OFFSET))();
		}

		static ::System::UInt32 GetCardMaxRarity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCARDMAXRARITY_OFFSET))();
		}

		static ::System::UInt32 GetDustItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDUSTITEMID_OFFSET))();
		}

		static ::System::UInt32 GetOfferingRewardCardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDID_OFFSET))();
		}

		static ::System::UInt32 GetOfferingRewardCardRequiredLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDREQUIREDLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetOfferingTypeID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGTYPEID_OFFSET))();
		}

		static ::System::UInt32 GetCountDownStartHintValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOUNTDOWNSTARTHINTVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatHugeDamageValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHUGEDAMAGEVALUE_OFFSET))();
		}

		static ::System::Single GetCombatDiceCollapseTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSETIMEVALUE_OFFSET))();
		}

		static ::System::Single GetCombatDiceCollapseWithDefenderAdditivePointTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSEWITHDEFENDERADDITIVEPOINTTIMEVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatDiceAppearAndDisappearEffectIDValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEAPPEARANDDISAPPEAREFFECTIDVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatHealEffectIDValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHEALEFFECTIDVALUE_OFFSET))();
		}

		static ::System::String* GetNPCEntrancePageNormalTitleImagePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGENORMALTITLEIMAGEPATH_OFFSET))();
		}

		static ::System::String* GetNPCEntrancePageCampaignTitleImagePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGECAMPAIGNTITLEIMAGEPATH_OFFSET))();
		}

		static ::System::UInt32 GetMainPageRollDiceCoolDownMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETMAINPAGEROLLDICECOOLDOWNMILLISECOND_OFFSET))();
		}

		static ::System::Int32 GetCombatRollDiceMaxSimulationTime()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATROLLDICEMAXSIMULATIONTIME_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiceCombatMainPageDiceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECOMBATMAINPAGEDICELIST_OFFSET))();
		}

		static ::RPG::Client::OfferingRewardData* GetOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDDATA_OFFSET))();
		}

		static ::System::Boolean GetPlayerIsFemale()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETPLAYERISFEMALE_OFFSET))();
		}

		static ::System::UInt32 GetOwnDustCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNDUSTCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetDiceChangePermissionItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECHANGEPERMISSIONITEMID_OFFSET))();
		}

		static ::System::UInt32 GetUpgradeAvatarDustCost(::System::UInt32 avatarRarity, ::System::UInt32 avatarLevel)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET))(avatarRarity, avatarLevel);
		}

		static ::System::UInt32 GetAvatarUpgradeMaxLevel(::System::UInt32 avatarRarity)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET))(avatarRarity);
		}

		static ::System::String* GetCurrencyIconPath(::System::UInt32 currencyID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET))(currencyID);
		}

		static ::System::Void SendDiceCombatUpgradeAvatarCsReq(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET))(avatarID);
		}

		static ::System::Void SendDiceCombatModifyAvatarDiceCsReq(::System::UInt32 avatarID, ::System::UInt32 newDiceID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET))(avatarID, newDiceID);
		}

		static ::System::Void SendDiceCombatMainPageRollDiceCsReq()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>* GetAllCollectionCardInfoByRarity(::System::UInt32 rarity)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET))(rarity);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetAllCollectionSpecialDiceInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetOwnedDiceInfoListByRecommendation(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET))(avatarID);
		}

		static ::RPG::Client::DiceCombatDiceConfigData* GetDiceInfoByID(::System::UInt32 diceID)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET))(diceID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetOrderedDiceInfoListByIDList(::System::Collections::Generic::List_1<::System::Int32>* diceIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET))(diceIDs);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>* GetSpecRuleGroupDatasByMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* turnIDGroupIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET))(turnIDGroupIDs);
		}

		static ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetAvatarInfoByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET))(avatarID);
		}

		static ::System::UInt32 GetAvatarDefaultSpecialDiceID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET))(avatarID);
		}

		static ::RPG::Client::DiceCombat::DiceCombatAvatarLevelData* GetAvatarLevelDataByID(::System::UInt32 levelID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET))(levelID);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* CreateOutOfBattleDiceModel(::System::UInt32 diceID, ::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET))(diceID, root);
		}

		static ::RPG::Client::DiceCombatBigAvatarCardDisplayer* CreateBigAvatarCardDisplayer(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::DiceCombatBigAvatarCardDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET))(root);
		}

		static ::RPG::Client::DiceCombatDiceRarityIconDisplayer* CreateRarityIconDisplayer(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::DiceCombatDiceRarityIconDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET))(root);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>* GetGlossaryDatasByIDList(::System::Collections::Generic::List_1<::System::UInt32>* glossaryIDs, ::System::Collections::Generic::List_1<::System::UInt32>* currentSelectedIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET))(glossaryIDs, currentSelectedIDs);
		}

		static ::System::Boolean IsUnlockChangeSpecialDice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET))();
		}

		static ::System::Void SwipeDiceModel(::UnityEngine::Transform* diceRoot, ::System::Single deltaX, ::System::Single deltaY, ::System::Single sensitivity)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET))(diceRoot, deltaX, deltaY, sensitivity);
		}

		static ::System::Boolean CheckReturnMazeByStageID(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET))(stageID);
		}

		static ::System::Int32 SortShopList(::RPG::Client::DiceCombat::DiceCombatShopData* shopDataA, ::RPG::Client::DiceCombat::DiceCombatShopData* shopDataB)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopData*, ::RPG::Client::DiceCombat::DiceCombatShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET))(shopDataA, shopDataB);
		}

		static ::System::Int32 SortShopDataList(::RPG::Client::DiceCombat::DiceCombatShopGoodData* shopGoodDataA, ::RPG::Client::DiceCombat::DiceCombatShopGoodData* shopGoodDataB)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopGoodData*, ::RPG::Client::DiceCombat::DiceCombatShopGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET))(shopGoodDataA, shopGoodDataB);
		}

		static ::System::Boolean HasEnoughCurrencyBuyGood(::System::UInt32 goodID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET))(goodID);
		}

		static ::System::Boolean HasEnoughCurrencyBuyMultiGoods(::System::Collections::Generic::List_1<::System::UInt32>* goodIDs)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET))(goodIDs);
		}

		static ::System::UInt32 GetBuyMultiGoodsCurrency(::System::Collections::Generic::List_1<::System::UInt32>* goodIDs)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET))(goodIDs);
		}

		static ::System::Void BindPlayableDirectorAnimator(::UnityEngine::Playables::PlayableDirector* director, ::System::String* streamName, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET))(director, streamName, animator);
		}

		static ::System::UInt32 RepeatedAvatarDustRewardCount(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET))(avatarID);
		}

		static ::System::UInt32 RepeatedDiceDustRewardCount(::System::UInt32 diceID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET))(diceID);
		}

		static ::System::Void SetChenLingItemMaterial(::UnityEngine::Transform* itemRoot, ::System::Int32 showPartID)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET))(itemRoot, showPartID);
		}

		static ::System::Void ShowCommonLoadingDialog(::System::Action* onLoadingDialogExit)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET))(onLoadingDialogExit);
		}

		static ::System::Void ShowAvatarSkillGlossaryDialog(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET))(avatarID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGlossaryIDListByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarSKillHasGlossary(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET))(avatarID);
		}

		static ::System::Void TryAcceptMatchInvitation(::System::UInt64 lobbyID)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET))(lobbyID);
		}

		static ::System::Void TryAcceptMatchInvitationByInviteData(::RPG::Client::ChatMessageInviteData* inviteData)
		{
			return ((::System::Void(*)(::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET))(inviteData);
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET))();
		}

		static ::System::Void TransferToEntrance(::System::Action* preTeleportCallback, ::System::Action* afterTeleportCallback)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET))(preTeleportCallback, afterTeleportCallback);
		}

		static ::System::Boolean CanTransferToEntrance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET))();
		}

		static ::System::UInt32 GetCurEarlyAccessContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET))();
		}

		static ::System::Void SetStreamingJobAllFinishCallbackOnce(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(callback);
		}
	};
}
