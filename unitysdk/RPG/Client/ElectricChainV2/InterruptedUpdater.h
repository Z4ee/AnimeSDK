#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/RandomUpdater.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_35DC9B290E018EE0_OFFSET UNITYSDK_OFFSET(0x95987B0)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9598740)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x95988D0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int InterruptedUpdater_TypeDefinitionIndex = 60307;

	class InterruptedUpdater : public ::RPG::Client::ElectricChainV2::RandomUpdater
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_35DC9B290E018EE0(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_35DC9B290E018EE0_OFFSET))(this, a1);
		}
	};
}
