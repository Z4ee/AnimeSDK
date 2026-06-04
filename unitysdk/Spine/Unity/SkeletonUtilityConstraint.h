#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonUtility; }
namespace Spine::Unity { class SkeletonUtilityBone; }

#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACDE1C0)
#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ACDDFA0)
#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDE220)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityConstraint_TypeDefinitionIndex = 41447;

	class SkeletonUtilityConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonUtilityBone* bone; // 0x18
		::Spine::Unity::SkeletonUtility* hierarchy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONDISABLE_OFFSET))(this);
		}
	};
}
