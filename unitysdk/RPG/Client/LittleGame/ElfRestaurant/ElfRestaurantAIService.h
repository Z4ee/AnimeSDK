#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_938C223DA5C0C9C7;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService_DelayBehavior; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET UNITYSDK_OFFSET(0xBDE87B0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET UNITYSDK_OFFSET(0xBDE6120)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET UNITYSDK_OFFSET(0xBDE5A20)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET UNITYSDK_OFFSET(0xBDE6F90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET UNITYSDK_OFFSET(0xBDE6D20)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET UNITYSDK_OFFSET(0xBDE6B80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET UNITYSDK_OFFSET(0xBDE4CF0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET UNITYSDK_OFFSET(0xBDE4C00)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET UNITYSDK_OFFSET(0xBDE8560)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDGAMETIMEOVERORDER_OFFSET UNITYSDK_OFFSET(0xBDE7CA0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET UNITYSDK_OFFSET(0xBDE6710)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET UNITYSDK_OFFSET(0xBDE8F30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET UNITYSDK_OFFSET(0xBDE8E80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET UNITYSDK_OFFSET(0xBDE97E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET UNITYSDK_OFFSET(0xBDE9280)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xBDE8C10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBDE9D30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDE4BB0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET UNITYSDK_OFFSET(0xBDE7070)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET UNITYSDK_OFFSET(0xBDE8410)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETWAITCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0xBDE81C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_HASWAITCUSTOMER_OFFSET UNITYSDK_OFFSET(0xBDE7F80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET UNITYSDK_OFFSET(0xBDE84D0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xBDE7230)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET UNITYSDK_OFFSET(0xBDE7B00)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBDE7880)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET UNITYSDK_OFFSET(0xBDE89C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBDE9A80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBDEA100)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDEA360)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE4A90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBDE9FB0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantAIService_TypeDefinitionIndex = 71774;

	class ElfRestaurantAIService : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AIEvent_EndSuperEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9B0);
		}
		static ::System::String** StaticGet_AIEvent_Leave()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9B8);
		}
		static ::System::String** StaticGet_AIEvent_Order()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9C0);
		}
		static ::System::String** StaticGet_AIEvent_GoDrink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9C8);
		}
		static ::System::String** StaticGet_AIEvent_ContinueOrderRecipe()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9D0);
		}
		static ::System::String** StaticGet_AIEvent_ContinueWaitFood()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9D8);
		}
		static ::System::String** StaticGet_AIEvent_MoveToQueue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9E0);
		}
		static ::System::String** StaticGet_AIEvent_ProcessBill()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9E8);
		}
		static ::System::String** StaticGet_AIEvent_GoExtraPay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantAIService_TypeDefinitionIndex)->GetStaticField(0xA9F0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayTextBehaviors; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayEmojiBehaviors; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayEffectBehaviors; // 0x20
		::Class_2_80F8710F847F1248* _Context; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelayAudioEffectBehaviors; // 0x30
		::Class_1_938C223DA5C0C9C7* ExtraPayTableSO; // 0x38
		::Class_3_F4528A5C0F861AF2* _Services; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* DelaySpecialBubbleBehaviors; // 0x48
		::Class_1_938C223DA5C0C9C7* DrinkMachineSO; // 0x50
		::UnityEngine::Vector3 ExtraPayEventWPos; // 0x58
		::UnityEngine::Vector3 DrinkMachineEventWPos; // 0x64
		::System::Int32 UnCollectedExtraGolden; // 0x70

		::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddDeliveryOrder(::System::Int32 a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddDeliveryOrder_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCleanTableOrder(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCleanObstacleOrder(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddProcessCustomerEventOrder(::RPG::GameCore::RestaurantNormalEventType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCookFoodOrder(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddCookFoodOrder_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddCookFoodOrder_2(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET))(this, a1, a2);
		}

		::System::Void DropFoodOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET))(this, a1);
		}

		::System::Boolean ReqProcessEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReqProcessSelectEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET))(this, a1, a2, a3);
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

		::System::Int32 GetThumbCount(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsPay(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET))(this, a1);
		}

		::System::Void AddExtraPay(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET))(this, a1);
		}

		::System::Void AddBonusEvent(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryAddDrinkEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* AutoGetOrderCustomer()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET))(this);
		}

		::System::Int32 AutoGetDeliveryFood(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDeliveryCustomer(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDirtyTableSlot(::System::Int32& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDirtyObstacle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET))(this);
		}

		::System::Void SetBehavior(::System::Int32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearBehavior(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET))(this, a1);
		}

		::System::Void _AddBehavior(::System::Int32 a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET))(this, a1, a2);
		}

		::System::Void _AddDelayBehavior(::System::Int32 a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateContentItem*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveBehavior(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET))(this, a1, a2);
		}
	};
}
