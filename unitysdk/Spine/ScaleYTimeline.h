#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SCALEYTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1ECEC550)
#define SPINE_SCALEYTIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x1ECEC540)
#define SPINE_SCALEYTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECEC450)

namespace Spine
{
	inline static constexpr unsigned int ScaleYTimeline_TypeDefinitionIndex = 33449;

	class ScaleYTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 boneIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SCALEYTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex);
		}

		::System::Int32 get_BoneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SCALEYTIMELINE_GET_BONEINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_SCALEYTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
