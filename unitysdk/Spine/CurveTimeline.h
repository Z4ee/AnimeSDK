#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Timeline.h"

namespace System { class String; }

#define SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET UNITYSDK_OFFSET(0x16053BF0)
#define SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET UNITYSDK_OFFSET(0x16053870)
#define SPINE_CURVETIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x16053990)
#define SPINE_CURVETIMELINE_SETLINEAR_OFFSET UNITYSDK_OFFSET(0x16053810)
#define SPINE_CURVETIMELINE_SETSTEPPED_OFFSET UNITYSDK_OFFSET(0x16053840)
#define SPINE_CURVETIMELINE_SHRINK_OFFSET UNITYSDK_OFFSET(0x160538B0)
#define SPINE_CURVETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x160537B0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline_TypeDefinitionIndex = 38303;

	class CurveTimeline : public ::Spine::Timeline
	{
	public:
		// static const ::System::Int32 LINEAR = 0x0; // 0x0
		// static const ::System::Int32 STEPPED = 0x1; // 0x0
		// static const ::System::Int32 BEZIER = 0x2; // 0x0
		// static const ::System::Int32 BEZIER_SIZE = 0x12; // 0x0
		::Il2CppArray<::System::Single>* curves; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLinear(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETLINEAR_OFFSET))(this, a1);
		}

		::System::Void SetStepped(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETSTEPPED_OFFSET))(this, a1);
		}

		::System::Single GetCurveType(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET))(this, a1);
		}

		::System::Void Shrink(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SHRINK_OFFSET))(this, a1);
		}

		::System::Void SetBezier(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETBEZIER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Single GetBezierValue(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
