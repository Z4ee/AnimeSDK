#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_EFFECTORLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB064C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int PenetrationAvoidance_Avoider_EffectorLink_TypeDefinitionIndex = 38137;

	class PenetrationAvoidance_Avoider_EffectorLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::System::Single weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_EFFECTORLINK__CTOR_OFFSET))(this);
		}
	};
}
