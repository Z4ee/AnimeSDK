#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class InteractionObject; }

#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE_INTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1415D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTrigger_Range_Interaction_TypeDefinitionIndex = 36668;

	class InteractionTrigger_Range_Interaction : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::InteractionObject* interactionObject; // 0x10
		::Il2CppArray<::RootMotion::FinalIK::FullBodyBipedEffector>* effectors; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE_INTERACTION__CTOR_OFFSET))(this);
		}
	};
}
