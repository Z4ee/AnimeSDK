#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xE3240)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE3210)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0xE31A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE3190)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_COINCOST_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_ISAFFORDABLE_OFFSET UNITYSDK_OFFSET(0xE3140)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_MCOINCOST_OFFSET UNITYSDK_OFFSET(0x211F0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_OPENNUM_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_TICKETCOST_OFFSET UNITYSDK_OFFSET(0xFE70)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC885E50)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC885E10)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xE3170)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_COINCOST_OFFSET UNITYSDK_OFFSET(0xACF0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_ISAFFORDABLE_OFFSET UNITYSDK_OFFSET(0xE3150)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_MCOINCOST_OFFSET UNITYSDK_OFFSET(0xE3130)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_OPENNUM_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_TICKETCOST_OFFSET UNITYSDK_OFFSET(0xFE80)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE3160)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xE3110)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxCostCalculateResult_TypeDefinitionIndex = 74941;

	struct alignas(4) BlindBoxCostCalculateResult
	{
		::System::UInt32 _OpenNum_k__BackingField; // 0x10
		::System::UInt32 _TicketCost_k__BackingField; // 0x14
		::System::UInt32 _CoinCost_k__BackingField; // 0x18
		::System::UInt32 _MCoinCost_k__BackingField; // 0x1C
		::System::Boolean _IsAffordable_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_OpenNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_OPENNUM_OFFSET))(this);
		}

		::System::Void set_OpenNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_OPENNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TicketCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_TICKETCOST_OFFSET))(this);
		}

		::System::Void set_TicketCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_TICKETCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_COINCOST_OFFSET))(this);
		}

		::System::Void set_CoinCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_COINCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MCoinCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_MCOINCOST_OFFSET))(this);
		}

		::System::Void set_MCoinCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_MCOINCOST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAffordable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GET_ISAFFORDABLE_OFFSET))(this);
		}

		::System::Void set_IsAffordable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_SET_ISAFFORDABLE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a1, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a1, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::Boolean& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTCALCULATERESULT_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
