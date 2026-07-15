#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1476BE70)
#define SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x14779E60)
#define SPINE_CURVETIMELINE1_SETFRAME_OFFSET UNITYSDK_OFFSET(0x14779E70)
#define SPINE_CURVETIMELINE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1476B990)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline1_TypeDefinitionIndex = 37445;

	class CurveTimeline1 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x2; // 0x0
		// static const ::System::Int32 VALUE = 0x1; // 0x0

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_SETFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetCurveValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET))(this, a1);
		}
	};
}
