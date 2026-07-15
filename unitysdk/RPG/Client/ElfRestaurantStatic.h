#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace RPG::Client { class ElfRestaurantFestivalData; }
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantMediator; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfRuntimeCell; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_ELFRESTAURANTSTATIC_CANHARVEST_OFFSET UNITYSDK_OFFSET(0x18D7E920)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_CLEARRAYCASTCACHE_OFFSET UNITYSDK_OFFSET(0x18D811C0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x18D748D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x18D7E1A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x18D7D480)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYID_OFFSET UNITYSDK_OFFSET(0x18D7D560)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x18D7DC30)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x18D7DB20)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIMEWITHBUFF_OFFSET UNITYSDK_OFFSET(0x18D7D000)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIME_OFFSET UNITYSDK_OFFSET(0x18D7CFB0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETDEFAULTRECIPEID_OFFSET UNITYSDK_OFFSET(0x18D7C8F0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18D7CE60)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETEVENTTALKWRITETIME_OFFSET UNITYSDK_OFFSET(0x18D7E850)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFESTIVAL_OFFSET UNITYSDK_OFFSET(0x18D7D830)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x18D7DE40)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYTIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18D7DF40)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETGAMEPLAYMODEL_OFFSET UNITYSDK_OFFSET(0x18D6BC30)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETLIGHTCONEREWARDSREFID_OFFSET UNITYSDK_OFFSET(0x18D7E140)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0x18D801F0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMANAGEMAXFOODCNT_OFFSET UNITYSDK_OFFSET(0x18D7E040)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXRECIPESLOTNUM_OFFSET UNITYSDK_OFFSET(0x18D7DD40)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXWAITCOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x18D7D210)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMODULE_OFFSET UNITYSDK_OFFSET(0x18D69940)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYITEMID_OFFSET UNITYSDK_OFFSET(0x18D7D760)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYSEED_OFFSET UNITYSDK_OFFSET(0x18D7D660)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETRESTAURANTMEDIATOR_OFFSET UNITYSDK_OFFSET(0x18D7D900)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETSEEDRELATIVERECIPE_OFFSET UNITYSDK_OFFSET(0x18D7E200)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GET_USEBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x18D7FAF0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_HASEMPTYCELL_OFFSET UNITYSDK_OFFSET(0x18D7EF20)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISBANNEDBYFEATURESWITCH_OFFSET UNITYSDK_OFFSET(0x18D7D3A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISBATCHMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D7FD70)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISCELLALLEMPTY_OFFSET UNITYSDK_OFFSET(0x18D7F540)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISCURPROGRESSQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x18D7FE20)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISENTRANCELOCKED_OFFSET UNITYSDK_OFFSET(0x18D80090)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFARMBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x18D7FC50)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFEVERUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D80AB0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFOODCANDELIVERY_OFFSET UNITYSDK_OFFSET(0x18D7D2A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISGAMEENTITYWAITER_OFFSET UNITYSDK_OFFSET(0x18D6E9C0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISRECIPELEVELUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D806D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISSAMEENTITY_OFFSET UNITYSDK_OFFSET(0x18D7CEE0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISSECONDRECIPESLOTUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D80510)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISTOPFOODUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D80C70)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISTRADEORDERUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D80890)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKALLSATISIFIED_OFFSET UNITYSDK_OFFSET(0x18D7D9A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKSTATISFIED_OFFSET UNITYSDK_OFFSET(0x18D7DAB0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_SET_USEBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x18D7FBA0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_SHOULDLOCKBYPROGRESSUPGRADEMISSION_OFFSET UNITYSDK_OFFSET(0x18D791F0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D69DA0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRESTAURANTVIEW_OFFSET UNITYSDK_OFFSET(0x18D81120)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRUNTIMECELL_OFFSET UNITYSDK_OFFSET(0x18D81080)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETCAMERA_OFFSET UNITYSDK_OFFSET(0x18D80E30)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x18D80EB0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x18D80F40)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__SAFEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18D7E4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantStatic_TypeDefinitionIndex = 60869;

	class ElfRestaurantStatic : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__rayTargetCacheArray()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x6BDE0);
		}
		static ::System::Single* StaticGet__WritingTimeBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x149C0);
		}
		static ::System::Single* StaticGet__MinWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x149C4);
		}
		static ::System::Single* StaticGet__WritingTimeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x149C8);
		}
		static ::System::Single* StaticGet__MaxWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x149CC);
		}
		static ::System::Boolean* StaticGet__IsInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x149D0);
		}
		// static const ::System::Int32 RaycastCacheArraySize = 0xA; // 0x0

		static ::RPG::Client::ElfRestaurantGameInstance* TryGetGameInstance()
		{
			return ((::RPG::Client::ElfRestaurantGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETGAMEINSTANCE_OFFSET))();
		}

		static ::System::Int32 GetEntityRuntimeID(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETENTITYRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Boolean IsSameEntity(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISSAMEENTITY_OFFSET))(a1, a2);
		}

		static ::System::Single GetCustomerWaitTotalTime(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIME_OFFSET))(a1);
		}

		static ::System::Single GetCustomerWaitTotalTimeWithBuff(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIMEWITHBUFF_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxWaitCookCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXWAITCOOKCOUNT_OFFSET))();
		}

		static ::System::Boolean IsFoodCanDelivery(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFOODCANDELIVERY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsGameEntityWaiter(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISGAMEENTITYWAITER_OFFSET))(a1);
		}

		static ::System::Boolean IsBannedByFeatureSwitch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISBANNEDBYFEATURESWITCH_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYCOUNT_OFFSET))();
		}

		static ::RPG::Client::ElfFarmProductData* GetProductBySeed(::RPG::Client::ElfFarmSeedData* a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::RPG::Client::ElfFarmSeedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYSEED_OFFSET))(a1);
		}

		static ::RPG::Client::ElfFarmProductData* GetProductByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYITEMID_OFFSET))(a1);
		}

		static ::RPG::Client::ElfRestaurantFestivalData* GetFestival(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantFestivalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFESTIVAL_OFFSET))(a1);
		}

		static ::RPG::Client::ElfRestaurantModule* GetModule()
		{
			return ((::RPG::Client::ElfRestaurantModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMODULE_OFFSET))();
		}

		static ::RPG::Client::ElfRestaurantMediator* GetRestaurantMediator()
		{
			return ((::RPG::Client::ElfRestaurantMediator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETRESTAURANTMEDIATOR_OFFSET))();
		}

		static ::RPG::Client::ElfRestaurantManageGameplayModel* GetGameplayModel()
		{
			return ((::RPG::Client::ElfRestaurantManageGameplayModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETGAMEPLAYMODEL_OFFSET))();
		}

		static ::System::Boolean IsUnlockAllSatisified(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKALLSATISIFIED_OFFSET))(a1);
		}

		static ::System::Boolean IsUnlockStatisfied(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKSTATISFIED_OFFSET))(a1);
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYID_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYID_OFFSET))();
		}

		static ::System::String* GetCurrencyItemIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMICONPATH_OFFSET))();
		}

		static ::System::String* GetCurrencyItemCurrencyIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMCURRENCYICONPATH_OFFSET))();
		}

		static ::System::UInt32 GetDefaultRecipeID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETDEFAULTRECIPEID_OFFSET))();
		}

		static ::System::UInt32 GetMaxRecipeSlotNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXRECIPESLOTNUM_OFFSET))();
		}

		static ::System::UInt32 GetFirstDayCustomerCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYCUSTOMERCNT_OFFSET))();
		}

		static ::System::UInt32 GetFirstDayTimeCountDown()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYTIMECOUNTDOWN_OFFSET))();
		}

		static ::System::UInt32 GetManageMaxFoodCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMANAGEMAXFOODCNT_OFFSET))();
		}

		static ::System::UInt32 GetLightconeRewardsRefID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETLIGHTCONEREWARDSREFID_OFFSET))();
		}

		static ::System::UInt32 GetActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetSeedRelativeRecipe(::RPG::Client::ElfFarmSeedData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::RPG::Client::ElfFarmSeedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETSEEDRELATIVERECIPE_OFFSET))(a1);
		}

		static ::System::Void _SafeInitParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__SAFEINITPARAMS_OFFSET))();
		}

		static ::System::Single GetEventTalkWriteTime(::RPG::Client::TextID a1)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETEVENTTALKWRITETIME_OFFSET))(a1);
		}

		static ::System::Boolean CanHarvest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_CANHARVEST_OFFSET))();
		}

		static ::System::Boolean HasEmptyCell()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_HASEMPTYCELL_OFFSET))();
		}

		static ::System::Boolean IsCellAllEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISCELLALLEMPTY_OFFSET))();
		}

		static ::System::Boolean get_UseBatchPlanting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GET_USEBATCHPLANTING_OFFSET))();
		}

		static ::System::Void set_UseBatchPlanting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_SET_USEBATCHPLANTING_OFFSET))(a1);
		}

		static ::System::Boolean IsFarmBatchPlanting(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFARMBATCHPLANTING_OFFSET))(a1);
		}

		static ::System::Boolean IsBatchModeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISBATCHMODEUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsCurProgressQuestFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISCURPROGRESSQUESTFINISHED_OFFSET))();
		}

		static ::System::Boolean ShouldLockByProgressUpgradeMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_SHOULDLOCKBYPROGRESSUPGRADEMISSION_OFFSET))();
		}

		static ::System::Boolean IsEntranceLocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISENTRANCELOCKED_OFFSET))();
		}

		static ::System::UInt32 GetLockMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETLOCKMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsSecondRecipeSlotUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISSECONDRECIPESLOTUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsRecipeLevelUpUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISRECIPELEVELUPUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTradeOrderUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISTRADEORDERUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsFeverUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFEVERUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTopFoodUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISTOPFOODUNLOCK_OFFSET))();
		}

		static ::UnityEngine::Camera* _GetCamera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETCAMERA_OFFSET))();
		}

		static ::UnityEngine::Ray _GetRayFromMouse()
		{
			return ((::UnityEngine::Ray(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMMOUSE_OFFSET))();
		}

		static ::UnityEngine::Ray _GetRayFromScreenPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMSCREENPOINT_OFFSET))(a1);
		}

		static ::RPG::Client::ElfRuntimeCell* TryGetRaycastTargetElfRuntimeCell(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
		{
			return ((::RPG::Client::ElfRuntimeCell*(*)(::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRUNTIMECELL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView* TryGetRaycastTargetElfRestaurantView(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView*(*)(::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRESTAURANTVIEW_OFFSET))(a1, a2);
		}

		static ::System::Void ClearRaycastCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_CLEARRAYCASTCACHE_OFFSET))();
		}
	};
}
