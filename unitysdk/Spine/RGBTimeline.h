#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_RGBTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x19DE43C0)
#define SPINE_RGBTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x19DE42F0)
#define SPINE_RGBTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x19DE4300)
#define SPINE_RGBTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x19DE4310)
#define SPINE_RGBTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE41E0)

namespace Spine
{
	inline static constexpr unsigned int RGBTimeline_TypeDefinitionIndex = 36376;

	class RGBTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x4; // 0x0
		// static const ::System::Int32 R = 0x1; // 0x0
		// static const ::System::Int32 G = 0x2; // 0x0
		// static const ::System::Int32 B = 0x3; // 0x0
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_SETFRAME_OFFSET))(this, frame, time, r, g, b);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
