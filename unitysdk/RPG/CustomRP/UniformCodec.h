#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/UniformType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define RPG_CUSTOMRP_UNIFORMCODEC_GETPAYLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1EE598E0)
#define RPG_CUSTOMRP_UNIFORMCODEC_TRYGETTYPE_OFFSET UNITYSDK_OFFSET(0x1EE59730)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UniformCodec_TypeDefinitionIndex = 37070;

	class UniformCodec : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetType(::System::Type* a1, ::RPG::CustomRP::UniformType& a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::RPG::CustomRP::UniformType&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMCODEC_TRYGETTYPE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPayloadSize(::RPG::CustomRP::UniformType a1)
		{
			return ((::System::Int32(*)(::RPG::CustomRP::UniformType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMCODEC_GETPAYLOADSIZE_OFFSET))(a1);
		}
	};
}
