#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_IKJOB_IKTRANSFORM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x30C00)
#define ROOTMOTION_IKJOB_IKTRANSFORM_COPYTO_OFFSET UNITYSDK_OFFSET(0x30B80)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x30B30)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x30B50)
#define ROOTMOTION_IKJOB_IKTRANSFORM_GET_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x30A90)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKTransform_TypeDefinitionIndex = 44844;

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

		::System::Void CopyTo(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORM_COPYFROM_OFFSET))(this, a1);
		}
	};
}
