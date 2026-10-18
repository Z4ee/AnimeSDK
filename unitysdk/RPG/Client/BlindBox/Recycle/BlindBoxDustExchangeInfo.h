#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXDUSTEXCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC8903D0)

namespace RPG::Client::BlindBox::Recycle
{
	inline static constexpr unsigned int BlindBoxDustExchangeInfo_TypeDefinitionIndex = 74903;

	class BlindBoxDustExchangeInfo : public ::System::Object
	{
	public:
		::System::UInt32 DustItemId; // 0x10
		::System::UInt32 ShopType; // 0x14
		::System::UInt32 TicketItemId; // 0x18
		::System::UInt32 DustOwnedCount; // 0x1C
		::System::UInt32 ShopId; // 0x20
		::System::UInt32 ExchangeableTicketCount; // 0x24
		::System::Boolean IsValid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXDUSTEXCHANGEINFO__CTOR_OFFSET))(this);
		}
	};
}
