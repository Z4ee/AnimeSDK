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

#define RPG_CLIENT_ACTIVITYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFBE760)
#define RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AFB7560)
#define RPG_CLIENT_ACTIVITYMODULE_FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AFBABB0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFB5EF0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AFB8450)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AFB81F0)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATA_OFFSET UNITYSDK_OFFSET(0x1AFB8160)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYQUESTTIMELIMITDATA_OFFSET UNITYSDK_OFFSET(0x1AFBBE00)
#define RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYSTRONGCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC510)
#define RPG_CLIENT_ACTIVITYMODULE_GETAETHERDIVIDEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC990)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLEYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC810)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLGRIDFIGHTRESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB7480)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB8CB0)
#define RPG_CLIENT_ACTIVITYMODULE_GETALLROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFBA850)
#define RPG_CLIENT_ACTIVITYMODULE_GETAVAILABLEROLETRIALACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1AFBDF80)
#define RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC5D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETBOXINGCLUBRESONANCEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC450)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDB90)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHALLENGECOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDB40)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHENLINGFESACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDD50)
#define RPG_CLIENT_ACTIVITYMODULE_GETCHESSROGUEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD6D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETCLOCKPARKACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCDD0)
#define RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASEID_OFFSET UNITYSDK_OFFSET(0x1AFB70C0)
#define RPG_CLIENT_ACTIVITYMODULE_GETCURRENTPHASERECEIVABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AFB7380)
#define RPG_CLIENT_ACTIVITYMODULE_GETDRINKMAKERACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCBD0)
#define RPG_CLIENT_ACTIVITYMODULE_GETELATIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDBD0)
#define RPG_CLIENT_ACTIVITYMODULE_GETELFRESTAURANTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD3D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETEVOLVEBUILDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCC90)
#define RPG_CLIENT_ACTIVITYMODULE_GETFANTASTICSTORYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC390)
#define RPG_CLIENT_ACTIVITYMODULE_GETFATEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD490)
#define RPG_CLIENT_ACTIVITYMODULE_GETFIGHTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC2D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETFIGHTFESTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD190)
#define RPG_CLIENT_ACTIVITYMODULE_GETFINDTROTTERACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBBBC0)
#define RPG_CLIENT_ACTIVITYMODULE_GETGIFTSROLEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBBB00)
#define RPG_CLIENT_ACTIVITYMODULE_GETGUESSTHESILHOUETTEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBBC80)
#define RPG_CLIENT_ACTIVITYMODULE_GETHELIOBUSACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCA50)
#define RPG_CLIENT_ACTIVITYMODULE_GETIDLELIVEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDC90)
#define RPG_CLIENT_ACTIVITYMODULE_GETLOCALLEGENDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD610)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATCHTHREEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCE90)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_1_OFFSET UNITYSDK_OFFSET(0x1AFBC190)
#define RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC0D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETMONOPOLYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCB10)
#define RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLAYCOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD550)
#define RPG_CLIENT_ACTIVITYMODULE_GETMULTIPLEDROPACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1AFBDFF0)
#define RPG_CLIENT_ACTIVITYMODULE_GETMUSEUMACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC750)
#define RPG_CLIENT_ACTIVITYMODULE_GETMUSICRHYTHMACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD310)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELDATATODISPLAY_OFFSET UNITYSDK_OFFSET(0x1AFB5FE0)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AF8CE40)
#define RPG_CLIENT_ACTIVITYMODULE_GETPANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1AFB99E0)
#define RPG_CLIENT_ACTIVITYMODULE_GETPHASEDATABYID_OFFSET UNITYSDK_OFFSET(0x1AFB6F60)
#define RPG_CLIENT_ACTIVITYMODULE_GETPHASELIST_OFFSET UNITYSDK_OFFSET(0x1AFB7340)
#define RPG_CLIENT_ACTIVITYMODULE_GETRAIDCOLLECTIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD850)
#define RPG_CLIENT_ACTIVITYMODULE_GETROGUEENDLESSACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD790)
#define RPG_CLIENT_ACTIVITYMODULE_GETROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFBA930)
#define RPG_CLIENT_ACTIVITYMODULE_GETROLETRIALACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDF00)
#define RPG_CLIENT_ACTIVITYMODULE_GETSILVERWOLFACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC690)
#define RPG_CLIENT_ACTIVITYMODULE_GETSPACEZOOACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBBD40)
#define RPG_CLIENT_ACTIVITYMODULE_GETSTARFIGHTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD010)
#define RPG_CLIENT_ACTIVITYMODULE_GETSUMMONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD250)
#define RPG_CLIENT_ACTIVITYMODULE_GETSWORDTRAININGACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBCF50)
#define RPG_CLIENT_ACTIVITYMODULE_GETTEAMTOWERSACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDE40)
#define RPG_CLIENT_ACTIVITYMODULE_GETTELEVISIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBDA00)
#define RPG_CLIENT_ACTIVITYMODULE_GETTIMELIMITPANELDATATODISPLAY_OFFSET UNITYSDK_OFFSET(0x1AFB8960)
#define RPG_CLIENT_ACTIVITYMODULE_GETTRACKPHOTOACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBD0D0)
#define RPG_CLIENT_ACTIVITYMODULE_GETTREASUREDUNGEONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC8D0)
#define RPG_CLIENT_ACTIVITYMODULE_GET_ACTIVITYPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1AFBA730)
#define RPG_CLIENT_ACTIVITYMODULE_GET_CUSTOMIZEDPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1AFBA750)
#define RPG_CLIENT_ACTIVITYMODULE_GET_ISREWARDDIRECTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AFC2D10)
#define RPG_CLIENT_ACTIVITYMODULE_GET_REWARDCOUNTS_OFFSET UNITYSDK_OFFSET(0x1AFC2D70)
#define RPG_CLIENT_ACTIVITYMODULE_HASAVAILABLEACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB5F80)
#define RPG_CLIENT_ACTIVITYMODULE_HASRESIDENTACTIVITYPANELDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AFBF0A0)
#define RPG_CLIENT_ACTIVITYMODULE_HASTIMELIMITACTIVITYPANELDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AFBE9A0)
#define RPG_CLIENT_ACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AFBE460)
#define RPG_CLIENT_ACTIVITYMODULE_ISACTIVITYPLACEATBOTTOM_OFFSET UNITYSDK_OFFSET(0x1AFB8FF0)
#define RPG_CLIENT_ACTIVITYMODULE_ISHANDBOOKPHASEALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1AFB6E10)
#define RPG_CLIENT_ACTIVITYMODULE_ISQUESTREWARDNOTFETCHED_OFFSET UNITYSDK_OFFSET(0x1AFB7010)
#define RPG_CLIENT_ACTIVITYMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1AFBE560)
#define RPG_CLIENT_ACTIVITYMODULE_SENDGETACTIVITYDATAS_OFFSET UNITYSDK_OFFSET(0x1AFBF940)
#define RPG_CLIENT_ACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x1AFC0340)
#define RPG_CLIENT_ACTIVITYMODULE_SET_ACTIVITYPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1AFBA740)
#define RPG_CLIENT_ACTIVITYMODULE_SET_CUSTOMIZEDPANELDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1AFBA760)
#define RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARDBYACTIVITYLOGINID_OFFSET UNITYSDK_OFFSET(0x1AFBF820)
#define RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARD_OFFSET UNITYSDK_OFFSET(0x1AFBF650)
#define RPG_CLIENT_ACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1AFC0500)
#define RPG_CLIENT_ACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AFC0780)
#define RPG_CLIENT_ACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AFC11E0)
#define RPG_CLIENT_ACTIVITYMODULE__ADDPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB97C0)
#define RPG_CLIENT_ACTIVITYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC2DB0)
#define RPG_CLIENT_ACTIVITYMODULE__CREATEACTIVITYPHASEMODULE_OFFSET UNITYSDK_OFFSET(0x1AFB6880)
#define RPG_CLIENT_ACTIVITYMODULE__CREATEPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB9700)
#define RPG_CLIENT_ACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBE040)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFB67E0)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB7EA0)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB9C60)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEPANELTEMPLATELUT_OFFSET UNITYSDK_OFFSET(0x1AFBA770)
#define RPG_CLIENT_ACTIVITYMODULE__DISPOSEROGUERESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFBB7C0)
#define RPG_CLIENT_ACTIVITYMODULE__GETDAILYLOGINREWARDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFC18E0)
#define RPG_CLIENT_ACTIVITYMODULE__GETTIMELIMITPANELDATATODISPLAY_B__26_0_OFFSET UNITYSDK_OFFSET(0x1AFCAF80)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1AFB6600)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYMODULE_OFFSET UNITYSDK_OFFSET(0x1AFBE500)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYPHASEMODULE_OFFSET UNITYSDK_OFFSET(0x1AFB6980)
#define RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYRELATEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB9510)
#define RPG_CLIENT_ACTIVITYMODULE__INITCUSTOMIZEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB96B0)
#define RPG_CLIENT_ACTIVITYMODULE__INITGRIDFIGHTRESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB7B20)
#define RPG_CLIENT_ACTIVITYMODULE__INITLOGINDATA_OFFSET UNITYSDK_OFFSET(0x1AFB7F40)
#define RPG_CLIENT_ACTIVITYMODULE__INITPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB9100)
#define RPG_CLIENT_ACTIVITYMODULE__INITPANELTEMPLATELUT_OFFSET UNITYSDK_OFFSET(0x1AFB9180)
#define RPG_CLIENT_ACTIVITYMODULE__INITROGUERESIDENTACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFBB170)
#define RPG_CLIENT_ACTIVITYMODULE__ISINORIGINMAP_OFFSET UNITYSDK_OFFSET(0x1AFC0610)
#define RPG_CLIENT_ACTIVITYMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x1AFC1E30)
#define RPG_CLIENT_ACTIVITYMODULE__ONCHALLENGERAIDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AFC21A0)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDGETLOGINACTIVITYSCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC1660)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC2000)
#define RPG_CLIENT_ACTIVITYMODULE__ONCMDTAKELOGINACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC1A00)
#define RPG_CLIENT_ACTIVITYMODULE__ONGETACTIVITYREWARDCOUNTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC2250)
#define RPG_CLIENT_ACTIVITYMODULE__ONGETALLACTIVITYREWARDCOUNTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC2990)
#define RPG_CLIENT_ACTIVITYMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0x1AFC0960)
#define RPG_CLIENT_ACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x1AFC0A00)
#define RPG_CLIENT_ACTIVITYMODULE__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0x1AFC1180)
#define RPG_CLIENT_ACTIVITYMODULE__ONTAKECHALLENGERAIDREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1AFC20A0)
#define RPG_CLIENT_ACTIVITYMODULE__PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1AFBFA90)
#define RPG_CLIENT_ACTIVITYMODULE__PREPAREROGUERESIDENTACTIVITYPANELCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1AFBB540)
#define RPG_CLIENT_ACTIVITYMODULE__TRYCREATEANDADDCUSTOMIZEDPANELDATA_OFFSET UNITYSDK_OFFSET(0x1AFB9B20)
#define RPG_CLIENT_ACTIVITYMODULE__TRYMARKOLDFOROLDPANELID_OFFSET UNITYSDK_OFFSET(0x1AFBA4B0)
#define RPG_CLIENT_ACTIVITYMODULE__TRYRECORDOLDPANELIDSEEN_OFFSET UNITYSDK_OFFSET(0x1AFBA2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule_TypeDefinitionIndex = 61777;

	class ActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityPanelTemplate, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__PanelTemplateConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityPanelTemplate, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule_TypeDefinitionIndex)->GetStaticField(0x60B50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_OldPanelID2ActivityIDLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule_TypeDefinitionIndex)->GetStaticField(0x60B58);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* _CustomizedPanelDataContainer_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelData*>* _AvailablePanelDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>* _phaseMap; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _OldPanelIDSeen; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightResidentActivityPanelData*>* _GridFightResidentPanelDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>* _ActivityPanelDataContainer_k__BackingField; // 0x38
		::RPG::Client::ExprConditionChecker* _RewardDirectionUnlockConditionChecker; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ActivityPanelTemplate>* _PanelTemplates; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _PanelID2TemplateIndexLUT; // 0x50
		::Class_1_355D5C2B1D92981B* _RewardCountProxyFactory; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueResidentActivityPanelData*>* _RogueResidentPanelDatas; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _phaseList; // 0x68
		::RPG::Client::ConditionCheckerHandle* _RewardDirectionUnlockConditionMetHandler; // 0x70
		::RPG::Client::ActivityRewardCountCollection* _RewardCounts; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLoginData*>* ActivityLoginDataDict; // 0x80
		::Class_1_615A6094D352273A* _PanelDataProxyFactory; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityData*>* ActivityDataDict; // 0x90
		::System::Int32 _AutoShowPanelID; // 0x98
		::System::UInt32 _OriginFloorID; // 0x9C
		::System::UInt32 _OriginPlaneID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CCTOR_OFFSET))();
		}

		::RPG::Client::ActivityData* GetActivityData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYDATA_OFFSET))(this, a1);
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

		::RPG::Client::ActivityPhaseData* GetPhaseDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPHASEDATABYID_OFFSET))(this, a1);
		}

		::System::Boolean IsQuestRewardNotFetched(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ISQUESTREWARDNOTFETCHED_OFFSET))(this, a1);
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

		::RPG::Client::ActivityLoginData* GetActivityLoginData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityLoginData* GetActivityLoginDataByModuleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYMODULEID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityLoginData* GetActivityLoginDataByActivityID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLoginData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETACTIVITYLOGINDATABYACTIVITYID_OFFSET))(this, a1);
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

		::System::Boolean IsActivityPlaceAtBottom(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_ISACTIVITYPLACEATBOTTOM_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityPanelData* GetPanelData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPANELDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _InitPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITPANELDATA_OFFSET))(this);
		}

		::System::Void _InitActivityRelatedPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITACTIVITYRELATEDPANELDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* _CreatePanelData(::RPG::Client::ActivityData* a1)
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__CREATEPANELDATA_OFFSET))(this, a1);
		}

		::System::Void _AddPanelData(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDPANELDATA_OFFSET))(this, a1);
		}

		::System::Void _InitCustomizedPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__INITCUSTOMIZEDPANELDATA_OFFSET))(this);
		}

		::System::Void _TryCreateAndAddCustomizedPanelData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__TRYCREATEANDADDCUSTOMIZEDPANELDATA_OFFSET))(this, a1);
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

		::System::Void set_ActivityPanelDataContainer(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityPanelData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SET_ACTIVITYPANELDATACONTAINER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* get_CustomizedPanelDataContainer()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GET_CUSTOMIZEDPANELDATACONTAINER_OFFSET))(this);
		}

		::System::Void set_CustomizedPanelDataContainer(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CustomizedActivityPanelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SET_CUSTOMIZEDPANELDATACONTAINER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityPanelTemplate GetPanelTemplate(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityPanelTemplate(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETPANELTEMPLATE_OFFSET))(this, a1, a2);
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

		::RPG::Client::RogueResidentActivityPanelData* GetRogueResidentPanelData(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::RPG::Client::RogueResidentActivityPanelData*(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETROGUERESIDENTPANELDATA_OFFSET))(this, a1);
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

		::RPG::Client::ActivityData* GetMaterialSubmissionActivityData_1(::RPG::GameCore::MaterialSubmissionType a1)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::MaterialSubmissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETMATERIALSUBMISSIONACTIVITYDATA_1_OFFSET))(this, a1);
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

		::RPG::Client::ActivityData* GetEvolveBuildActivityData(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETEVOLVEBUILDACTIVITYDATA_OFFSET))(this, a1);
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

		::RPG::Client::ActivityData* GetRaidCollectionActivityData(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETRAIDCOLLECTIONACTIVITYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityData* GetTelevisionActivityData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTELEVISIONACTIVITYDATA_OFFSET))(this, a1);
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

		::RPG::Client::ActivityData* GetChenLingFesActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETCHENLINGFESACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* GetTeamTowersActivityData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETTEAMTOWERSACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::RoleTrialActivityData* GetRoleTrialActivityData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RoleTrialActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_GETROLETRIALACTIVITYDATA_OFFSET))(this, a1);
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

		::System::Void TakeLoginReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void TakeLoginRewardByActivityLoginID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TAKELOGINREWARDBYACTIVITYLOGINID_OFFSET))(this, a1, a2);
		}

		::System::Void SendGetActivityDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SENDGETACTIVITYDATAS_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONSERVERPREFREFRESH_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetLoginActivityScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDGETLOGINACTIVITYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeLoginActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDTAKELOGINACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRaidInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeChallengeRaidRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONTAKECHALLENGERAIDREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChallengeRaidNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONCHALLENGERAIDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetActivityRewardCountDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONGETACTIVITYREWARDCOUNTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetAllActivityRewardCountDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__ONGETALLACTIVITYREWARDCOUNTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DailyLoginRewardActivityData* _GetDailyLoginRewardActivityData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DailyLoginRewardActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__GETDAILYLOGINREWARDACTIVITYDATA_OFFSET))(this, a1);
		}

		::System::Void _NotifyActivityReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__NOTIFYACTIVITYREWARD_OFFSET))(this, a1);
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

		::System::Int32 _GetTimeLimitPanelDataToDisplay_b__26_0(::RPG::Client::ActivityPanelData* a1, ::RPG::Client::ActivityPanelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE__GETTIMELIMITPANELDATATODISPLAY_B__26_0_OFFSET))(this, a1, a2);
		}
	};
}
