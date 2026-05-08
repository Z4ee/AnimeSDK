#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_AMPLIFIER_BODY_EFFECTORLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8E3E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Amplifier_Body_EffectorLink_TypeDefinitionIndex = 36691;

	class Amplifier_Body_EffectorLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::System::Single weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_BODY_EFFECTORLINK__CTOR_OFFSET))(this);
		}
	};
}
