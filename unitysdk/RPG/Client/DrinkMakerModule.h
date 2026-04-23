#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"

class Class_1_3AD2528CD53B1639_5;
class Class_1_6954D6F458B1D0FF;
class Class_1_766E1CF11E204F43_4;
namespace RPG::Client { class DrinkMakerBar; }
namespace RPG::Client { class DrinkMakerBarChallenge; }
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarGuest; }
namespace RPG::Client { class DrinkMakerBarIngredient; }
namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerBartender; }
namespace RPG::Client { class DrinkMakerCheersBarExtend; }
namespace RPG::Client { class DrinkMakerCommentManager; }
namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace RPG::GameCore { class DrinkMakerIceRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA199E10)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xA197B40)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET UNITYSDK_OFFSET(0xA197FA0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET UNITYSDK_OFFSET(0xA197C60)
#define RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xA198180)
#define RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET UNITYSDK_OFFSET(0xA197B80)
#define RPG_CLIENT_DRINKMAKERMODULE_GETFINISHCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xA198240)
#define RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET UNITYSDK_OFFSET(0xA197A90)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0xA188730)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xA1980F0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xA197E90)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xA197DB0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLECUPROWDATA_OFFSET UNITYSDK_OFFSET(0xA19B490)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEDECOROWDATA_OFFSET UNITYSDK_OFFSET(0xA19B790)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEICEROWDATA_OFFSET UNITYSDK_OFFSET(0xA19B610)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xA19B910)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xA197400)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA19BF00)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARCHALLENGES_OFFSET UNITYSDK_OFFSET(0xA19BEF0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARDRINKS_OFFSET UNITYSDK_OFFSET(0xA19BED0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xA19BEC0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARTENDER_OFFSET UNITYSDK_OFFSET(0xA19BEA0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBAR_OFFSET UNITYSDK_OFFSET(0xA19BE90)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xA19BEB0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERTAGS_OFFSET UNITYSDK_OFFSET(0xA19BEE0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xA19B470)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xA19BF20)
#define RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xA19BF40)
#define RPG_CLIENT_DRINKMAKERMODULE_HASAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xA1989A0)
#define RPG_CLIENT_DRINKMAKERMODULE_HASGUESTFINISHREWARD_OFFSET UNITYSDK_OFFSET(0xA198A50)
#define RPG_CLIENT_DRINKMAKERMODULE_HASNEWCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA1984C0)
#define RPG_CLIENT_DRINKMAKERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA198CB0)
#define RPG_CLIENT_DRINKMAKERMODULE_ISTIPREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xA198AF0)
#define RPG_CLIENT_DRINKMAKERMODULE_OFFERHASREWARD_OFFSET UNITYSDK_OFFSET(0xA1983D0)
#define RPG_CLIENT_DRINKMAKERMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA199ED0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET UNITYSDK_OFFSET(0xA197420)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET UNITYSDK_OFFSET(0xA197710)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xA1979C0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xA197800)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET UNITYSDK_OFFSET(0xA1978D0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xA197410)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA19BF10)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xA19B480)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xA19BF30)
#define RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xA19BF50)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDCHEERSPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xA1970B0)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA19BF60)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA19C170)
#define RPG_CLIENT_DRINKMAKERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA19CED0)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET UNITYSDK_OFFSET(0xA19D550)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET UNITYSDK_OFFSET(0xA19D640)
#define RPG_CLIENT_DRINKMAKERMODULE__INITBARDATA_OFFSET UNITYSDK_OFFSET(0xA198FE0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITCHALLENGESDATA_OFFSET UNITYSDK_OFFSET(0xA199B90)
#define RPG_CLIENT_DRINKMAKERMODULE__INITDRINKDATA_OFFSET UNITYSDK_OFFSET(0xA199720)
#define RPG_CLIENT_DRINKMAKERMODULE__INITFORDRINKMAKERCHEERS_OFFSET UNITYSDK_OFFSET(0xA197010)
#define RPG_CLIENT_DRINKMAKERMODULE__INITGUESTDATA_OFFSET UNITYSDK_OFFSET(0xA199080)
#define RPG_CLIENT_DRINKMAKERMODULE__INITINGREDIENTSDATA_OFFSET UNITYSDK_OFFSET(0xA1994A0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xA199980)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xA19CCB0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA1972A0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA197190)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xA197210)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xA19C580)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET UNITYSDK_OFFSET(0xA19CE50)
#define RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET UNITYSDK_OFFSET(0xA19C990)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA19C490)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA19C3B0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA19C610)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA19CB00)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET UNITYSDK_OFFSET(0xA19C330)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xA19C780)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xA19C860)
#define RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xA19B360)
#define RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA19A7B0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA19AF60)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0xA19B060)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA19B210)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET UNITYSDK_OFFSET(0xA19A0F0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA19A1D0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xA19A050)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET UNITYSDK_OFFSET(0xA19A660)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET UNITYSDK_OFFSET(0xA19AFB0)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA19D780)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA19D6F0)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA19D790)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA19D7F0)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA19D850)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET UNITYSDK_OFFSET(0xA19CEF0)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET UNITYSDK_OFFSET(0xA19D380)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerModule_TypeDefinitionIndex = 58625;

	class DrinkMakerModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 OFFER_TYPE = 0x2; // 0x0
		::RPG::Client::DrinkMakerCommentManager* __drinkMakerCommentManager_k__BackingField; // 0x10
		::RPG::Client::DrinkMakerBar* _drinkMakerBar; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>* _drinkMakerBarDrinks; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarGuest*>* _drinkMakerBarGuests; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockSubMissionIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GuestIDToDayCount; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* _drinkMakerBarIngredients; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>* _drinkMakerBarChallenges; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>* _drinkMakerTags; // 0x50
		::RPG::Client::DrinkMakerCheersBarExtend* _CheersBar_k__BackingField; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockMainMissionIDs; // 0x60
		::RPG::Client::DrinkMakerBarChallenge* _CurChallenge_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* _allGuests; // 0x70
		::RPG::Client::DrinkMakerBartender* _drinkMakerBartender; // 0x78
		::System::Boolean _IsMissionDrinkSuccess; // 0x80
		::System::Boolean _ShowDayTransfer; // 0x81
		::System::Boolean _IsDataPrepared_k__BackingField; // 0x82
		::System::UInt32 _LimitedRewardID_k__BackingField; // 0x84
		::System::UInt32 _AvatarRewardQuestID; // 0x88
		::System::UInt32 _MaxTipCount; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _InitForDrinkMakerCheers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITFORDRINKMAKERCHEERS_OFFSET))(this);
		}

		::System::Void _AddCheersPacketHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDCHEERSPACKETHANDLER_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersGetDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnDrinkMakerCheersMakeDrinkScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnDrinkMakerCheersEnterNextGroupScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET))(this, cmd, rsp);
		}

		::RPG::Client::DrinkMakerCheersBarExtend* get_CheersBar()
		{
			return ((::RPG::Client::DrinkMakerCheersBarExtend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET))(this);
		}

		::System::Void set_CheersBar(::RPG::Client::DrinkMakerCheersBarExtend* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBarExtend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET))(this, value);
		}

		::System::Void SendDrinkMakerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET))(this);
		}

		::System::Void SendGetDrinkMakerDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET))(this);
		}

		::System::Void SendMakeDrinkReq(::System::UInt32 chatID, ::RPG::Client::DrinkMakerBartendDrinkData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET))(this, chatID, data);
		}

		::System::Void SendMakeGuideMissionDrinkReq(::System::UInt32 requestID, ::System::Boolean isSave, ::RPG::Client::DrinkMakerBartendDrinkData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET))(this, requestID, isSave, data);
		}

		::System::Void SendMakeChallengeDrinkReq(::System::UInt32 requestID, ::RPG::Client::DrinkMakerBartendDrinkData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET))(this, requestID, data);
		}

		::RPG::Client::DrinkMakerBarGuest* GetGuestData(::System::UInt32 guestID)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET))(this, guestID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* GetAllGuestsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarDrink* GetDrinkData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET))(this, formulaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>* GetAllUnlockedDrinksData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerTag* GetTagData(::System::UInt32 tagID)
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET))(this, tagID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetTagByQuantifyType(::RPG::GameCore::DrinkMakerQuantifyTagType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetAllMixTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarIngredient* GetIngredientData(::System::UInt32 ingredientID)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET))(this, ingredientID);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* GetIngredientRowData(::System::UInt32 ingredientID)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET))(this, ingredientID);
		}

		::RPG::Client::DrinkMakerBarChallenge* GetChallengeData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET))(this, challengeID);
		}

		::System::Int32 GetFinishChallengeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETFINISHCHALLENGECOUNT_OFFSET))(this);
		}

		::System::Boolean OfferHasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_OFFERHASREWARD_OFFSET))(this);
		}

		::System::Boolean HasNewChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASNEWCHALLENGE_OFFSET))(this);
		}

		::System::Boolean HasAvatarReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASAVATARREWARD_OFFSET))(this);
		}

		::System::Boolean HasGuestFinishReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASGUESTFINISHREWARD_OFFSET))(this);
		}

		::System::Boolean IsTipReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_ISTIPREACHLIMIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _InitBarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITBARDATA_OFFSET))(this);
		}

		::System::Void _InitGuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITGUESTDATA_OFFSET))(this);
		}

		::System::Void _InitIngredientsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITINGREDIENTSDATA_OFFSET))(this);
		}

		::System::Void _InitChallengesData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITCHALLENGESDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITDRINKDATA_OFFSET))(this);
		}

		::System::Void _InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITTAGDATA_OFFSET))(this);
		}

		::System::Void _UpdateGuestsData(::Class_1_6954D6F458B1D0FF* drinkMakerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET))(this, drinkMakerData);
		}

		::System::Void _UpdateGuestData(::Class_1_766E1CF11E204F43_4* guest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET))(this, guest);
		}

		::System::Void _UpdateSequenceEndGuest(::Class_1_3AD2528CD53B1639_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET))(this, rsp);
		}

		::System::Void _TryUpdateUnlockData(::System::UInt32 unlockSubMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET))(this, unlockSubMissionID);
		}

		::System::Void _UpdateGuestDayCount(::System::UInt32 dayCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET))(this, dayCount);
		}

		::System::Void _UpdateAllUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _UpdateTipNum(::System::UInt32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET))(this, num);
		}

		::System::Void _UpdateFinishedChallengeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* finishedChallengeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET))(this, finishedChallengeList);
		}

		::System::Void _UpdateFinishedChallenge(::System::UInt32 finishedChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET))(this, finishedChallengeID);
		}

		::System::Void _ShowDayTransferDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET))(this);
		}

		::System::Boolean get_IsDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET))(this);
		}

		::System::Void set_IsDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerCupRow*>* get_AvailableCupRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerCupRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLECUPROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIceRow*>* get_AvailableIceRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEICEROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerDecorationRow*>* get_AvailableDecoRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerDecorationRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEDECOROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* get_AvailableIngredientRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEINGREDIENTROWDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBar* get_DrinkMakerBar()
		{
			return ((::RPG::Client::DrinkMakerBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBAR_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartender* get_DrinkMakerBartender()
		{
			return ((::RPG::Client::DrinkMakerBartender*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARTENDER_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCommentManager* get_DrinkMakerCommentManager()
		{
			return ((::RPG::Client::DrinkMakerCommentManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERCOMMENTMANAGER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* get_DrinkMakerBarIngredients()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARINGREDIENTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>* get_DrinkMakerBarDrinks()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARDRINKS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>* get_DrinkMakerTags()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>* get_DrinkMakerBarChallenges()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARCHALLENGES_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarChallenge* get_CurChallenge()
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_CURCHALLENGE_OFFSET))(this);
		}

		::System::Void set_CurChallenge(::RPG::Client::DrinkMakerBarChallenge* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET))(this, value);
		}

		::System::UInt32 get_LimitedRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET))(this);
		}

		::System::Void set_LimitedRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerCommentManager* get__drinkMakerCommentManager()
		{
			return ((::RPG::Client::DrinkMakerCommentManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this);
		}

		::System::Void set__drinkMakerCommentManager(::RPG::Client::DrinkMakerCommentManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCommentManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this, value);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainEntrancePageOpen(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET))(this, arg);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerOnResultDialogClose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET))(this, arg);
		}

		::System::Void _OnGetDrinkMakerDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnMakeDrinkScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMakeMissionDrinkScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEndDrinkMakerSequenceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetDrinkMakerDayEndScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnDrinkMakerChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnDrinkMakerUpdateTipsNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET))(this);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_1(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET))(this, _);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_2(::RPG::Client::DrinkMakerBarIngredient* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET))(this, a);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_3(::RPG::Client::DrinkMakerBarIngredient* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET))(this, a);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
