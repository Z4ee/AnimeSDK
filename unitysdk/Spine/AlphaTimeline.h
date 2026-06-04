#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_ALPHATIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1AC45D30)
#define SPINE_ALPHATIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1AC45D20)
#define SPINE_ALPHATIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC45C00)

namespace Spine
{
	inline static constexpr unsigned int AlphaTimeline_TypeDefinitionIndex = 36677;

	class AlphaTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ALPHATIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
