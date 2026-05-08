#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_RGBA2TIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1B5B17F0)
#define SPINE_RGBA2TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1B5B1660)
#define SPINE_RGBA2TIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1B5B1670)
#define SPINE_RGBA2TIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1B5B1680)
#define SPINE_RGBA2TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B14C0)

namespace Spine
{
	inline static constexpr unsigned int RGBA2Timeline_TypeDefinitionIndex = 31270;

	class RGBA2Timeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x8; // 0x0
		// static const ::System::Int32 R = 0x1; // 0x0
		// static const ::System::Int32 G = 0x2; // 0x0
		// static const ::System::Int32 B = 0x3; // 0x0
		// static const ::System::Int32 A = 0x4; // 0x0
		// static const ::System::Int32 R2 = 0x5; // 0x0
		// static const ::System::Int32 G2 = 0x6; // 0x0
		// static const ::System::Int32 B2 = 0x7; // 0x0
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a, ::System::Single r2, ::System::Single g2, ::System::Single b2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_SETFRAME_OFFSET))(this, frame, time, r, g, b, a, r2, g2, b2);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
