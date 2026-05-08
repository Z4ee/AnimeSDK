#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/Playables/SpinePlayableHandleBase.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonAnimation; }

#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C365A30)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1C3659E0)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1C3659A0)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C365BD0)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C365D70)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SkeletonAnimationPlayableHandle_TypeDefinitionIndex = 85886;

	class SkeletonAnimationPlayableHandle : public ::Spine::Unity::Playables::SpinePlayableHandleBase
	{
	public:
		::Spine::Unity::SkeletonAnimation* skeletonAnimation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE__CTOR_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETON_OFFSET))(this);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_AWAKE_OFFSET))(this);
		}

		::System::Void InitializeReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET))(this);
		}
	};
}
