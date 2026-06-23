#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_GROUNDERFBBIK_SPINEEFFECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62EB80)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_SPINEEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62EB70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderFBBIK_SpineEffector_TypeDefinitionIndex = 38302;

	class GrounderFBBIK_SpineEffector : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effectorType; // 0x10
		::System::Single horizontalWeight; // 0x14
		::System::Single verticalWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_SPINEEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::System::Single horizontalWeight, ::System::Single verticalWeight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_SPINEEFFECTOR__CTOR_1_OFFSET))(this, effectorType, horizontalWeight, verticalWeight);
		}
	};
}
