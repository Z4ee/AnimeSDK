#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F4FFA80)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1F4FFD50)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1F4FF920)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1F4FF930)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1F4FF940)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FF840)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintTimeline_TypeDefinitionIndex = 33463;

	class TransformConstraintTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x7; // 0x0
		// static const ::System::Int32 ROTATE = 0x1; // 0x0
		// static const ::System::Int32 X = 0x2; // 0x0
		// static const ::System::Int32 Y = 0x3; // 0x0
		// static const ::System::Int32 SCALEX = 0x4; // 0x0
		// static const ::System::Int32 SCALEY = 0x5; // 0x0
		// static const ::System::Int32 SHEARY = 0x6; // 0x0
		::System::Int32 transformConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 transformConstraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, transformConstraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_TransformConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mixRotate, ::System::Single mixX, ::System::Single mixY, ::System::Single mixScaleX, ::System::Single mixScaleY, ::System::Single mixShearY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, frame, time, mixRotate, mixX, mixY, mixScaleX, mixScaleY, mixShearY);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}

		::System::Void GetCurveValue(::System::Single& rotate, ::System::Single& x, ::System::Single& y, ::System::Single& scaleX, ::System::Single& scaleY, ::System::Single& shearY, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET))(this, rotate, x, y, scaleX, scaleY, shearY, time);
		}
	};
}
