#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x18E10970)
#define RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E109F0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int AnimationCurveConstraint_TypeDefinitionIndex = 70199;

	class AnimationCurveConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
