#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Sampler; }

#define RPG_CLIENT_ELECTRICCHAINV2_DISC_METHOD_2_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0xA218DE0)
#define RPG_CLIENT_ELECTRICCHAINV2_DISC__CTOR_OFFSET UNITYSDK_OFFSET(0xA218F90)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Disc_TypeDefinitionIndex = 67733;

	class Disc : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Single radius; // 0x28
		::RPG::Client::ElectricChainV2::Sampler* sampler; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_DISC__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_4F4018519B20BBDD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_DISC_METHOD_2_4F4018519B20BBDD_OFFSET))(this);
		}
	};
}
