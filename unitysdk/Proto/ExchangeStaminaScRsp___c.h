#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ExchangeStaminaScRsp; }

#define PROTO_EXCHANGESTAMINASCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19337720)
#define PROTO_EXCHANGESTAMINASCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19337760)
#define PROTO_EXCHANGESTAMINASCRSP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x19337770)

namespace Proto
{
	inline static constexpr unsigned int ExchangeStaminaScRsp___c_TypeDefinitionIndex = 30023;

	class ExchangeStaminaScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::ExchangeStaminaScRsp___c** StaticGet___9()
		{
			return (::Proto::ExchangeStaminaScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(ExchangeStaminaScRsp___c_TypeDefinitionIndex)->GetStaticField(0x63810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::ExchangeStaminaScRsp* __cctor_b__43_0()
		{
			return ((::Proto::ExchangeStaminaScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
