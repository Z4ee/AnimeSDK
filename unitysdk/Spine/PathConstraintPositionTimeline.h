#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1605DCB0)
#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1605DCA0)
#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1605DC30)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintPositionTimeline_TypeDefinitionIndex = 38327;

	class PathConstraintPositionTimeline : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 pathConstraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
