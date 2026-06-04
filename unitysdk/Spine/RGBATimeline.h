#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_RGBATIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1AC5FA80)
#define SPINE_RGBATIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1AC5F9D0)
#define SPINE_RGBATIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1AC5F9E0)
#define SPINE_RGBATIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1AC5F9F0)
#define SPINE_RGBATIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5F890)

namespace Spine
{
	inline static constexpr unsigned int RGBATimeline_TypeDefinitionIndex = 36675;

	class RGBATimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x5; // 0x0
		// static const ::System::Int32 R = 0x1; // 0x0
		// static const ::System::Int32 G = 0x2; // 0x0
		// static const ::System::Int32 B = 0x3; // 0x0
		// static const ::System::Int32 A = 0x4; // 0x0
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
