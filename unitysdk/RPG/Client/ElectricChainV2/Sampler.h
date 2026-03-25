#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_ELECTRICCHAINV2_SAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9598380)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Sampler_TypeDefinitionIndex = 60310;

	class Sampler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SAMPLER__CTOR_OFFSET))(this);
		}
	};
}
