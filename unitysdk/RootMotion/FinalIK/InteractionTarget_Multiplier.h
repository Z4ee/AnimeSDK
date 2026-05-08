#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/InteractionObject_WeightCurve_Type.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_INTERACTIONTARGET_MULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B688210)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTarget_Multiplier_TypeDefinitionIndex = 36663;

	class InteractionTarget_Multiplier : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::InteractionObject_WeightCurve_Type curve; // 0x10
		::System::Single multiplier; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_MULTIPLIER__CTOR_OFFSET))(this);
		}
	};
}
