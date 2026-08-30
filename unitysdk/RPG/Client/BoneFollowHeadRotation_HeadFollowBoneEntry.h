#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BONEFOLLOWHEADROTATION_HEADFOLLOWBONEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD92390)

namespace RPG::Client
{
	inline static constexpr unsigned int BoneFollowHeadRotation_HeadFollowBoneEntry_TypeDefinitionIndex = 68410;

	class BoneFollowHeadRotation_HeadFollowBoneEntry : public ::System::Object
	{
	public:
		::UnityEngine::Transform* FollowBone; // 0x10
		::System::String* FollowBoneName; // 0x18
		::System::Boolean UseUniformCoefficient; // 0x20
		::System::Single RotationCoefficient; // 0x24
		::UnityEngine::Vector3 RotationCoefficientAxis; // 0x28
		::UnityEngine::Quaternion BindFollowRotationInRef; // 0x34
		::System::Boolean HasBindFollowRotation; // 0x44
		::System::Boolean DebugIsValid; // 0x45
		::UnityEngine::Vector3 DebugScaledDeltaEuler; // 0x48
		::System::Single DebugFollowAngle; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_HEADFOLLOWBONEENTRY__CTOR_OFFSET))(this);
		}
	};
}
