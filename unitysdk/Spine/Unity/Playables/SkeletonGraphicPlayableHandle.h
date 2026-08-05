#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/Playables/SpinePlayableHandleBase.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonGraphic; }

#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FA89760)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1FA89720)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FA896E0)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1FA89900)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA89AA0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SkeletonGraphicPlayableHandle_TypeDefinitionIndex = 95344;

	class SkeletonGraphicPlayableHandle : public ::Spine::Unity::Playables::SpinePlayableHandleBase
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE__CTOR_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETON_OFFSET))(this);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_AWAKE_OFFSET))(this);
		}

		::System::Void InitializeReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET))(this);
		}
	};
}
