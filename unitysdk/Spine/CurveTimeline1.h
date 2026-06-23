#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1E5E1AD0)
#define SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1E5E1A60)
#define SPINE_CURVETIMELINE1_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1E5E1A70)
#define SPINE_CURVETIMELINE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E19E0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline1_TypeDefinitionIndex = 32806;

	class CurveTimeline1 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x2; // 0x0
		// static const ::System::Int32 VALUE = 0x1; // 0x0

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::String* propertyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1__CTOR_OFFSET))(this, frameCount, bezierCount, propertyId);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_SETFRAME_OFFSET))(this, frame, time, value);
		}

		::System::Single GetCurveValue(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET))(this, time);
		}
	};
}
