#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET UNITYSDK_OFFSET(0x18400000)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET UNITYSDK_OFFSET(0x183FFE40)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x183FFAF0)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET UNITYSDK_OFFSET(0x183FF9E0)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18400160)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowSkeletonUtilityRootRotation_TypeDefinitionIndex = 34795;

	class FollowSkeletonUtilityRootRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single FLIP_ANGLE_THRESHOLD; // 0x0
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Vector3 prevLocalEulerAngles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void CompensatePositionToYRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET))(this);
		}

		::System::Void CompensatePositionToXRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET))(this);
		}
	};
}
