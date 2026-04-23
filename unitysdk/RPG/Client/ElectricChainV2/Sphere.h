#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/SampleType.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Sampler; }

#define RPG_CLIENT_ELECTRICCHAINV2_SPHERE_METHOD_2_0CFE5F25BEFC2C07_OFFSET UNITYSDK_OFFSET(0xA220390)
#define RPG_CLIENT_ELECTRICCHAINV2_SPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0xA21D730)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 67735;

	class Sphere : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Single radius; // 0x28
		::RPG::Client::ElectricChainV2::Sampler* sampler; // 0x30
		::RPG::Client::ElectricChainV2::SampleType sampleType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SPHERE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_0CFE5F25BEFC2C07()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SPHERE_METHOD_2_0CFE5F25BEFC2C07_OFFSET))(this);
		}
	};
}
