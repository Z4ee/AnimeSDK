#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_ALPHATIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x19DC86F0)
#define SPINE_ALPHATIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x19DC86E0)
#define SPINE_ALPHATIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC85B0)

namespace Spine
{
	inline static constexpr unsigned int AlphaTimeline_TypeDefinitionIndex = 36377;

	class AlphaTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
