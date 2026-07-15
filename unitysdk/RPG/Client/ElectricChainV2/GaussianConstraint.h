#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x18E16750)
#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E16840)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int GaussianConstraint_TypeDefinitionIndex = 70200;

	class GaussianConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::UnityEngine::Vector4 distribution; // 0x10
		::System::Boolean inverse; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
