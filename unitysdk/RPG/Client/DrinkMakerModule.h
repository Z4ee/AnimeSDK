#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"

class Class_1_6954D6F458B1D0FF;
class Class_1_766E1CF11E204F43_4;
class Class_1_98E26A5B2BD7AB20;
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

#define RPG_CLIENT_DRINKMAKERMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB81B140)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xB819140)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET UNITYSDK_OFFSET(0xB819730)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET UNITYSDK_OFFSET(0xB819270)
#define RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB819960)
#define RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET UNITYSDK_OFFSET(0xB819180)
#define RPG_CLIENT_DRINKMAKERMODULE_GETFINISHCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xB8199F0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET UNITYSDK_OFFSET(0xB819080)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0xB809ED0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xB7FD5A0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xB819590)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xB8194A0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLECUPROWDATA_OFFSET UNITYSDK_OFFSET(0xB81C7E0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEDECOROWDATA_OFFSET UNITYSDK_OFFSET(0xB81CC20)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEICEROWDATA_OFFSET UNITYSDK_OFFSET(0xB81CA00)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xB803440)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xB818CB0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB81CEB0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARCHALLENGES_OFFSET UNITYSDK_OFFSET(0xB81CEA0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARDRINKS_OFFSET UNITYSDK_OFFSET(0xB81CE80)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xB81CE70)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARTENDER_OFFSET UNITYSDK_OFFSET(0xB81CE50)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBAR_OFFSET UNITYSDK_OFFSET(0xB81CE40)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xB81CE60)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERTAGS_OFFSET UNITYSDK_OFFSET(0xB81CE90)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB81C7C0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xB81CED0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xB81CEF0)
#define RPG_CLIENT_DRINKMAKERMODULE_HASAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xB7F85E0)
#define RPG_CLIENT_DRINKMAKERMODULE_HASGUESTFINISHREWARD_OFFSET UNITYSDK_OFFSET(0xB7F8690)
#define RPG_CLIENT_DRINKMAKERMODULE_HASNEWCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB7F8060)
#define RPG_CLIENT_DRINKMAKERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB819DA0)
#define RPG_CLIENT_DRINKMAKERMODULE_ISTIPREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xB819BE0)
#define RPG_CLIENT_DRINKMAKERMODULE_OFFERHASREWARD_OFFSET UNITYSDK_OFFSET(0xB7F84F0)
#define RPG_CLIENT_DRINKMAKERMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB81B200)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET UNITYSDK_OFFSET(0xB818CD0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET UNITYSDK_OFFSET(0xB818F90)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xB8007B0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xB8005F0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET UNITYSDK_OFFSET(0xB8006C0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xB818CC0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB81CEC0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB81C7D0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xB81CEE0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xB81CF00)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDCHEERSPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xB818810)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB81CF10)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB81D170)
#define RPG_CLIENT_DRINKMAKERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB81E170)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET UNITYSDK_OFFSET(0xB81E820)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET UNITYSDK_OFFSET(0xB81E910)
#define RPG_CLIENT_DRINKMAKERMODULE__INITBARDATA_OFFSET UNITYSDK_OFFSET(0xB81A0D0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITCHALLENGESDATA_OFFSET UNITYSDK_OFFSET(0xB81AEA0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITDRINKDATA_OFFSET UNITYSDK_OFFSET(0xB81A980)
#define RPG_CLIENT_DRINKMAKERMODULE__INITFORDRINKMAKERCHEERS_OFFSET UNITYSDK_OFFSET(0xB818740)
#define RPG_CLIENT_DRINKMAKERMODULE__INITGUESTDATA_OFFSET UNITYSDK_OFFSET(0xB81A170)
#define RPG_CLIENT_DRINKMAKERMODULE__INITINGREDIENTSDATA_OFFSET UNITYSDK_OFFSET(0xB81A6D0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xB81AC40)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB81DF80)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB818B50)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB818A40)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xB818AC0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xB81D840)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET UNITYSDK_OFFSET(0xB81E0F0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET UNITYSDK_OFFSET(0xB81DC50)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xB81D750)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xB81D670)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB81D8D0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB81DDD0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET UNITYSDK_OFFSET(0xB81D5F0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xB81DA40)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xB81DB20)
#define RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xB81C6B0)
#define RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xB81BA90)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xB81C300)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0xB81C400)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB81C5B0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET UNITYSDK_OFFSET(0xB81B3B0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB81B4A0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xB81B2F0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET UNITYSDK_OFFSET(0xB81B940)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET UNITYSDK_OFFSET(0xB81C350)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB81EA40)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB81E9C0)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB81EA50)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB81EAB0)
#define RPG_CLIENT_DRINKMAKERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB81EB10)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET UNITYSDK_OFFSET(0xB81E190)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET UNITYSDK_OFFSET(0xB81E650)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerModule_TypeDefinitionIndex = 59555;

	class DrinkMakerModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 OFFER_TYPE = 0x2; // 0x0
		::RPG::Client::DrinkMakerBarChallenge* _CurChallenge_k__BackingField; // 0x10
		::RPG::Client::DrinkMakerCheersBarExtend* _CheersBar_k__BackingField; // 0x18
		::RPG::Client::DrinkMakerCommentManager* __drinkMakerCommentManager_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* _allGuests; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarGuest*>* _drinkMakerBarGuests; // 0x30
		::RPG::Client::DrinkMakerBartender* _drinkMakerBartender; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockSubMissionIDs; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>* _drinkMakerBarChallenges; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* _drinkMakerBarIngredients; // 0x50
		::RPG::Client::DrinkMakerBar* _drinkMakerBar; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GuestIDToDayCount; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>* _drinkMakerTags; // 0x68
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockMainMissionIDs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>* _drinkMakerBarDrinks; // 0x78
		::System::UInt32 _AvatarRewardQuestID; // 0x80
		::System::UInt32 _LimitedRewardID_k__BackingField; // 0x84
		::System::UInt32 _MaxTipCount; // 0x88
		::System::Boolean _IsMissionDrinkSuccess; // 0x8C
		::System::Boolean _ShowDayTransfer; // 0x8D
		::System::Boolean _IsDataPrepared_k__BackingField; // 0x8E

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

		::System::Void _OnDrinkMakerCheersGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerCheersMakeDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerCheersEnterNextGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerCheersBarExtend* get_CheersBar()
		{
			return ((::RPG::Client::DrinkMakerCheersBarExtend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET))(this);
		}

		::System::Void set_CheersBar(::RPG::Client::DrinkMakerCheersBarExtend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBarExtend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET))(this, a1);
		}

		::System::Void SendDrinkMakerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET))(this);
		}

		::System::Void SendGetDrinkMakerDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET))(this);
		}

		::System::Void SendMakeDrinkReq(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendDrinkData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendMakeGuideMissionDrinkReq(::System::UInt32 a1, ::System::Boolean a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMakeChallengeDrinkReq(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendDrinkData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerBarGuest* GetGuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* GetAllGuestsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarDrink* GetDrinkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>* GetAllUnlockedDrinksData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerTag* GetTagData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetTagByQuantifyType(::RPG::GameCore::DrinkMakerQuantifyTagType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetAllMixTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarIngredient* GetIngredientData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* GetIngredientRowData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarChallenge* GetChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET))(this, a1);
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

		::System::Void _UpdateGuestsData(::Class_1_6954D6F458B1D0FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateGuestData(::Class_1_766E1CF11E204F43_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateSequenceEndGuest(::Class_1_98E26A5B2BD7AB20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E26A5B2BD7AB20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateUnlockData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateGuestDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateTipNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishedChallengeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishedChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _ShowDayTransferDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET))(this);
		}

		::System::Boolean get_IsDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET))(this);
		}

		::System::Void set_IsDataPrepared(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET))(this, a1);
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

		::System::Void set_CurChallenge(::RPG::Client::DrinkMakerBarChallenge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LimitedRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET))(this);
		}

		::System::Void set_LimitedRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCommentManager* get__drinkMakerCommentManager()
		{
			return ((::RPG::Client::DrinkMakerCommentManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this);
		}

		::System::Void set__drinkMakerCommentManager(::RPG::Client::DrinkMakerCommentManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCommentManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainEntrancePageOpen(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerOnResultDialogClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnGetDrinkMakerDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMakeDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMakeMissionDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEndDrinkMakerSequenceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetDrinkMakerDayEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerUpdateTipsNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET))(this);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_1(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_2(::RPG::Client::DrinkMakerBarIngredient* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_3(::RPG::Client::DrinkMakerBarIngredient* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET))(this, a1);
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
