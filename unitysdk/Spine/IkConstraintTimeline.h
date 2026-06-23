#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E7021B0)
#define SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1E702050)
#define SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1E702060)
#define SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1E702070)
#define SPINE_IKCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E701F70)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintTimeline_TypeDefinitionIndex = 32827;

	class IkConstraintTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x6; // 0x0
		// static const ::System::Int32 MIX = 0x1; // 0x0
		// static const ::System::Int32 SOFTNESS = 0x2; // 0x0
		// static const ::System::Int32 BEND_DIRECTION = 0x3; // 0x0
		// static const ::System::Int32 COMPRESS = 0x4; // 0x0
		// static const ::System::Int32 STRETCH = 0x5; // 0x0
		::System::Int32 ikConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 ikConstraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, ikConstraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_IkConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mix, ::System::Single softness, ::System::Int32 bendDirection, ::System::Boolean compress, ::System::Boolean stretch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, frame, time, mix, softness, bendDirection, compress, stretch);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
