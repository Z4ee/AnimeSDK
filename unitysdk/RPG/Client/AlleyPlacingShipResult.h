#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x90B9410)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLEVENT_OFFSET UNITYSDK_OFFSET(0x90A9160)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFINISHEDORDERS_OFFSET UNITYSDK_OFFSET(0x90A9060)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLFUNDCHANGE_OFFSET UNITYSDK_OFFSET(0x90A9390)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_FILLPROFIT_OFFSET UNITYSDK_OFFSET(0x90A9100)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x90B9530)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDORDERLIST_OFFSET UNITYSDK_OFFSET(0x90B9550)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FINISHEDSPECIALORDER_OFFSET UNITYSDK_OFFSET(0x90B9570)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDAFTER_OFFSET UNITYSDK_OFFSET(0x90B94B0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_FUNDBEFORE_OFFSET UNITYSDK_OFFSET(0x90B9490)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_GOODPROFIT_OFFSET UNITYSDK_OFFSET(0x90B94F0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_ORDERPROFIT_OFFSET UNITYSDK_OFFSET(0x90B9510)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_GET_OVERALLPROFIT_OFFSET UNITYSDK_OFFSET(0x90B94D0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x90B9540)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDORDERLIST_OFFSET UNITYSDK_OFFSET(0x90B9560)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FINISHEDSPECIALORDER_OFFSET UNITYSDK_OFFSET(0x90B9580)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDAFTER_OFFSET UNITYSDK_OFFSET(0x90B94C0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_FUNDBEFORE_OFFSET UNITYSDK_OFFSET(0x90B94A0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_GOODPROFIT_OFFSET UNITYSDK_OFFSET(0x90B9500)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_ORDERPROFIT_OFFSET UNITYSDK_OFFSET(0x90B9520)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT_SET_OVERALLPROFIT_OFFSET UNITYSDK_OFFSET(0x90B94E0)
#define RPG_CLIENT_ALLEYPLACINGSHIPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x90A5EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyPlacingShipResult_TypeDefinitionIndex = 50572;

	class AlleyPlacingShipResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedOrderList_k__BackingField; // 0x10
		::System::UInt32 _FinishedSpecialOrder_k__BackingField; // 0x18
		::System::UInt32 _EventID_k__BackingField; // 0x1C
		::System::Int32 _OrderProfit_k__BackingField; // 0x20
		::System::Int32 _FundAfter_k__BackingField; // 0x24
		::System::Int32 _OverallProfit_k__BackingField; // 0x28
		::System::Int32 _GoodProfit_k__BackingField; // 0x2C
		::System::Int32 _FundBefore_k__BackingField; // 0x30

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
