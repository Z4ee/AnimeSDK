#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderPetItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REQUESTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A8F40)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderInfo_RequestGroup_TypeDefinitionIndex = 74891;

	class BlindBoxTradePublishOrderInfo_RequestGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* Items; // 0x10
		::System::String* TitleTextId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REQUESTGROUP__CTOR_OFFSET))(this);
		}
	};
}
