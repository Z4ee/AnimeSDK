#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ROOTMOTION_FINALIK_AIMPOSER_POSE_ISINDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F8A7650)
#define ROOTMOTION_FINALIK_AIMPOSER_POSE_SETANGLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1F8A7A20)
#define ROOTMOTION_FINALIK_AIMPOSER_POSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A7A30)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimPoser_Pose_TypeDefinitionIndex = 38873;

	class AimPoser_Pose : public ::System::Object
	{
	public:
		::System::Boolean visualize; // 0x10
		::System::String* name; // 0x18
		::UnityEngine::Vector3 direction; // 0x20
		::System::Single yaw; // 0x2C
		::System::Single pitch; // 0x30
		::System::Single angleBuffer; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER_POSE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInDirection(::UnityEngine::Vector3 d)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER_POSE_ISINDIRECTION_OFFSET))(this, d);
		}

		::System::Void SetAngleBuffer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER_POSE_SETANGLEBUFFER_OFFSET))(this, value);
		}
	};
}
