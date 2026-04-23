#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemCostState.h"
#include "unitysdk/System/Object.h"

class Class_1_0C1F75E6F46BE66A;
class Class_1_89594B6432B76BD8;
class Class_1_8BD61E18257A8F70;
class Class_1_FACDDA8DA3FDFF6D;
namespace Proto { class ItemCost; }
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET UNITYSDK_OFFSET(0xA65D300)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xA65CDB0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0xA65CFF0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA65D060)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA65C930)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA65CCD0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA65C950)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xA65CFB0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET UNITYSDK_OFFSET(0xA65CED0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA65C940)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET UNITYSDK_OFFSET(0xA65DB70)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET UNITYSDK_OFFSET(0xA65DC30)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET UNITYSDK_OFFSET(0xA65D890)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATE_OFFSET UNITYSDK_OFFSET(0xA65D700)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET UNITYSDK_OFFSET(0xA65D420)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CLEARRESULTS_OFFSET UNITYSDK_OFFSET(0xA65D640)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA65CEC0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET UNITYSDK_OFFSET(0xA65DCF0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET UNITYSDK_OFFSET(0xA65CAB0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__TRYRECALCULATE_OFFSET UNITYSDK_OFFSET(0xA65C9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator_TypeDefinitionIndex = 60496;

	class ItemCostCalculator : public ::System::Object
	{
	public:
		::Class_1_FACDDA8DA3FDFF6D* _ItemCostCalculatorContext; // 0x10
		::Class_1_0C1F75E6F46BE66A* _ItemConvert; // 0x18
		::Class_1_8BD61E18257A8F70* _ItemCompose; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* _Results; // 0x28
		::Class_1_89594B6432B76BD8* _ItemExchange; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Targets; // 0x38
		::System::Boolean _IsDirty_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET))(this, value);
		}

		::RPG::Client::ItemCostState get_State()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* get_Results()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET))(this);
		}

		static ::RPG::Client::ItemCostCalculator* Create(::System::Boolean isEnableCompose, ::System::Boolean isEnableConvert)
		{
			return ((::RPG::Client::ItemCostCalculator*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET))(isEnableCompose, isEnableConvert);
		}

		::System::Void SetTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* itemConfigs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET))(this, itemConfigs);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* Generate()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET))(this);
		}

		::System::UInt32 GetItemNeedCount(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET))(this, itemID);
		}

		::System::Boolean CheckTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* itemConfigs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET))(this, itemConfigs);
		}

		::System::Void _TryRecalculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__TRYRECALCULATE_OFFSET))(this);
		}

		::System::Void _ClearResults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CLEARRESULTS_OFFSET))(this);
		}

		::System::Void _Calculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATE_OFFSET))(this);
		}

		::RPG::Client::ItemCostCalculateResult* _CalculateSingle(::RPG::GameCore::ItemConfig* item)
		{
			return ((::RPG::Client::ItemCostCalculateResult*(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET))(this, item);
		}

		::System::Boolean _CheckSingle(::RPG::GameCore::ItemConfig* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET))(this, item);
		}

		::System::Void _CalculateCompose(::RPG::GameCore::ItemConfig* item, ::System::UInt32 targetCount, ::System::UInt32& composeCount, ::RPG::Client::ComposeItemCost*& composeCost)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::RPG::Client::ComposeItemCost*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET))(this, item, targetCount, composeCount, composeCost);
		}

		::System::Void _CalculateConvert(::RPG::GameCore::ItemConfig* item, ::System::UInt32 targetQuantity, ::System::UInt32& convertQuantity, ::System::UInt32& convertibleItemID, ::System::UInt32& convertibleItemConsumedQuantity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET))(this, item, targetQuantity, convertQuantity, convertibleItemID, convertibleItemConsumedQuantity);
		}

		::RPG::Client::ItemCostState _GetState()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemData* _GetComposeData(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET))(this, itemID);
		}
	};
}
