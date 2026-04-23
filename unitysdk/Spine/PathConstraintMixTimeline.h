#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x19DE0B60)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x19DE0A90)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x19DE0AA0)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x19DE0AB0)
#define SPINE_PATHCONSTRAINTMIXTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE0980)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintMixTimeline_TypeDefinitionIndex = 36388;

	class PathConstraintMixTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x4; // 0x0
		// static const ::System::Int32 ROTATE = 0x1; // 0x0
		// static const ::System::Int32 X = 0x2; // 0x0
		// static const ::System::Int32 Y = 0x3; // 0x0
		::System::Int32 pathConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 pathConstraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, pathConstraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mixRotate, ::System::Single mixX, ::System::Single mixY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET))(this, frame, time, mixRotate, mixX, mixY);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
