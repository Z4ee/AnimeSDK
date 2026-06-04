#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class BuyGoodsScRsp; }

#define PROTO_BUYGOODSSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E20A0)
#define PROTO_BUYGOODSSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E20E0)
#define PROTO_BUYGOODSSCRSP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A0E20F0)

namespace Proto
{
	inline static constexpr unsigned int BuyGoodsScRsp___c_TypeDefinitionIndex = 32399;

	class BuyGoodsScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::BuyGoodsScRsp___c** StaticGet___9()
		{
			return (::Proto::BuyGoodsScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(BuyGoodsScRsp___c_TypeDefinitionIndex)->GetStaticField(0x42890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::BuyGoodsScRsp* __cctor_b__43_0()
		{
			return ((::Proto::BuyGoodsScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
