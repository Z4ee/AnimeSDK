#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ADC27DBA8547EDD7;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService_DelayBehavior; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET UNITYSDK_OFFSET(0x99A7210)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET UNITYSDK_OFFSET(0x99A4AF0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET UNITYSDK_OFFSET(0x99A4450)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET UNITYSDK_OFFSET(0x99A5A80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET UNITYSDK_OFFSET(0x99A57F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET UNITYSDK_OFFSET(0x99A5670)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET UNITYSDK_OFFSET(0x99A36F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET UNITYSDK_OFFSET(0x99A3630)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET UNITYSDK_OFFSET(0x99A6FC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDGAMETIMEOVERORDER_OFFSET UNITYSDK_OFFSET(0x99A6660)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET UNITYSDK_OFFSET(0x99A5150)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET UNITYSDK_OFFSET(0x99A79B0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET UNITYSDK_OFFSET(0x99A7900)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x99A81F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET UNITYSDK_OFFSET(0x99A7C80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET UNITYSDK_OFFSET(0x99A7680)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x99A8710)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A35E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET UNITYSDK_OFFSET(0x99A5B30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET UNITYSDK_OFFSET(0x99A6E70)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETWAITCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x99A6C00)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_HASWAITCUSTOMER_OFFSET UNITYSDK_OFFSET(0x99A69A0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET UNITYSDK_OFFSET(0x99A6F30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x99A5C90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET UNITYSDK_OFFSET(0x99A6510)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x99A6270)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET UNITYSDK_OFFSET(0x99A7420)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x99A84A0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x99A8A80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x99A8C60)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x99A34C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x99A8940)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantAIService_TypeDefinitionIndex = 62912;

	class ElfRestaurantAIService : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AIEvent_GoExtraPay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C20);
		}
		static ::System::String** StaticGet_AIEvent_Leave()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C28);
		}
		static ::System::String** StaticGet_AIEvent_ContinueOrderRecipe()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C30);
		}
		static ::System::String** StaticGet_AIEvent_MoveToQueue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C38);
		}
		static ::System::String** StaticGet_AIEvent_ProcessBill()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C40);
		}
		static ::System::String** StaticGet_AIEvent_ContinueWaitFood()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C48);
		}
		static ::System::String** StaticGet_AIEvent_EndSuperEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C50);
		}
		static ::System::String** StaticGet_AIEvent_GoDrink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C58);
		}
		static ::System::String** StaticGet_AIEvent_Order()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0x23C60);
		}
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelaySpecialBubbleBehaviors; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayAudioEffectBehaviors; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayEmojiBehaviors; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayEffectBehaviors; // 0x28
		::Class_2_43D1AA62A6D00FFF* _Context; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayTextBehaviors; // 0x38
		::Class_1_ADC27DBA8547EDD7* ExtraPayTableSO; // 0x40
		::Class_1_ADC27DBA8547EDD7* DrinkMachineSO; // 0x48
		::Class_3_F4528A5C0F861AF2* _Services; // 0x50
		::UnityEngine::Vector3 ExtraPayEventWPos; // 0x58
		::UnityEngine::Vector3 DrinkMachineEventWPos; // 0x64
		::System::Int32 UnCollectedExtraGolden; // 0x70

		::System::Void _ctor(::Class_3_F4528A5C0F861AF2* services, ::Class_2_43D1AA62A6D00FFF* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CTOR_OFFSET))(this, services, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddDeliveryOrder(::System::Int32 foodEntityID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET))(this, foodEntityID, customerEntity, isAI);
		}

		::System::Boolean AddDeliveryOrder_1(::System::Collections::Generic::List_1<::System::Int32>* foodEntityIDList, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET))(this, foodEntityIDList, customerEntity, isAI);
		}

		::System::Boolean AddCleanTableOrder(::System::Int32 tableEntityID, ::System::Int32 slotIndex, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET))(this, tableEntityID, slotIndex, isAI);
		}

		::System::Boolean AddCleanObstacleOrder(::System::Int32 obEntityID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET))(this, obEntityID, isAI);
		}

		::System::Boolean AddProcessCustomerEventOrder(::RPG::GameCore::RestaurantNormalEventType eventType, ::System::Int32 customerEntityID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET))(this, eventType, customerEntityID, isAI);
		}

		::System::Boolean AddCookFoodOrder(::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET))(this, customerEntity, isAI);
		}

		::System::Boolean AddCookFoodOrder_1(::System::UInt32 recipeID, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET))(this, recipeID, isAI);
		}

		::System::Boolean AddCookFoodOrder_2(::System::Collections::Generic::List_1<::System::UInt32>* recipeIDs, ::System::Boolean isAI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET))(this, recipeIDs, isAI);
		}

		::System::Void DropFoodOrder(::System::Int32 foodEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET))(this, foodEntityID);
		}

		::System::Boolean ReqProcessEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam, ::System::Boolean isAuto)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET))(this, eventParam, isAuto);
		}

		::System::Boolean ReqProcessSelectEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* eventParam, ::System::UInt32 recommendRecipeID, ::System::UInt32 optionEffectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET))(this, eventParam, recommendRecipeID, optionEffectID);
		}

		::System::Boolean AddGameTimeOverOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDGAMETIMEOVERORDER_OFFSET))(this);
		}

		::System::Boolean HasWaitCustomer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_HASWAITCUSTOMER_OFFSET))(this);
		}

		::System::Int32 GetWaitCustomerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETWAITCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetThumbCount(::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET))(this, customerEntity);
		}

		::System::Boolean IsPay(::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET))(this, customerEntity);
		}

		::System::Void AddExtraPay(::System::Int32 bonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET))(this, bonus);
		}

		::System::Void AddBonusEvent(::UnityEngine::Vector3 eventWPos, ::System::Int32 bonus, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET))(this, eventWPos, bonus, duration);
		}

		::System::Void TryAddDrinkEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* AutoGetOrderCustomer()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET))(this);
		}

		::System::Int32 AutoGetDeliveryFood(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET))(this, recipeID);
		}

		::System::Int32 AutoGetDeliveryCustomer(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET))(this, recipeID);
		}

		::System::Int32 AutoGetDirtyTableSlot(::System::Int32& slotIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET))(this, slotIndex);
		}

		::System::Int32 AutoGetDirtyObstacle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET))(this);
		}

		::System::Void SetBehavior(::System::Int32 entityID, ::System::UInt32 behaviorID, ::System::String* behaviorName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET))(this, entityID, behaviorID, behaviorName);
		}

		::System::Void ClearBehavior(::System::Int32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET))(this, entityID);
		}

		::System::Void _AddBehavior(::System::Int32 entityID, ::RPG::GameCore::ElfBehaviorStateItem* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET))(this, entityID, behavior);
		}

		::System::Void _AddDelayBehavior(::System::Int32 entityID, ::RPG::GameCore::ElfBehaviorStateContentItem* behaviorContent, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* behaviors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateContentItem*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET))(this, entityID, behaviorContent, behaviors);
		}

		::System::Void _RemoveBehavior(::System::Int32 entityID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* behaviors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET))(this, entityID, behaviors);
		}
	};
}
