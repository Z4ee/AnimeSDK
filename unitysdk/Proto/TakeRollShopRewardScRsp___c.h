#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class TakeRollShopRewardScRsp; }

#define PROTO_TAKEROLLSHOPREWARDSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19360EA0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19360EE0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x19360EF0)

namespace Proto
{
	inline static constexpr unsigned int TakeRollShopRewardScRsp___c_TypeDefinitionIndex = 31966;

	class TakeRollShopRewardScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::TakeRollShopRewardScRsp___c** StaticGet___9()
		{
			return (::Proto::TakeRollShopRewardScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(TakeRollShopRewardScRsp___c_TypeDefinitionIndex)->GetStaticField(0x66180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::TakeRollShopRewardScRsp* __cctor_b__38_0()
		{
			return ((::Proto::TakeRollShopRewardScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
