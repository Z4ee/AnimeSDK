#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E791EE0)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1E791ED0)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E791DE0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintSpacingTimeline_TypeDefinitionIndex = 32830;

	class PathConstraintSpacingTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 pathConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 pathConstraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, pathConstraintIndex);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, blend, direction);
		}
	};
}
