#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E7D5520)
#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1E7D5510)
#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5420)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintPositionTimeline_TypeDefinitionIndex = 32829;

	class PathConstraintPositionTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 pathConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 pathConstraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, pathConstraintIndex);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
