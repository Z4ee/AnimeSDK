#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27EC4041BC3A4790;
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradePlayerInfo; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xC8A3240)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY_CREATELOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xC8A3720)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY__CREATEFROMUID_OFFSET UNITYSDK_OFFSET(0xC8A33E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY__RESOLVEUID_OFFSET UNITYSDK_OFFSET(0xC8A36D0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePlayerInfoFactory_TypeDefinitionIndex = 74884;

	class BlindBoxTradePlayerInfoFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* CreateFromServer(::Class_1_27EC4041BC3A4790* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*(*)(::Class_1_27EC4041BC3A4790*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY_CREATEFROMSERVER_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* CreateLocalPlayer()
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY_CREATELOCALPLAYER_OFFSET))();
		}

		static ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* _CreateFromUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY__CREATEFROMUID_OFFSET))(a1);
		}

		static ::System::UInt32 _ResolveUid(::Class_1_27EC4041BC3A4790* a1)
		{
			return ((::System::UInt32(*)(::Class_1_27EC4041BC3A4790*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPLAYERINFOFACTORY__RESOLVEUID_OFFSET))(a1);
		}
	};
}
