#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_IKJOB_IKTRANSFORM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2AAF0)
#define ROOTMOTION_IKJOB_IKTRANSFORM_COPYTO_OFFSET UNITYSDK_OFFSET(0x2AA70)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2AA20)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2AA40)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x2A980)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKTransform_TypeDefinitionIndex = 35172;

	struct alignas(4) IKTransform
	{
		::UnityEngine::Vector3 LocalPosition; // 0x10
		::UnityEngine::Quaternion LocalRotation; // 0x1C
		::UnityEngine::Vector3 LocalScale; // 0x2C
		::UnityEngine::Matrix4x4 LocalToParent; // 0x38
		::UnityEngine::Matrix4x4 LocalToWorld; // 0x78

		::UnityEngine::Matrix4x4 get_WorldToLocal()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_GET_WORLDTOLOCAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_GET_ROTATION_OFFSET))(this);
		}

		::System::Void CopyTo(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_COPYTO_OFFSET))(this, transform);
		}

		::System::Void CopyFrom(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_COPYFROM_OFFSET))(this, transform);
		}
	};
}
