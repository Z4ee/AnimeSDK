#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetShopListScRsp; }

#define PROTO_GETSHOPLISTSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3B100)
#define PROTO_GETSHOPLISTSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3B130)
#define PROTO_GETSHOPLISTSCRSP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DD3B140)

namespace Proto
{
	inline static constexpr unsigned int GetShopListScRsp___c_TypeDefinitionIndex = 33524;

	class GetShopListScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetShopListScRsp___c** StaticGet___9()
		{
			return (::Proto::GetShopListScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetShopListScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5B030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetShopListScRsp* __cctor_b__33_0()
		{
			return ((::Proto::GetShopListScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
