#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D167E0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLEVENT_OFFSET UNITYSDK_OFFSET(0x9D066F0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFINISHEDORDERS_OFFSET UNITYSDK_OFFSET(0x9D065F0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFUNDCHANGE_OFFSET UNITYSDK_OFFSET(0x9D06920)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLPROFIT_OFFSET UNITYSDK_OFFSET(0x9D06690)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9D16910)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDORDERLIST_OFFSET UNITYSDK_OFFSET(0x9D16930)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDSPECIALORDER_OFFSET UNITYSDK_OFFSET(0x9D16950)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDAFTER_OFFSET UNITYSDK_OFFSET(0x9D16890)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDBEFORE_OFFSET UNITYSDK_OFFSET(0x9D16870)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_GOODPROFIT_OFFSET UNITYSDK_OFFSET(0x9D168D0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_ORDERPROFIT_OFFSET UNITYSDK_OFFSET(0x9D168F0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_OVERALLPROFIT_OFFSET UNITYSDK_OFFSET(0x9D168B0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9D16920)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDORDERLIST_OFFSET UNITYSDK_OFFSET(0x9D16940)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDSPECIALORDER_OFFSET UNITYSDK_OFFSET(0x9D16960)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDAFTER_OFFSET UNITYSDK_OFFSET(0x9D168A0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDBEFORE_OFFSET UNITYSDK_OFFSET(0x9D16880)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_GOODPROFIT_OFFSET UNITYSDK_OFFSET(0x9D168E0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_ORDERPROFIT_OFFSET UNITYSDK_OFFSET(0x9D16900)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_OVERALLPROFIT_OFFSET UNITYSDK_OFFSET(0x9D168C0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D034B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyPlacingShipResult_TypeDefinitionIndex = 57435;

	class AlleyPlacingShipResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedOrderList_k__BackingField; // 0x10
		::System::Int32 _FundAfter_k__BackingField; // 0x18
		::System::Int32 _OverallProfit_k__BackingField; // 0x1C
		::System::UInt32 _EventID_k__BackingField; // 0x20
		::System::Int32 _FundBefore_k__BackingField; // 0x24
		::System::Int32 _GoodProfit_k__BackingField; // 0x28
		::System::UInt32 _FinishedSpecialOrder_k__BackingField; // 0x2C
		::System::Int32 _OrderProfit_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void FillFinishedOrders(::System::UInt32 finishedNormalOrder, ::System::UInt32 finishedSpecialOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFINISHEDORDERS_OFFSET))(this, finishedNormalOrder, finishedSpecialOrder);
		}

		::System::Void FillProfit(::System::UInt32 goodProfit, ::System::UInt32 orderProfit, ::System::UInt32 realProfit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLPROFIT_OFFSET))(this, goodProfit, orderProfit, realProfit);
		}

		::System::Void FillFundChange(::System::UInt32 fundBefore, ::System::UInt32 fundAfter)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFUNDCHANGE_OFFSET))(this, fundBefore, fundAfter);
		}

		::System::Void FillEvent(::System::UInt32 eventID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLEVENT_OFFSET))(this, eventID);
		}

		::System::Int32 get_FundBefore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDBEFORE_OFFSET))(this);
		}

		::System::Void set_FundBefore(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDBEFORE_OFFSET))(this, value);
		}

		::System::Int32 get_FundAfter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDAFTER_OFFSET))(this);
		}

		::System::Void set_FundAfter(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDAFTER_OFFSET))(this, value);
		}

		::System::Int32 get_OverallProfit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_OVERALLPROFIT_OFFSET))(this);
		}

		::System::Void set_OverallProfit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_OVERALLPROFIT_OFFSET))(this, value);
		}

		::System::Int32 get_GoodProfit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_GOODPROFIT_OFFSET))(this);
		}

		::System::Void set_GoodProfit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_GOODPROFIT_OFFSET))(this, value);
		}

		::System::Int32 get_OrderProfit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_ORDERPROFIT_OFFSET))(this);
		}

		::System::Void set_OrderProfit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_ORDERPROFIT_OFFSET))(this, value);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedOrderList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDORDERLIST_OFFSET))(this);
		}

		::System::Void set_FinishedOrderList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDORDERLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedSpecialOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDSPECIALORDER_OFFSET))(this);
		}

		::System::Void set_FinishedSpecialOrder(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDSPECIALORDER_OFFSET))(this, value);
		}
	};
}
