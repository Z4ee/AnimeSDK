#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemCostState.h"
#include "unitysdk/System/Object.h"

class Class_1_0C1F75E6F46BE66A;
class Class_1_6396E99C6B13C372;
class Class_1_8BD61E18257A8F70;
class Class_1_9694CD6B4882E9AA;
namespace Proto { class ItemCost; }
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET UNITYSDK_OFFSET(0xBD64390)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xBD63ED0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0xBD64110)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET UNITYSDK_OFFSET(0xBD64180)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xBD63A70)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0xBD63DA0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBD63A90)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xBD640D0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET UNITYSDK_OFFSET(0xBD63FF0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xBD63A80)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET UNITYSDK_OFFSET(0xBD64CA0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET UNITYSDK_OFFSET(0xBD64D60)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET UNITYSDK_OFFSET(0xBD649C0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATE_OFFSET UNITYSDK_OFFSET(0xBD647A0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET UNITYSDK_OFFSET(0xBD64490)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CLEARRESULTS_OFFSET UNITYSDK_OFFSET(0xBD646B0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBD63FE0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET UNITYSDK_OFFSET(0xBD64E20)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET UNITYSDK_OFFSET(0xBD63B80)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__TRYRECALCULATE_OFFSET UNITYSDK_OFFSET(0xBD63B20)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator_TypeDefinitionIndex = 61430;

	class ItemCostCalculator : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Targets; // 0x10
		::Class_1_6396E99C6B13C372* _ItemCostCalculatorContext; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* _Results; // 0x20
		::Class_1_0C1F75E6F46BE66A* _ItemConvert; // 0x28
		::Class_1_9694CD6B4882E9AA* _ItemExchange; // 0x30
		::Class_1_8BD61E18257A8F70* _ItemCompose; // 0x38
		::System::Boolean _IsDirty_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::RPG::Client::ItemCostState get_State()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* get_Results()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET))(this);
		}

		static ::RPG::Client::ItemCostCalculator* Create(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ItemCostCalculator*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* Generate()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET))(this);
		}

		::System::UInt32 GetItemNeedCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean CheckTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET))(this, a1);
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

		::RPG::Client::ItemCostCalculateResult* _CalculateSingle(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::RPG::Client::ItemCostCalculateResult*(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSingle(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET))(this, a1);
		}

		::System::Void _CalculateCompose(::RPG::GameCore::ItemConfig* a1, ::System::UInt32 a2, ::System::UInt32& a3, ::RPG::Client::ComposeItemCost*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::RPG::Client::ComposeItemCost*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _CalculateConvert(::RPG::GameCore::ItemConfig* a1, ::System::UInt32 a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::ItemCostState _GetState()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemData* _GetComposeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET))(this, a1);
		}
	};
}
