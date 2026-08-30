#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Sampler.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCE317D0)
#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER_GET_VECTOR2VALUE_OFFSET UNITYSDK_OFFSET(0xCE31940)
#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE30CB0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int GaussianSampler_TypeDefinitionIndex = 73486;

	class GaussianSampler : public ::RPG::Client::ElectricChainV2::Sampler
	{
	public:
		::System::Single scale; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_vector2Value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANSAMPLER_GET_VECTOR2VALUE_OFFSET))(this);
		}
	};
}
