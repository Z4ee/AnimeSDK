#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Timeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET UNITYSDK_OFFSET(0x1839B6A0)
#define SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1839B3D0)
#define SPINE_CURVETIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1839B490)
#define SPINE_CURVETIMELINE_SETLINEAR_OFFSET UNITYSDK_OFFSET(0x1839B350)
#define SPINE_CURVETIMELINE_SETSTEPPED_OFFSET UNITYSDK_OFFSET(0x1839B390)
#define SPINE_CURVETIMELINE_SHRINK_OFFSET UNITYSDK_OFFSET(0x1839B410)
#define SPINE_CURVETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1839B290)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline_TypeDefinitionIndex = 30642;

	class CurveTimeline : public ::Spine::Timeline
	{
	public:
		// static const ::System::Int32 LINEAR = 0x0; // 0x0
		// static const ::System::Int32 STEPPED = 0x1; // 0x0
		// static const ::System::Int32 BEZIER = 0x2; // 0x0
		// static const ::System::Int32 BEZIER_SIZE = 0x12; // 0x0
		::Il2CppArray<::System::Single>* curves; // 0x20

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::Il2CppArray<::System::String*>* propertyIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, propertyIds);
		}

		::System::Void SetLinear(::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETLINEAR_OFFSET))(this, frame);
		}

		::System::Void SetStepped(::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETSTEPPED_OFFSET))(this, frame);
		}

		::System::Single GetCurveType(::System::Int32 frame)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET))(this, frame);
		}

		::System::Void Shrink(::System::Int32 bezierCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SHRINK_OFFSET))(this, bezierCount);
		}

		::System::Void SetBezier(::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single value1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single time2, ::System::Single value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETBEZIER_OFFSET))(this, bezier, frame, value, time1, value1, cx1, cy1, cx2, cy2, time2, value2);
		}

		::System::Single GetBezierValue(::System::Single time, ::System::Int32 frameIndex, ::System::Int32 valueOffset, ::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET))(this, time, frameIndex, valueOffset, i);
		}
	};
}
