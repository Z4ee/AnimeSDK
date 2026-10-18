#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE3310)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_OFFSET UNITYSDK_OFFSET(0xE32B0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE32A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_COIN2TICKETRATIO_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_MCOIN2COINRATIO_OFFSET UNITYSDK_OFFSET(0xFE70)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC886DA0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC886D80)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xE3280)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_COIN2TICKETRATIO_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_MCOIN2COINRATIO_OFFSET UNITYSDK_OFFSET(0xFE80)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE3270)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxCostExchangeRatio_TypeDefinitionIndex = 74942;

	struct alignas(4) BlindBoxCostExchangeRatio
	{
		::System::UInt32 _Coin2TicketRatio_k__BackingField; // 0x10
		::System::UInt32 _MCoin2CoinRatio_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Coin2TicketRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_COIN2TICKETRATIO_OFFSET))(this);
		}

		::System::Void set_Coin2TicketRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_COIN2TICKETRATIO_OFFSET))(this, a1);
		}

		::System::UInt32 get_MCoin2CoinRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_MCOIN2COINRATIO_OFFSET))(this);
		}

		::System::Void set_MCoin2CoinRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_MCOIN2COINRATIO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a1, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a1, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_DECONSTRUCT_OFFSET))(this, a1, a2);
		}
	};
}
