#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/InteractionObject_WeightCurve_Type.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class InteractionObject_WeightCurve; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_MULTIPLIER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1EE517A0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_MULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE517E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_Multiplier_TypeDefinitionIndex = 38791;

	class InteractionObject_Multiplier : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::InteractionObject_WeightCurve_Type curve; // 0x10
		::System::Single multiplier; // 0x14
		::RootMotion::FinalIK::InteractionObject_WeightCurve_Type result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_MULTIPLIER__CTOR_OFFSET))(this);
		}

		::System::Single GetValue(::RootMotion::FinalIK::InteractionObject_WeightCurve* weightCurve, ::System::Single timer)
		{
			return ((::System::Single(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_MULTIPLIER_GETVALUE_OFFSET))(this, weightCurve, timer);
		}
	};
}
