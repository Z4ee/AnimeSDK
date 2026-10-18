#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13AA0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE3260)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3200)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE31F0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_COIN2TICKETRATIO_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_GET_MCOIN2COINRATIO_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC87F800)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC87F7E0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xE31D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_COIN2TICKETRATIO_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_SET_MCOIN2COINRATIO_OFFSET UNITYSDK_OFFSET(0xFE00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE31C0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXCOSTEXCHANGERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x11150)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxCostExchangeRatio_TypeDefinitionIndex = 74941;

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
