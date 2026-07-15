#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x14783E50)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x14783E40)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x14783DD0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintSpacingTimeline_TypeDefinitionIndex = 37469;

	class PathConstraintSpacingTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 pathConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
