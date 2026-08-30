#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/RandomUpdater.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCE31FE0)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_6AF6D72B43B02A63_OFFSET UNITYSDK_OFFSET(0xCE32040)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE321B0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int InterruptedUpdater_TypeDefinitionIndex = 73481;

	class InterruptedUpdater : public ::RPG::Client::ElectricChainV2::RandomUpdater
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_6AF6D72B43B02A63(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_METHOD_2_6AF6D72B43B02A63_OFFSET))(this, a1);
		}
	};
}
