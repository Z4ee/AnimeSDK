#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_355D5C2B1D92981B;
class Class_1_615A6094D352273A;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityLoginData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityPhaseData; }
namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ConditionCheckerHandle; }
namespace RPG::Client { class CustomizedActivityPanelData; }
namespace RPG::Client { class DailyLoginRewardActivityData; }
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class GridFightResidentActivityPanelData; }
namespace RPG::Client { class MultipleDropActivityData; }
namespace RPG::Client { class QuestChallengeActivityData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace RPG::Client { class RoleTrialActivityData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C23C90)
#define RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9C1C500)
#define RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9C1F8E0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C1B2C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C1D290)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYMODULEID_OFFSET UNITYSDK_OFFSET(0x9C1D170)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATA_OFFSET UNITYSDK_OFFSET(0x9C1D0B0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYQUESTTIMELIMITDATA_OFFSET UNITYSDK_OFFSET(0x9C20AC0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYSTRONGCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9C21390)
#define RPG_CLIENT_ACTIVITYMODULE_GETAETHERDIVIDEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21990)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLEYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21790)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLGRIDFIGHTRESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1C4A0)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1D7B0)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1F6C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETAVAILABLEROLETRIALACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x9C234A0)
#define RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21490)
#define RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBRESONANCEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21290)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C231E0)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGECOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C23190)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHESSROGUEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22B50)
#define RPG_CLIENT_ACTIVITYMODULE_GETCLOCKPARKACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21F50)
#define RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASEID_OFFSET UNITYSDK_OFFSET(0x9C1C1D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASERECEIVABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9C1C3F0)
#define RPG_CLIENT_ACTIVITYMODULE_GETDRINKMAKERACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21C90)
#define RPG_CLIENT_ACTIVITYMODULE_GETELATIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C23220)
#define RPG_CLIENT_ACTIVITYMODULE_GETELFRESTAURANTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22750)
#define RPG_CLIENT_ACTIVITYMODULE_GETEVOLVEBUILDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21D90)
#define RPG_CLIENT_ACTIVITYMODULE_GETFANTASTICSTORYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21190)
#define RPG_CLIENT_ACTIVITYMODULE_GETFATEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22850)
#define RPG_CLIENT_ACTIVITYMODULE_GETFIGHTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21090)
#define RPG_CLIENT_ACTIVITYMODULE_GETFIGHTFESTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22450)
#define RPG_CLIENT_ACTIVITYMODULE_GETFINDTROTTERACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C207C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETGIFTSROLEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C206C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETGUESSTHESILHOUETTEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C208C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETHELIOBUSACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21A90)
#define RPG_CLIENT_ACTIVITYMODULE_GETIDLELIVEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C23320)
#define RPG_CLIENT_ACTIVITYMODULE_GETLOCALLEGENDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22A50)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATCHTHREEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22050)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_1_OFFSET UNITYSDK_OFFSET(0x9C20ED0)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C20DD0)
#define RPG_CLIENT_ACTIVITYMODULE_GETMONOPOLYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21B90)
#define RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLAYCOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22950)
#define RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLEDROPACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x9C23510)
#define RPG_CLIENT_ACTIVITYMODULE_GETMUSEUMACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21690)
#define RPG_CLIENT_ACTIVITYMODULE_GETMUSICRHYTHMACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22650)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELDATATODISPLAY_OFFSET UNITYSDK_OFFSET(0x9C1B3E0)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1DA60)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9C1E780)
#define RPG_CLIENT_ACTIVITYMODULE_GETPHASEDATABYID_OFFSET UNITYSDK_OFFSET(0x9C1C0C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETPHASELIST_OFFSET UNITYSDK_OFFSET(0x9C1C3B0)
#define RPG_CLIENT_ACTIVITYMODULE_GETRAIDCOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22D50)
#define RPG_CLIENT_ACTIVITYMODULE_GETROGUEENDLESSACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22C50)
#define RPG_CLIENT_ACTIVITYMODULE_GETROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1F720)
#define RPG_CLIENT_ACTIVITYMODULE_GETROLETRIALACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C23420)
#define RPG_CLIENT_ACTIVITYMODULE_GETSILVERWOLFACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21590)
#define RPG_CLIENT_ACTIVITYMODULE_GETSPACEZOOACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C209C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETSTARFIGHTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22250)
#define RPG_CLIENT_ACTIVITYMODULE_GETSUMMONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22550)
#define RPG_CLIENT_ACTIVITYMODULE_GETSWORDTRAININGACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22150)
#define RPG_CLIENT_ACTIVITYMODULE_GETTELEVISIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22FD0)
#define RPG_CLIENT_ACTIVITYMODULE_GETTIMELIMITPANELDATATODISPLAY_OFFSET UNITYSDK_OFFSET(0x9C1D550)
#define RPG_CLIENT_ACTIVITYMODULE_GETTRACKPHOTOACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C22350)
#define RPG_CLIENT_ACTIVITYMODULE_GETTREASUREDUNGEONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C21890)
#define RPG_CLIENT_ACTIVITYMODULE_GET_ACTIVITYPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x9C1F590)
#define RPG_CLIENT_ACTIVITYMODULE_GET_CUSTOMIZEDPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x9C1F5B0)
#define RPG_CLIENT_ACTIVITYMODULE_GET_ISREWARDDIRECTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9C27AD0)
#define RPG_CLIENT_ACTIVITYMODULE_GET_REWARDCOUNTS_OFFSET UNITYSDK_OFFSET(0x9C27B30)
#define RPG_CLIENT_ACTIVITYMODULE_HASAVAILABLEACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1B380)
#define RPG_CLIENT_ACTIVITYMODULE_HASRESIDENTACTIVITYPANELDISPLAY_OFFSET UNITYSDK_OFFSET(0x9C24620)
#define RPG_CLIENT_ACTIVITYMODULE_HASTIMELIMITACTIVITYPANELDISPLAY_OFFSET UNITYSDK_OFFSET(0x9C23F90)
#define RPG_CLIENT_ACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9C23940)
#define RPG_CLIENT_ACTIVITYMODULE_ISACTIVITYPLACEATBOTTOM_OFFSET UNITYSDK_OFFSET(0x9C1D9C0)
#define RPG_CLIENT_ACTIVITYMODULE_ISHANDBOOKPHASEALLFINISHED_OFFSET UNITYSDK_OFFSET(0x9C1BF90)
#define RPG_CLIENT_ACTIVITYMODULE_ISQUESTREWARDNOTFETCHED_OFFSET UNITYSDK_OFFSET(0x9C1C120)
#define RPG_CLIENT_ACTIVITYMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9C23A90)
#define RPG_CLIENT_ACTIVITYMODULE_SENDGETACTIVITYDATAS_OFFSET UNITYSDK_OFFSET(0x9C24C10)
#define RPG_CLIENT_ACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x9C25750)
#define RPG_CLIENT_ACTIVITYMODULE_SET_ACTIVITYPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x9C1F5A0)
#define RPG_CLIENT_ACTIVITYMODULE_SET_CUSTOMIZEDPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x9C1F5C0)
#define RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARDBYACTIVITYLOGINID_OFFSET UNITYSDK_OFFSET(0x9C24B50)
#define RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARD_OFFSET UNITYSDK_OFFSET(0x9C24A40)
#define RPG_CLIENT_ACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9C25970)
#define RPG_CLIENT_ACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C25C00)
#define RPG_CLIENT_ACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C263F0)
#define RPG_CLIENT_ACTIVITYMODULE__ADDPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1E590)
#define RPG_CLIENT_ACTIVITYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C27B40)
#define RPG_CLIENT_ACTIVITYMODULE__CREATEACTIVITYPHASEMODULE_OFFSET UNITYSDK_OFFSET(0x9C1BAE0)
#define RPG_CLIENT_ACTIVITYMODULE__CREATEPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1E430)
#define RPG_CLIENT_ACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C23560)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C1BA30)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1CE60)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1EA30)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELTEMPLATELUT_OFFSET UNITYSDK_OFFSET(0x9C1F5D0)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEROGUERESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C20480)
#define RPG_CLIENT_ACTIVITYMODULE__GETDAILYLOGINREWARDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C26840)
#define RPG_CLIENT_ACTIVITYMODULE__GETTIMELIMITPANELDATATODISPLAY_B__26_0_OFFSET UNITYSDK_OFFSET(0x9C2DF40)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C1B7A0)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYMODULE_OFFSET UNITYSDK_OFFSET(0x9C23A30)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYPHASEMODULE_OFFSET UNITYSDK_OFFSET(0x9C1BBE0)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYRELATEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1E210)
#define RPG_CLIENT_ACTIVITYMODULE__INITCUSTOMIZEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1E3E0)
#define RPG_CLIENT_ACTIVITYMODULE__INITGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1CA20)
#define RPG_CLIENT_ACTIVITYMODULE__INITLOGINDATA_OFFSET UNITYSDK_OFFSET(0x9C1CF10)
#define RPG_CLIENT_ACTIVITYMODULE__INITPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1DE20)
#define RPG_CLIENT_ACTIVITYMODULE__INITPANELTEMPLATELUT_OFFSET UNITYSDK_OFFSET(0x9C1DEA0)
#define RPG_CLIENT_ACTIVITYMODULE__INITROGUERESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1FE00)
#define RPG_CLIENT_ACTIVITYMODULE__ISINORIGINMAP_OFFSET UNITYSDK_OFFSET(0x9C25A90)
#define RPG_CLIENT_ACTIVITYMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x9C26D80)
#define RPG_CLIENT_ACTIVITYMODULE__ONCHALLENGERAIDNOTIFY_OFFSET UNITYSDK_OFFSET(0x9C27070)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDGETLOGINACTIVITYSCRSP_OFFSET UNITYSDK_OFFSET(0x9C265B0)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9C26ED0)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDTAKELOGINACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9C26990)
#define RPG_CLIENT_ACTIVITYMODULE__ONGETACTIVITYREWARDCOUNTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9C27120)
#define RPG_CLIENT_ACTIVITYMODULE__ONGETALLACTIVITYREWARDCOUNTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9C276D0)
#define RPG_CLIENT_ACTIVITYMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0x9C25DA0)
#define RPG_CLIENT_ACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x9C25E40)
#define RPG_CLIENT_ACTIVITYMODULE__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0x9C26390)
#define RPG_CLIENT_ACTIVITYMODULE__ONTAKECHALLENGERAIDREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9C26F70)
#define RPG_CLIENT_ACTIVITYMODULE__PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9C24D60)
#define RPG_CLIENT_ACTIVITYMODULE__PREPAREROGUERESIDENTACTIVITYPANELCONDITIONS_OFFSET UNITYSDK_OFFSET(0x9C20270)
#define RPG_CLIENT_ACTIVITYMODULE__TRYCREATEANDADDCUSTOMIZEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x9C1E8B0)
#define RPG_CLIENT_ACTIVITYMODULE__TRYMARKOLDFOROLDPANELID_OFFSET UNITYSDK_OFFSET(0x9C1F1C0)
#define RPG_CLIENT_ACTIVITYMODULE__TRYRECORDOLDPANELIDSEEN_OFFSET UNITYSDK_OFFSET(0x9C1EFF0)
#define RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C2E310)
#define RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9C2E220)
#define RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9C2E2B0)
#define RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C2E320)
#define RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C2E380)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule_TypeDefinitionIndex = 56888;

	class ActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_OldPanelID2ActivityIDLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule_TypeDefinitionIndex)->GetStaticField(0x34BB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityPanelTemplate, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__PanelTemplateConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityPanelTemplate, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule_TypeDefinitionIndex)->GetStaticField(0x34BB8);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _phaseList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _PanelID2TemplateIndexLUT; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueResidentActivityPanelData*>* _RogueResidentPanelDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>* _ActivityPanelDataContainer_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _OldPanelIDSeen; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelTemplate>* _PanelTemplates; // 0x38
		::Class_1_355D5C2B1D92981B* _RewardCountProxyFactory; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLoginData*>* ActivityLoginDataDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>* _phaseMap; // 0x50
		::Class_1_615A6094D352273A* _PanelDataProxyFactory; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityData*>* ActivityDataDict; // 0x60
		::RPG::Client::ActivityRewardCountCollection* _RewardCounts; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightResidentActivityPanelData*>* _GridFightResidentPanelDatas; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* _CustomizedPanelDataContainer_k__BackingField; // 0x78
		::RPG::Client::ExprConditionChecker* _RewardDirectionUnlockConditionChecker; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>* _AvailablePanelDatas; // 0x88
		::RPG::Client::ConditionCheckerHandle* _RewardDirectionUnlockConditionMetHandler; // 0x90
		::System::UInt32 _OriginPlaneID; // 0x98
		::System::UInt32 _OriginFloorID; // 0x9C
		::System::Int32 _AutoShowPanelID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CCTOR_OFFSET))();
		}

		::RPG::Client::ActivityData* GetActivityData(::System::UInt32 activityID)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYDATA_OFFSET))(this, activityID);
		}

		::System::Boolean HasAvailableActivityPanelData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_HASAVAILABLEACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Void _InitActivityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _DisposeActivityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__DISPOSEACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _CreateActivityPhaseModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CREATEACTIVITYPHASEMODULE_OFFSET))(this);
		}

		::System::Void _InitActivityPhaseModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYPHASEMODULE_OFFSET))(this);
		}

		::System::Boolean IsHandbookPhaseAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ISHANDBOOKPHASEALLFINISHED_OFFSET))(this);
		}

		::RPG::Client::ActivityPhaseData* GetPhaseDataByID(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::ActivityPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPHASEDATABYID_OFFSET))(this, phaseID);
		}

		::System::Boolean IsQuestRewardNotFetched(::System::UInt32 questID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ISQUESTREWARDNOTFETCHED_OFFSET))(this, questID);
		}

		::System::UInt32 GetCurrentPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASEID_OFFSET))(this);
		}

		::System::UInt32 GetCurrentPhaseReceivableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASERECEIVABLECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPhaseList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPHASELIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightResidentActivityPanelData*>* GetAllGridFightResidentPanelData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightResidentActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETALLGRIDFIGHTRESIDENTPANELDATA_OFFSET))(this);
		}

		::System::UInt32 FindCurrentGridFightActivityIDForRewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_OFFSET))(this);
		}

		::System::Void _InitGridFightResidentActivityPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Void _DisposeGridFightResidentActivityPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__DISPOSEGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Void _InitLoginData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITLOGINDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityLoginData* GetActivityLoginData(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATA_OFFSET))(this, id);
		}

		::RPG::Client::ActivityLoginData* GetActivityLoginDataByModuleID(::System::UInt32 moduleID)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYMODULEID_OFFSET))(this, moduleID);
		}

		::RPG::Client::ActivityLoginData* GetActivityLoginDataByActivityID(::System::UInt32 activityID)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYACTIVITYID_OFFSET))(this, activityID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>* GetPanelDataToDisplay()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPANELDATATODISPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>* GetTimeLimitPanelDataToDisplay()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTIMELIMITPANELDATATODISPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>* GetAllPanelData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETALLPANELDATA_OFFSET))(this);
		}

		::System::Boolean IsActivityPlaceAtBottom(::RPG::Client::ActivityPanelData* activityPanelData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ISACTIVITYPLACEATBOTTOM_OFFSET))(this, activityPanelData);
		}

		::RPG::Client::ActivityPanelData* GetPanelData(::System::UInt32 panelID, ::System::UInt32 activityID)
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPANELDATA_OFFSET))(this, panelID, activityID);
		}

		::System::Void _InitPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITPANELDATA_OFFSET))(this);
		}

		::System::Void _InitActivityRelatedPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYRELATEDPANELDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* _CreatePanelData(::RPG::Client::ActivityData* activityData)
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CREATEPANELDATA_OFFSET))(this, activityData);
		}

		::System::Void _AddPanelData(::RPG::Client::ActivityPanelData* panelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDPANELDATA_OFFSET))(this, panelData);
		}

		::System::Void _InitCustomizedPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITCUSTOMIZEDPANELDATA_OFFSET))(this);
		}

		::System::Void _TryCreateAndAddCustomizedPanelData(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__TRYCREATEANDADDCUSTOMIZEDPANELDATA_OFFSET))(this, panelID);
		}

		::System::Void _DisposePanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELDATA_OFFSET))(this);
		}

		::System::Void _TryRecordOldPanelIDSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__TRYRECORDOLDPANELIDSEEN_OFFSET))(this);
		}

		::System::Void _TryMarkOldForOldPanelID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__TRYMARKOLDFOROLDPANELID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>* get_ActivityPanelDataContainer()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GET_ACTIVITYPANELDATACONTAINER_OFFSET))(this);
		}

		::System::Void set_ActivityPanelDataContainer(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SET_ACTIVITYPANELDATACONTAINER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* get_CustomizedPanelDataContainer()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GET_CUSTOMIZEDPANELDATACONTAINER_OFFSET))(this);
		}

		::System::Void set_CustomizedPanelDataContainer(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SET_CUSTOMIZEDPANELDATACONTAINER_OFFSET))(this, value);
		}

		::RPG::Client::ActivityPanelTemplate GetPanelTemplate(::RPG::Client::ActivityData* activityData, ::System::UInt32 panelID)
		{
			return ((::RPG::Client::ActivityPanelTemplate(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPANELTEMPLATE_OFFSET))(this, activityData, panelID);
		}

		::System::Void _InitPanelTemplateLUT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITPANELTEMPLATELUT_OFFSET))(this);
		}

		::System::Void _DisposePanelTemplateLUT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELTEMPLATELUT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueResidentActivityPanelData*>* GetAllRogueResidentPanelData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueResidentActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETALLROGUERESIDENTPANELDATA_OFFSET))(this);
		}

		::RPG::Client::RogueResidentActivityPanelData* GetRogueResidentPanelData(::RPG::GameCore::RogueSubMode rogueSubMode)
		{
			return ((::RPG::Client::RogueResidentActivityPanelData*(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETROGUERESIDENTPANELDATA_OFFSET))(this, rogueSubMode);
		}

		::System::UInt32 FindCurrentTournRogueActivityIDForRewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_OFFSET))(this);
		}

		::System::Void _InitRogueResidentActivityPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITROGUERESIDENTACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Void _PrepareRogueResidentActivityPanelConditions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__PREPAREROGUERESIDENTACTIVITYPANELCONDITIONS_OFFSET))(this);
		}

		::System::Void _DisposeRogueResidentActivityPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__DISPOSEROGUERESIDENTACTIVITYPANELDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetGiftsRoleActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETGIFTSROLEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetFindTrotterActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETFINDTROTTERACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetGuessTheSilhouetteActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETGUESSTHESILHOUETTEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetSpaceZooActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETSPACEZOOACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetActivityQuestTimeLimitData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYQUESTTIMELIMITDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMaterialSubmissionActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMaterialSubmissionActivityData_1(::RPG::GameCore::MaterialSubmissionType type)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::MaterialSubmissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_1_OFFSET))(this, type);
		}

		::RPG::Client::ActivityData* GetFightActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETFIGHTACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetFantasticStoryActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETFANTASTICSTORYACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetBoxingClubResonanceActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBRESONANCEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetActivityStrongChallengeData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYSTRONGCHALLENGEDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetBoxingClubActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetSilverWolfActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETSILVERWOLFACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMuseumActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMUSEUMACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetAlleyActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETALLEYACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetTreasureDungeonActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTREASUREDUNGEONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetAetherDivideActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETAETHERDIVIDEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetHeliobusActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETHELIOBUSACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMonopolyActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMONOPOLYACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetDrinkMakerActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETDRINKMAKERACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetEvolveBuildActivityData(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETEVOLVEBUILDACTIVITYDATA_OFFSET))(this, season);
		}

		::RPG::Client::ActivityData* GetClockParkActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCLOCKPARKACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMatchThreeActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMATCHTHREEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetSwordTrainingActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETSWORDTRAININGACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetStarFightActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETSTARFIGHTACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetTrackPhotoActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTRACKPHOTOACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetFightFestActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETFIGHTFESTACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetSummonActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETSUMMONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMusicRhythmActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMUSICRHYTHMACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetElfRestaurantActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETELFRESTAURANTACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetFateActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETFATEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMultiplayCollectionActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLAYCOLLECTIONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetLocalLegendActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETLOCALLEGENDACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetChessRogueActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCHESSROGUEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRogueEndlessActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETROGUEENDLESSACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRaidCollectionActivityData(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETRAIDCOLLECTIONACTIVITYDATA_OFFSET))(this, type);
		}

		::RPG::Client::ActivityData* GetTelevisionActivityData(::System::UInt32 season)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTELEVISIONACTIVITYDATA_OFFSET))(this, season);
		}

		::RPG::Client::ActivityPanelData* GetChallengeCollectionActivityData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGECOLLECTIONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::QuestChallengeActivityData* GetChallengeActivityData()
		{
			return ((::RPG::Client::QuestChallengeActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetElationActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETELATIONACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetIdleLiveActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETIDLELIVEACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::RoleTrialActivityData* GetRoleTrialActivityData(::System::UInt32 id)
		{
			return ((::RPG::Client::RoleTrialActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETROLETRIALACTIVITYDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RoleTrialActivityData*>* GetAvailableRoleTrialActivityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RoleTrialActivityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETAVAILABLEROLETRIALACTIVITYDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultipleDropActivityData*>* GetMultipleDropActivityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultipleDropActivityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLEDROPACTIVITYDATALIST_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasTimeLimitActivityPanelDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_HASTIMELIMITACTIVITYPANELDISPLAY_OFFSET))(this);
		}

		::System::Boolean HasResidentActivityPanelDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_HASRESIDENTACTIVITYPANELDISPLAY_OFFSET))(this);
		}

		::System::Void TakeLoginReward(::System::UInt32 panelID, ::System::UInt32 takenDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARD_OFFSET))(this, panelID, takenDay);
		}

		::System::Void TakeLoginRewardByActivityLoginID(::System::UInt32 loginID, ::System::UInt32 takenDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARDBYACTIVITYLOGINID_OFFSET))(this, loginID, takenDay);
		}

		::System::Void SendGetActivityDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SENDGETACTIVITYDATAS_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Int32 defaultPanelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, defaultPanelID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONSERVERPREFREFRESH_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetLoginActivityScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDGETLOGINACTIVITYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeLoginActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDTAKELOGINACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRaidInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeChallengeRaidRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONTAKECHALLENGERAIDREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChallengeRaidNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCHALLENGERAIDNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetActivityRewardCountDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONGETACTIVITYREWARDCOUNTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAllActivityRewardCountDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONGETALLACTIVITYREWARDCOUNTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::DailyLoginRewardActivityData* _GetDailyLoginRewardActivityData(::System::UInt32 activityID)
		{
			return ((::RPG::Client::DailyLoginRewardActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__GETDAILYLOGINREWARDACTIVITYDATA_OFFSET))(this, activityID);
		}

		::System::Void _NotifyActivityReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__NOTIFYACTIVITYREWARD_OFFSET))(this, itemList);
		}

		::System::Void _InitActivityModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYMODULE_OFFSET))(this);
		}

		::System::Void _PrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__PREPAREMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean _IsInOriginMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ISINORIGINMAP_OFFSET))(this);
		}

		::System::Boolean get_IsRewardDirectionUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GET_ISREWARDDIRECTIONUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::ActivityRewardCountCollection* get_RewardCounts()
		{
			return ((::RPG::Client::ActivityRewardCountCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GET_REWARDCOUNTS_OFFSET))(this);
		}

		::System::Int32 _GetTimeLimitPanelDataToDisplay_b__26_0(::RPG::Client::ActivityPanelData* a, ::RPG::Client::ActivityPanelData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__GETTIMELIMITPANELDATATODISPLAY_B__26_0_OFFSET))(this, a, b);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
