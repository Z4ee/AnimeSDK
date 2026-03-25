#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemCostState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETACQUIREDDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x996C530)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETCOMPOSEANDCONVERTDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x996C2E0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C270)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMID_OFFSET UNITYSDK_OFFSET(0x996C250)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C290)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSECOST_OFFSET UNITYSDK_OFFSET(0x996C210)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSEQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C230)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x996C1B0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_REQUIREQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C1D0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x996C1F0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C2B0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C280)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMID_OFFSET UNITYSDK_OFFSET(0x996C260)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C2A0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSECOST_OFFSET UNITYSDK_OFFSET(0x996C220)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSEQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C240)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x996C1C0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_REQUIREQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C1E0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x996C200)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_TARGETQUANTITY_OFFSET UNITYSDK_OFFSET(0x996C2C0)
#define RPG_CLIENT_ITEMCOSTCALCULATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x996C2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculateResult_TypeDefinitionIndex = 53360;

	class ItemCostCalculateResult : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemCost* _ItemComposeCost_k__BackingField; // 0x10
		::System::UInt32 _ItemComposeQuantity_k__BackingField; // 0x18
		::RPG::Client::ItemCostState _State_k__BackingField; // 0x1C
		::System::UInt32 _ConvertibleItemConsumedQuantity_k__BackingField; // 0x20
		::System::UInt32 _TargetQuantity_k__BackingField; // 0x24
		::System::UInt32 _ConvertQuantity_k__BackingField; // 0x28
		::System::UInt32 _ConvertibleItemID_k__BackingField; // 0x2C
		::System::UInt32 _ItemID_k__BackingField; // 0x30
		::System::UInt32 _RequireQuantity_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 itemID, ::System::UInt32 requireQuantity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT__CTOR_OFFSET))(this, itemID, requireQuantity);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_RequireQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_REQUIREQUANTITY_OFFSET))(this);
		}

		::System::Void set_RequireQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_REQUIREQUANTITY_OFFSET))(this, value);
		}

		::RPG::Client::ItemCostState get_State()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ItemCostState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::ComposeItemCost* get_ItemComposeCost()
		{
			return ((::RPG::Client::ComposeItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSECOST_OFFSET))(this);
		}

		::System::Void set_ItemComposeCost(::RPG::Client::ComposeItemCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSECOST_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemComposeQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_ITEMCOMPOSEQUANTITY_OFFSET))(this);
		}

		::System::Void set_ItemComposeQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_ITEMCOMPOSEQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertibleItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMID_OFFSET))(this);
		}

		::System::Void set_ConvertibleItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertibleItemConsumedQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET))(this);
		}

		::System::Void set_ConvertibleItemConsumedQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTIBLEITEMCONSUMEDQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_ConvertQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_CONVERTQUANTITY_OFFSET))(this);
		}

		::System::Void set_ConvertQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_CONVERTQUANTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetQuantity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GET_TARGETQUANTITY_OFFSET))(this);
		}

		::System::Void set_TargetQuantity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_SET_TARGETQUANTITY_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetComposeAndConvertDisplayDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETCOMPOSEANDCONVERTDISPLAYDATAS_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* GetAcquiredDisplayData()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATERESULT_GETACQUIREDDISPLAYDATA_OFFSET))(this);
		}
	};
}
