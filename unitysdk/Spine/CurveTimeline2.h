#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1E5E1D20)
#define SPINE_CURVETIMELINE2_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1E5E1D30)
#define SPINE_CURVETIMELINE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1C80)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline2_TypeDefinitionIndex = 32807;

	class CurveTimeline2 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x3; // 0x0
		// static const ::System::Int32 VALUE1 = 0x1; // 0x0
		// static const ::System::Int32 VALUE2 = 0x2; // 0x0

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::String* propertyId1, ::System::String* propertyId2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2__CTOR_OFFSET))(this, frameCount, bezierCount, propertyId1, propertyId2);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single value1, ::System::Single value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_SETFRAME_OFFSET))(this, frame, time, value1, value2);
		}
	};
}
