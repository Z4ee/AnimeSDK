#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1AC53B90)
#define SPINE_CURVETIMELINE2_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1AC53BA0)
#define SPINE_CURVETIMELINE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC53AD0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline2_TypeDefinitionIndex = 36664;

	class CurveTimeline2 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x3; // 0x0
		// static const ::System::Int32 VALUE1 = 0x1; // 0x0
		// static const ::System::Int32 VALUE2 = 0x2; // 0x0

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_SETFRAME_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
