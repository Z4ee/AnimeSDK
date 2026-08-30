#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/SampleType.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Sampler; }

#define RPG_CLIENT_ELECTRICCHAINV2_HEMISPHERE_METHOD_2_64914350C49C927D_OFFSET UNITYSDK_OFFSET(0x1AC5CE60)
#define RPG_CLIENT_ELECTRICCHAINV2_HEMISPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5D2E0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Hemisphere_TypeDefinitionIndex = 73489;

	class Hemisphere : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Single radius; // 0x28
		::RPG::Client::ElectricChainV2::Sampler* sampler; // 0x30
		::RPG::Client::ElectricChainV2::SampleType sampleType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_HEMISPHERE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_64914350C49C927D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_HEMISPHERE_METHOD_2_64914350C49C927D_OFFSET))(this);
		}
	};
}
