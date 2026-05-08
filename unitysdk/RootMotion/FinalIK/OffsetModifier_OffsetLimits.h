#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class IKEffector; }

#define ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_APPLY_OFFSET UNITYSDK_OFFSET(0x1BC9BFC0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_SPRINGAXIS_OFFSET UNITYSDK_OFFSET(0x1BC9C4B0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_SPRING_OFFSET UNITYSDK_OFFSET(0x1BC9C520)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9C580)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetModifier_OffsetLimits_TypeDefinitionIndex = 36714;

	class OffsetModifier_OffsetLimits : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::System::Single spring; // 0x14
		::System::Boolean x; // 0x18
		::System::Boolean y; // 0x19
		::System::Boolean z; // 0x1A
		::System::Single minX; // 0x1C
		::System::Single maxX; // 0x20
		::System::Single minY; // 0x24
		::System::Single maxY; // 0x28
		::System::Single minZ; // 0x2C
		::System::Single maxZ; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKEffector* e, ::UnityEngine::Quaternion rootRotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_APPLY_OFFSET))(this, e, rootRotation);
		}

		::System::Single SpringAxis(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_SPRINGAXIS_OFFSET))(this, value, min, max);
		}

		::System::Single Spring(::System::Single value, ::System::Single limit, ::System::Boolean negative)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_OFFSETLIMITS_SPRING_OFFSET))(this, value, limit, negative);
		}
	};
}
