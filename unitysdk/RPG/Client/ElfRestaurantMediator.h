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

#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDCOOKFOODORDER_OFFSET UNITYSDK_OFFSET(0x18D6DEC0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_1_OFFSET UNITYSDK_OFFSET(0x18D6DD80)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_OFFSET UNITYSDK_OFFSET(0x18D6DC40)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CANCELABILITY_OFFSET UNITYSDK_OFFSET(0x18D6E630)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGECOOKINGORDER_OFFSET UNITYSDK_OFFSET(0x18D6C6F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGEDRINKORDER_OFFSET UNITYSDK_OFFSET(0x18D6C6A0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHEFCOOK_OFFSET UNITYSDK_OFFSET(0x18D6C740)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_COOKFOODFINISH_OFFSET UNITYSDK_OFFSET(0x18D6C7A0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_DELIVERFOOD_OFFSET UNITYSDK_OFFSET(0x18D6C850)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D6B8E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_FINISHGAMEUI_OFFSET UNITYSDK_OFFSET(0x18D6CC90)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETALLWAITERENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18D6E6E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCHEFEMPLOYEEIDLIST_OFFSET UNITYSDK_OFFSET(0x18D6D010)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETCURFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0x18D6E250)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18D6EA80)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXY_OFFSET UNITYSDK_OFFSET(0x18D6BD30)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETFEVERABILITYDATA_OFFSET UNITYSDK_OFFSET(0x18D6E3E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETMAXFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0x18D6E110)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETNEXTFEVERLEVELREQUIRECOMBOCNT_OFFSET UNITYSDK_OFFSET(0x18D6E320)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x18D6E050)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_CUSTOMERWAITBLOODRATIO_OFFSET UNITYSDK_OFFSET(0x18D6EF90)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_DRINKMACHINEWPOS_OFFSET UNITYSDK_OFFSET(0x18D6ECB0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_FOCUSESCAPEBILLCUSTOMERID_OFFSET UNITYSDK_OFFSET(0x18D6F1E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x18D6F0B0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_HEADWAITERENTITY_OFFSET UNITYSDK_OFFSET(0x18D6F160)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAKEDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x18D6ED70)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET_MAXDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x18D6EE80)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_GET__GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D6D2F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEBEHAVIORBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6BF90)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDENEXTWAVETIPS_OFFSET UNITYSDK_OFFSET(0x18D6CA00)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEUIBUFFPERFORM_OFFSET UNITYSDK_OFFSET(0x18D6C8C0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_INIT_OFFSET UNITYSDK_OFFSET(0x18D6B7F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_PENDINGDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x18D6BFF0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REMOVEENTITYPROXY_OFFSET UNITYSDK_OFFSET(0x18D6EC10)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x18D6D570)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSSELECTEVENT_OFFSET UNITYSDK_OFFSET(0x18D6D6E0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x18D6DF80)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWBEHAVIORBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6BCD0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWCUSTOMERPAYBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6C050)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWEVENTBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6BB80)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWGETCURRENCYBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6C360)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNEXTWAVETIPS_OFFSET UNITYSDK_OFFSET(0x18D6C980)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_1_OFFSET UNITYSDK_OFFSET(0x18D6D3F0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_OFFSET UNITYSDK_OFFSET(0x18D6D330)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWSPECIALTOAST_OFFSET UNITYSDK_OFFSET(0x18D6D4C0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWTAKEORDERBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6C4D0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWUIBUFFPERFORM_OFFSET UNITYSDK_OFFSET(0x18D6C920)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAITERAUTOWORK_OFFSET UNITYSDK_OFFSET(0x18D6CA50)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAVEORDERBUBBLE_OFFSET UNITYSDK_OFFSET(0x18D6C530)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_TRYNOTIFYCACHE_OFFSET UNITYSDK_OFFSET(0x18D6CEB0)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR_USEABILITY_OFFSET UNITYSDK_OFFSET(0x18D6E540)
#define RPG_CLIENT_ELFRESTAURANTMEDIATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6F280)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantMediator_TypeDefinitionIndex = 60955;

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

		::System::Void ShowEventBubble(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWEVENTBUBBLE_OFFSET))(this, a1);
		}

		::System::Void ShowBehaviorBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWBEHAVIORBUBBLE_OFFSET))(this, a1);
		}

		::System::Void HideBehaviorBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEBEHAVIORBUBBLE_OFFSET))(this, a1);
		}

		::System::Void PendingDestroyEntity(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_PENDINGDESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Void ShowCustomerPayBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWCUSTOMERPAYBUBBLE_OFFSET))(this, a1);
		}

		::System::Void ShowGetCurrencyBubble(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWGETCURRENCYBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowTakeOrderBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWTAKEORDERBUBBLE_OFFSET))(this, a1);
		}

		::System::Void ShowWaveOrderBubble(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAVEORDERBUBBLE_OFFSET))(this, a1);
		}

		::System::Void ChangeDrinkOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGEDRINKORDER_OFFSET))(this);
		}

		::System::Void ChangeCookingOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHANGECOOKINGORDER_OFFSET))(this);
		}

		::System::Void ChefCook(::RPG::Client::ElfOrderInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfOrderInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CHEFCOOK_OFFSET))(this, a1);
		}

		::System::Void CookFoodFinish(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_COOKFOODFINISH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeliverFood(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_DELIVERFOOD_OFFSET))(this, a1);
		}

		::System::Void HideUIBuffPerform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDEUIBUFFPERFORM_OFFSET))(this, a1);
		}

		::System::Void ShowUIBuffPerform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWUIBUFFPERFORM_OFFSET))(this, a1);
		}

		::System::Void ShowNextWaveTips(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNEXTWAVETIPS_OFFSET))(this, a1);
		}

		::System::Void HideNextWaveTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_HIDENEXTWAVETIPS_OFFSET))(this);
		}

		::System::Void ShowWaiterAutoWork(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWWAITERAUTOWORK_OFFSET))(this, a1);
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

		::System::Void ShowNormalToast(::RPG::Client::TextID a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_OFFSET))(this, a1, a2);
		}

		::System::Void ShowNormalToast_1(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWNORMALTOAST_1_OFFSET))(this, a1, a2);
		}

		::System::Void ShowSpecialToast(::RPG::Client::TextID a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SHOWSPECIALTOAST_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReqProcessEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReqProcessSelectEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REQPROCESSSELECTEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddDeliveryOrder(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddDeliveryOrder_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDDELIVERYORDER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCookFoodOrder(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_ADDCOOKFOODORDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_SETSIMULATIONSPEED_OFFSET))(this, a1);
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

		::System::Void UseAbility(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_USEABILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelAbility(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_CANCELABILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetAllWaiterEntityRuntimeID()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETALLWAITERENTITYRUNTIMEID_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantGameEntityProxy* GetEntityProxy(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::RPG::Client::ElfRestaurantGameEntityProxy*(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantGameEntityProxy* GetEntityProxyByRuntimeID(::System::Int32 a1)
		{
			return ((::RPG::Client::ElfRestaurantGameEntityProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_GETENTITYPROXYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void RemoveEntityProxy(::RPG::Client::ElfRestaurantGameEntityProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantGameEntityProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMEDIATOR_REMOVEENTITYPROXY_OFFSET))(this, a1);
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
