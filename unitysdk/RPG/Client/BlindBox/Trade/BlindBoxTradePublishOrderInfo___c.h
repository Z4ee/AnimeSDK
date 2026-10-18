#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8A3780)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A37C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__GET__VALIDDAYOPTIONS_B__4_0_OFFSET UNITYSDK_OFFSET(0xC8A37D0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderInfo___c_TypeDefinitionIndex = 74891;

	class BlindBoxTradePublishOrderInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradePublishOrderInfo___c_TypeDefinitionIndex)->GetStaticField(0x642B0);
		}
		static ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo___c**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradePublishOrderInfo___c_TypeDefinitionIndex)->GetStaticField(0x642B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get__ValidDayOptions_b__4_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO___C__GET__VALIDDAYOPTIONS_B__4_0_OFFSET))(this, a1);
		}
	};
}
