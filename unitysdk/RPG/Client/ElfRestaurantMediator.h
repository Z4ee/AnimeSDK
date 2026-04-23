#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2250AFBBC876BF24;
namespace RPG::Client { class ElfAbilityData; }
namespace RPG::Client { class ElfOrderInfo; }
namespace RPG::Client { class ElfRestaurantGameEntityProxy; }
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDCOOKFOODORDER_OFFSET UNITYSDK_OFFSET(0xA267C90)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_1_OFFSET UNITYSDK_OFFSET(0xA267BD0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_OFFSET UNITYSDK_OFFSET(0xA267B10)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CANCELABILITY_OFFSET UNITYSDK_OFFSET(0xA268270)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGECOOKINGORDER_OFFSET UNITYSDK_OFFSET(0xA266890)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGEDRINKORDER_OFFSET UNITYSDK_OFFSET(0xA266840)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHEFCOOK_OFFSET UNITYSDK_OFFSET(0xA2668E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_COOKFOODFINISH_OFFSET UNITYSDK_OFFSET(0xA266940)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_DELIVERFOOD_OFFSET UNITYSDK_OFFSET(0xA2669F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25BF30)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_FINISHGAMEUI_OFFSET UNITYSDK_OFFSET(0xA266DE0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETALLWAITERENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA268320)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCHEFEMPLOYEEIDLIST_OFFSET UNITYSDK_OFFSET(0xA267140)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCURFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0xA267F40)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA268620)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXY_OFFSET UNITYSDK_OFFSET(0xA265E70)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETFEVERABILITYDATA_OFFSET UNITYSDK_OFFSET(0xA268070)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETMAXFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0xA267E60)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETNEXTFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0xA267FE0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA267DC0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_CUSTOMERWAITBLOODRATIO_OFFSET UNITYSDK_OFFSET(0xA268A30)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_DRINKMACHINEWPOS_OFFSET UNITYSDK_OFFSET(0xA268820)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_FOCUSESCAPEBILLCUSTOMERID_OFFSET UNITYSDK_OFFSET(0xA268C00)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA268AF0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_HEADWAITERENTITY_OFFSET UNITYSDK_OFFSET(0xA268BA0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAKEDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0xA2688B0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAXDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0xA268970)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET__GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA267340)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEBEHAVIORBUBBLE_OFFSET UNITYSDK_OFFSET(0xA2660B0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDENEXTWAVETIPS_OFFSET UNITYSDK_OFFSET(0xA266BA0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEUIBUFFPERFORM_OFFSET UNITYSDK_OFFSET(0xA266A60)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_INIT_OFFSET UNITYSDK_OFFSET(0xA25BD70)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_PENDINGDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0xA266110)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REMOVEENTITYPROXY_OFFSET UNITYSDK_OFFSET(0xA2687A0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA267590)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSSELECTEVENT_OFFSET UNITYSDK_OFFSET(0xA2676B0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA267D20)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWBEHAVIORBUBBLE_OFFSET UNITYSDK_OFFSET(0xA265E10)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWCUSTOMERPAYBUBBLE_OFFSET UNITYSDK_OFFSET(0xA266170)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWEVENTBUBBLE_OFFSET UNITYSDK_OFFSET(0xA265CC0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWGETCURRENCYBUBBLE_OFFSET UNITYSDK_OFFSET(0xA2664F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNEXTWAVETIPS_OFFSET UNITYSDK_OFFSET(0xA266B20)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_1_OFFSET UNITYSDK_OFFSET(0xA267410)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_OFFSET UNITYSDK_OFFSET(0xA267350)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWSPECIALTOAST_OFFSET UNITYSDK_OFFSET(0xA2674E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWTAKEORDERBUBBLE_OFFSET UNITYSDK_OFFSET(0xA266660)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWUIBUFFPERFORM_OFFSET UNITYSDK_OFFSET(0xA266AC0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAITERAUTOWORK_OFFSET UNITYSDK_OFFSET(0xA266BF0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAVEORDERBUBBLE_OFFSET UNITYSDK_OFFSET(0xA2666C0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_TRYNOTIFYCACHE_OFFSET UNITYSDK_OFFSET(0xA266FB0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_USEABILITY_OFFSET UNITYSDK_OFFSET(0xA268180)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA25BD60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantMediator_TypeDefinitionIndex = 58740;

	class ElfRestaurantMediator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24*>* _CacheNotifyParams; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfRestaurantGameEntityProxy*>* EntityProxies; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void ShowEventBubble(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWEVENTBUBBLE_OFFSET))(this, eventParam);
		}

		::System::Void ShowBehaviorBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWBEHAVIORBUBBLE_OFFSET))(this, entity);
		}

		::System::Void HideBehaviorBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEBEHAVIORBUBBLE_OFFSET))(this, entity);
		}

		::System::Void PendingDestroyEntity(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_PENDINGDESTROYENTITY_OFFSET))(this, entity);
		}

		::System::Void ShowCustomerPayBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWCUSTOMERPAYBUBBLE_OFFSET))(this, entity);
		}

		::System::Void ShowGetCurrencyBubble(::UnityEngine::Vector3 targetPosition, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWGETCURRENCYBUBBLE_OFFSET))(this, targetPosition, val);
		}

		::System::Void ShowTakeOrderBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWTAKEORDERBUBBLE_OFFSET))(this, entity);
		}

		::System::Void ShowWaveOrderBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAVEORDERBUBBLE_OFFSET))(this, entity);
		}

		::System::Void ChangeDrinkOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGEDRINKORDER_OFFSET))(this);
		}

		::System::Void ChangeCookingOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGECOOKINGORDER_OFFSET))(this);
		}

		::System::Void ChefCook(::RPG::Client::ElfOrderInfo* order)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfOrderInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHEFCOOK_OFFSET))(this, order);
		}

		::System::Void CookFoodFinish(::System::Int32 chefRuntimeID, ::System::UInt32 recipeID, ::System::Boolean isPerfect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_COOKFOODFINISH_OFFSET))(this, chefRuntimeID, recipeID, isPerfect);
		}

		::System::Void DeliverFood(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_DELIVERFOOD_OFFSET))(this, recipeID);
		}

		::System::Void HideUIBuffPerform(::System::String* performName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEUIBUFFPERFORM_OFFSET))(this, performName);
		}

		::System::Void ShowUIBuffPerform(::System::String* performName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWUIBUFFPERFORM_OFFSET))(this, performName);
		}

		::System::Void ShowNextWaveTips(::RPG::Client::TextID nextWaveTips)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNEXTWAVETIPS_OFFSET))(this, nextWaveTips);
		}

		::System::Void HideNextWaveTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDENEXTWAVETIPS_OFFSET))(this);
		}

		::System::Void ShowWaiterAutoWork(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAITERAUTOWORK_OFFSET))(this, entity);
		}

		::System::Void FinishGameUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_FINISHGAMEUI_OFFSET))(this);
		}

		::System::Void TryNotifyCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_TRYNOTIFYCACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantGameEntityProxy*>* GetChefEmployeeIDList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantGameEntityProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCHEFEMPLOYEEIDLIST_OFFSET))(this);
		}

		::System::Void ShowNormalToast(::RPG::Client::TextID textID, ::Il2CppArray<::System::Single>* args)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_OFFSET))(this, textID, args);
		}

		::System::Void ShowNormalToast_1(::System::String* textID, ::Il2CppArray<::System::Single>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_1_OFFSET))(this, textID, args);
		}

		::System::Void ShowSpecialToast(::RPG::Client::TextID textID, ::Il2CppArray<::System::Single>* args)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWSPECIALTOAST_OFFSET))(this, textID, args);
		}

		::System::Boolean ReqProcessEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam, ::System::Boolean isAuto)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSEVENT_OFFSET))(this, eventParam, isAuto);
		}

		::System::Boolean ReqProcessSelectEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam, ::System::UInt32 recommendRecipeID, ::System::UInt32 optionEffectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSSELECTEVENT_OFFSET))(this, eventParam, recommendRecipeID, optionEffectID);
		}

		::System::Boolean AddDeliveryOrder(::System::Int32 foodEntityID, ::System::Int32 customerRuntimeID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_OFFSET))(this, foodEntityID, customerRuntimeID, isAI);
		}

		::System::Boolean AddDeliveryOrder_1(::System::Collections::Generic::List_1<::System::Int32>* foodEntityIDList, ::System::Int32 customerRuntimeID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_1_OFFSET))(this, foodEntityIDList, customerRuntimeID, isAI);
		}

		::System::Boolean AddCookFoodOrder(::System::UInt32 recipeID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDCOOKFOODORDER_OFFSET))(this, recipeID, isAI);
		}

		::System::Void SetSimulationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SETSIMULATIONSPEED_OFFSET))(this, value);
		}

		::System::Single GetSimulationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETSIMULATIONSPEED_OFFSET))(this);
		}

		::System::UInt32 GetMaxFeverLevelRequireComboCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETMAXFEVERLEVELREQUIRECOMBOCNT_OFFSET))(this);
		}

		::System::UInt32 GetCurFeverLevelRequireComboCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCURFEVERLEVELREQUIRECOMBOCNT_OFFSET))(this);
		}

		::System::UInt32 GetNextFeverLevelRequireComboCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETNEXTFEVERLEVELREQUIRECOMBOCNT_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* GetFeverAbilityData()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETFEVERABILITYDATA_OFFSET))(this);
		}

		::System::Void UseAbility(::RPG::Client::LittleGame::ElfRestaurantGameEntity* ownerEntity, ::System::UInt32 abilityID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_USEABILITY_OFFSET))(this, ownerEntity, abilityID, targetEntity);
		}

		::System::Void CancelAbility(::RPG::Client::LittleGame::ElfRestaurantGameEntity* ownerEntity, ::System::UInt32 abilityID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CANCELABILITY_OFFSET))(this, ownerEntity, abilityID, targetEntity);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetAllWaiterEntityRuntimeID()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETALLWAITERENTITYRUNTIMEID_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantGameEntityProxy* GetEntityProxy(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::RPG::Client::ElfRestaurantGameEntityProxy*(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXY_OFFSET))(this, entity);
		}

		::RPG::Client::ElfRestaurantGameEntityProxy* GetEntityProxyByRuntimeID(::System::Int32 runtimeID)
		{
			return ((::RPG::Client::ElfRestaurantGameEntityProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXYBYRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::System::Void RemoveEntityProxy(::RPG::Client::ElfRestaurantGameEntityProxy* entityProxy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantGameEntityProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REMOVEENTITYPROXY_OFFSET))(this, entityProxy);
		}

		::UnityEngine::Vector3 get_DrinkMachineWPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_DRINKMACHINEWPOS_OFFSET))(this);
		}

		::System::UInt32 get_MakeDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAKEDRINKCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAXDRINKCOUNT_OFFSET))(this);
		}

		::System::Single get_CustomerWaitBloodRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_CUSTOMERWAITBLOODRATIO_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* get_GameEntity()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_GAMEENTITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* get_HeadWaiterEntity()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_HEADWAITERENTITY_OFFSET))(this);
		}

		::System::Int32 get_FocusEscapeBillCustomerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_FOCUSESCAPEBILLCUSTOMERID_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantGameInstance* get__GameInstance()
		{
			return ((::RPG::Client::ElfRestaurantGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET__GAMEINSTANCE_OFFSET))(this);
		}
	};
}
