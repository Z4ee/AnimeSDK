#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xCE2B990)
#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2B9F0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int ConstantConstraint_TypeDefinitionIndex = 73498;

	class ConstantConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::System::Single blend; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
		}
	};
}
