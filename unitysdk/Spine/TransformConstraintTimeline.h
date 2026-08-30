#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E625850)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1E625B20)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1E625760)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1E625770)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1E625780)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E625680)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintTimeline_TypeDefinitionIndex = 38326;

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

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_TransformConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetCurveValue(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
