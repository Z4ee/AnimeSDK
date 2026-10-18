#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_174;
class Class_1_D17272E82AE804C2_175;
class Class_1_D17272E82AE804C2_177;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPRIVATEORDERANDCHECK_B__10_0_OFFSET UNITYSDK_OFFSET(0xC890E80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPUBLICORDERANDCHECK_B__9_0_OFFSET UNITYSDK_OFFSET(0xC890E70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC890E10)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC890E50)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__PUBLISHPUBLICORDER_B__4_0_OFFSET UNITYSDK_OFFSET(0xC890E60)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFlowService___c_TypeDefinitionIndex = 74893;

	class BlindBoxTradeFlowService___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D17272E82AE804C2_177*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_177*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradeFlowService___c_TypeDefinitionIndex)->GetStaticField(0x63CE0);
		}
		static ::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService___c**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradeFlowService___c_TypeDefinitionIndex)->GetStaticField(0x63CE8);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_174*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_174*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradeFlowService___c_TypeDefinitionIndex)->GetStaticField(0x63CF0);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_175*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_175*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxTradeFlowService___c_TypeDefinitionIndex)->GetStaticField(0x63CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _PublishPublicOrder_b__4_0(::Class_1_D17272E82AE804C2_174* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_174*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__PUBLISHPUBLICORDER_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _CancelPublicOrderAndCheck_b__9_0(::Class_1_D17272E82AE804C2_175* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_175*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPUBLICORDERANDCHECK_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _CancelPrivateOrderAndCheck_b__10_0(::Class_1_D17272E82AE804C2_177* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_177*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPRIVATEORDERANDCHECK_B__10_0_OFFSET))(this, a1);
		}
	};
}
