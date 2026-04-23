#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0xA2189D0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Constraint_TypeDefinitionIndex = 67741;

	class Constraint : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT__CTOR_OFFSET))(this);
		}
	};
}
