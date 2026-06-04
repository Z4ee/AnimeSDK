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

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET UNITYSDK_OFFSET(0xB7BE990)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANAVATARUSEANYNUMBERDICEFORATTACK_OFFSET UNITYSDK_OFFSET(0xB7B7CE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xB7BFE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKPROGRESSFINISH_OFFSET UNITYSDK_OFFSET(0xB7AD2B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xB7BE140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xB7B7020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET UNITYSDK_OFFSET(0xB7BD910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET UNITYSDK_OFFSET(0xB7BD8C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET UNITYSDK_OFFSET(0xB7BDA40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB7B4CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB7B7A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB7B7950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB7B77C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET UNITYSDK_OFFSET(0xB7BB3E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET UNITYSDK_OFFSET(0xB7BBBC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB7B8550)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLRANKLEVELINFO_OFFSET UNITYSDK_OFFSET(0xB7B8030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0xB799610)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET UNITYSDK_OFFSET(0xB7BA250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET UNITYSDK_OFFSET(0xB7BD6F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARFINALATTACKVOICEPATH_OFFSET UNITYSDK_OFFSET(0xB7C1250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHEADICONIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7C05D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7C0C10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7C0F30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7BFF90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET UNITYSDK_OFFSET(0xB7B7E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET UNITYSDK_OFFSET(0xB7BD860)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARSHOPICONIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7C08F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xB7C02B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB7BACA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBANTUTORIALSPECIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xB7BA470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBILLBOARDANDOPTIONPRESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xB7B4BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET UNITYSDK_OFFSET(0xB7BE820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCARDMAXRARITY_OFFSET UNITYSDK_OFFSET(0xB7B8FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEAPPEARANDDISAPPEAREFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9AB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSETIMEVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSEWITHDEFENDERADDITIVEPOINTTIMEVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEV2COLLAPSETIMEVALUE_OFFSET UNITYSDK_OFFSET(0xB7B99A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHEALEFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9BB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHUGEDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9680)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATROLLDICEMAXSIMULATIONTIME_OFFSET UNITYSDK_OFFSET(0xB7B9F30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0xB7B8CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEDATAS_OFFSET UNITYSDK_OFFSET(0xB7B89C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEREMAINMILLISECOND_OFFSET UNITYSDK_OFFSET(0xB7B8BC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOUNTDOWNSTARTHINTVALUE_OFFSET UNITYSDK_OFFSET(0xB7B9580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xB7AD4C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xB7BFD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xB7BAE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xB7B5260)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECHANGEPERMISSIONITEMID_OFFSET UNITYSDK_OFFSET(0xB7BA910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECOMBATMAINPAGEDICELIST_OFFSET UNITYSDK_OFFSET(0xB7BA030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0xB7B5720)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET UNITYSDK_OFFSET(0xB7BCD20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEMAXRARITY_OFFSET UNITYSDK_OFFSET(0xB7B8EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET UNITYSDK_OFFSET(0xB7B54B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET UNITYSDK_OFFSET(0xB7B5840)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDUSTITEMID_OFFSET UNITYSDK_OFFSET(0xB7B90C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET UNITYSDK_OFFSET(0xB7BDB70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET UNITYSDK_OFFSET(0xB7BF700)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETMAINPAGEROLLDICECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0xB7B9E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xB7AD310)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xB7B50F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGECAMPAIGNTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB7B9D70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGENORMALTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB7B9CB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDID_OFFSET UNITYSDK_OFFSET(0xB7B91C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDREQUIREDLEVEL_OFFSET UNITYSDK_OFFSET(0xB7B92C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB7BA690)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGTYPEID_OFFSET UNITYSDK_OFFSET(0xB7B93C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_1_OFFSET UNITYSDK_OFFSET(0xB7BD0A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET UNITYSDK_OFFSET(0xB7BCF20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNDUSTCOUNT_OFFSET UNITYSDK_OFFSET(0xB7BA820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xB7BC240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETPLAYERISFEMALE_OFFSET UNITYSDK_OFFSET(0xB7BA750)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0xB7B83B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKSCORE_OFFSET UNITYSDK_OFFSET(0xB7B7EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET UNITYSDK_OFFSET(0xB7BD410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xB7AE160)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xB7B5050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET UNITYSDK_OFFSET(0xB7BAA10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETWEATHERDIALOGPERFORMANCETIME_OFFSET UNITYSDK_OFFSET(0xB7B8DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xB7A0510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_MODULE_OFFSET UNITYSDK_OFFSET(0xB7A6CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_PVPLOBBY_OFFSET UNITYSDK_OFFSET(0xB79EDA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET UNITYSDK_OFFSET(0xB7BE4D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET UNITYSDK_OFFSET(0xB7BE640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB7B7610)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET UNITYSDK_OFFSET(0xB7BF640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0xB7BFA20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET UNITYSDK_OFFSET(0xB7B7BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB7B5350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPNEWUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB7B7F80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7B7550)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISSHOWBILLBOARDANDOPTION_OFFSET UNITYSDK_OFFSET(0xB7B4B30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET UNITYSDK_OFFSET(0xB7BDF20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB7BED70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB7BEFF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET UNITYSDK_OFFSET(0xB7BB2B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET UNITYSDK_OFFSET(0xB7BB0E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB7BAF20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET UNITYSDK_OFFSET(0xB7BF220)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xB7BFF20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET UNITYSDK_OFFSET(0xB7BF440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET UNITYSDK_OFFSET(0xB7BF350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0xB7B55D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0xB7BE280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET UNITYSDK_OFFSET(0xB7BE1F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET UNITYSDK_OFFSET(0xB7BE030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xB7BFB80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET UNITYSDK_OFFSET(0xB7BFCA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET UNITYSDK_OFFSET(0xB7BF830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7C1570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__GETOWNEDDICEINFOLISTBYRECOMMENDATION_G__GETSORTPRIORITY_72_0_OFFSET UNITYSDK_OFFSET(0xB7C16A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET UNITYSDK_OFFSET(0xB7B5910)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil_TypeDefinitionIndex = 70670;

	class DiceCombatUtil : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_EntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil_TypeDefinitionIndex)->GetStaticField(0x2E80);
		}
		static ::System::UInt32* StaticGet_PvpUnlockSubMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil_TypeDefinitionIndex)->GetStaticField(0x2E84);
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

		static ::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(a1);
		}

		static ::RPG::GameCore::SubMissionState GetSubMissionState(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET))(a1);
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

		static ::System::UInt32 GetStageIDByCampaignID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET))(a1);
		}

		static ::System::Boolean IsNewBossAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET))();
		}

		static ::System::String* GetDiceRarityIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET))(a1);
		}

		static ::System::Void SortForEditTeamAvatarList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetAssetPathByDiceID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET))(a1);
		}

		static ::System::String* GetDiceFaceMatPathByDiceID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET))(a1);
		}

		static ::System::String* GetDiceTypeIconPathByID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET))(a1);
		}

		static ::System::Int32 _SortForEditTeamAvatarListComparer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckShowProgressPageByStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET))(a1);
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

		static ::System::Boolean IsMaxRankLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean CanAvatarUseAnyNumberDiceForAttack(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANAVATARUSEANYNUMBERDICEFORATTACK_OFFSET))(a1);
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

		static ::RPG::Client::DiceCombat::DiceCombatRankLevelData* GetRankLevelInfoByScore(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* GetAllCommunicateDataByType(::RPG::GameCore::DiceCombatCommunicateType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>*(*)(::RPG::GameCore::DiceCombatCommunicateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* GetCommunicateDatas(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::DiceCombatCommunicateType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::DiceCombatCommunicateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEDATAS_OFFSET))(a1, a2);
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

		static ::System::Single GetCombatDiceV2CollapseTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEV2COLLAPSETIMEVALUE_OFFSET))();
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

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvailableCommunicateIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBanTutorialSpecialStageIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBANTUTORIALSPECIALSTAGEIDLIST_OFFSET))();
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

		static ::System::UInt32 GetUpgradeAvatarDustCost(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetAvatarUpgradeMaxLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET))(a1);
		}

		static ::System::String* GetCurrencyIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET))(a1);
		}

		static ::System::Void SendDiceCombatUpgradeAvatarCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET))(a1);
		}

		static ::System::Void SendDiceCombatModifyAvatarDiceCsReq(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET))(a1, a2);
		}

		static ::System::Void SendDiceCombatMainPageRollDiceCsReq()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>* GetAllCollectionCardInfoByRarity(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetAllCollectionSpecialDiceInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetOwnedDiceInfoListByRecommendation(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatDiceConfigData* GetDiceInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetOrderedDiceInfoListByIDList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetOrderedDiceInfoListByIDList_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>* GetSpecRuleGroupDatasByMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetAvatarInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET))(a1);
		}

		static ::System::UInt32 GetAvatarDefaultSpecialDiceID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatAvatarLevelData* GetAvatarLevelDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* CreateOutOfBattleDiceModel(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::DiceCombatBigAvatarCardDisplayer* CreateBigAvatarCardDisplayer(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatBigAvatarCardDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatDiceRarityIconDisplayer* CreateRarityIconDisplayer(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatDiceRarityIconDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>* GetGlossaryDatasByIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsUnlockChangeSpecialDice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET))();
		}

		static ::System::Void SwipeDiceModel(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckReturnMazeByStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET))(a1);
		}

		static ::System::Int32 SortShopList(::RPG::Client::DiceCombat::DiceCombatShopData* a1, ::RPG::Client::DiceCombat::DiceCombatShopData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopData*, ::RPG::Client::DiceCombat::DiceCombatShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET))(a1, a2);
		}

		static ::System::Int32 SortShopDataList(::RPG::Client::DiceCombat::DiceCombatShopGoodData* a1, ::RPG::Client::DiceCombat::DiceCombatShopGoodData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopGoodData*, ::RPG::Client::DiceCombat::DiceCombatShopGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasEnoughCurrencyBuyGood(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET))(a1);
		}

		static ::System::Boolean HasEnoughCurrencyBuyMultiGoods(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET))(a1);
		}

		static ::System::UInt32 GetBuyMultiGoodsCurrency(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET))(a1);
		}

		static ::System::Void BindPlayableDirectorAnimator(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 RepeatedAvatarDustRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 RepeatedDiceDustRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET))(a1);
		}

		static ::System::Void SetChenLingItemMaterial(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void ShowCommonLoadingDialog(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET))(a1);
		}

		static ::System::Void ShowAvatarSkillGlossaryDialog(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGlossaryIDListByAvatarID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarSKillHasGlossary(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET))(a1);
		}

		static ::System::Void TryAcceptMatchInvitation(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET))(a1);
		}

		static ::System::Void TryAcceptMatchInvitationByInviteData(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET))();
		}

		static ::System::Void TransferToEntrance(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanTransferToEntrance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET))();
		}

		static ::System::UInt32 GetCurEarlyAccessContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET))();
		}

		static ::System::Void SetStreamingJobAllFinishCallbackOnce(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(a1);
		}

		static ::System::String* GetAvatarImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarUI3DImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUI3DIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHeadIconImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHEADICONIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarShopIconImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARSHOPICONIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHighLevelBGImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHighLevelBGUI3DImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGUI3DIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarFinalAttackVoicePath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARFINALATTACKVOICEPATH_OFFSET))(a1);
		}

		static ::System::Int32 _GetOwnedDiceInfoListByRecommendation_g__GetSortPriority_72_0(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__GETOWNEDDICEINFOLISTBYRECOMMENDATION_G__GETSORTPRIORITY_72_0_OFFSET))(a1);
		}
	};
}
