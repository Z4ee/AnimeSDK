#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/Playables/SpinePlayableHandleBase.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonGraphic; }

#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C365E90)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1C365E50)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1C365E10)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C366030)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3661D0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SkeletonGraphicPlayableHandle_TypeDefinitionIndex = 85887;

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
