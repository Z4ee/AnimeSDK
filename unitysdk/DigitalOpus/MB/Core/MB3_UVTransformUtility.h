#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/DigitalOpus/MB/Core/DVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_COMBINETRANSFORMS_1_OFFSET UNITYSDK_OFFSET(0x1F2A6210)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_COMBINETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F2A6190)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETENCAPSULATINGRECTSHIFTED_OFFSET UNITYSDK_OFFSET(0x1F2A63B0)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETENCAPSULATINGRECT_OFFSET UNITYSDK_OFFSET(0x1F2A6550)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETSHIFTTRANSFORMTOFITBINA_OFFSET UNITYSDK_OFFSET(0x1F2A6240)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_INVERSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F2A6160)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_LINESEGMENTCONTAINSSHIFTED_OFFSET UNITYSDK_OFFSET(0x1F2A6970)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINSSHIFTED_1_OFFSET UNITYSDK_OFFSET(0x1F2A6770)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINSSHIFTED_OFFSET UNITYSDK_OFFSET(0x1F2A6590)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1F2A68C0)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINS_OFFSET UNITYSDK_OFFSET(0x1F2A6A30)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TEST_OFFSET UNITYSDK_OFFSET(0x1F2A5FD0)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMPOINT_1_OFFSET UNITYSDK_OFFSET(0x1F2A6AD0)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1F2A61C0)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMX_OFFSET UNITYSDK_OFFSET(0x1F2A6200)
#define DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A6AF0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_UVTransformUtility_TypeDefinitionIndex = 94589;

	class MB3_UVTransformUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Test()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TEST_OFFSET))();
		}

		static ::System::Single TransformX(::DigitalOpus::MB::Core::DRect r, ::System::Double x)
		{
			return ((::System::Single(*)(::DigitalOpus::MB::Core::DRect, ::System::Double))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMX_OFFSET))(r, x);
		}

		static ::DigitalOpus::MB::Core::DRect CombineTransforms(::DigitalOpus::MB::Core::DRect& r1, ::DigitalOpus::MB::Core::DRect& r2)
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_COMBINETRANSFORMS_OFFSET))(r1, r2);
		}

		static ::UnityEngine::Rect CombineTransforms_1(::UnityEngine::Rect& r1, ::UnityEngine::Rect& r2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_COMBINETRANSFORMS_1_OFFSET))(r1, r2);
		}

		static ::DigitalOpus::MB::Core::DRect InverseTransform(::DigitalOpus::MB::Core::DRect& t)
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_INVERSETRANSFORM_OFFSET))(t);
		}

		static ::DigitalOpus::MB::Core::DRect GetShiftTransformToFitBinA(::DigitalOpus::MB::Core::DRect& A, ::DigitalOpus::MB::Core::DRect& B)
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETSHIFTTRANSFORMTOFITBINA_OFFSET))(A, B);
		}

		static ::DigitalOpus::MB::Core::DRect GetEncapsulatingRectShifted(::DigitalOpus::MB::Core::DRect& uvRect1, ::DigitalOpus::MB::Core::DRect& willBeIn)
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETENCAPSULATINGRECTSHIFTED_OFFSET))(uvRect1, willBeIn);
		}

		static ::DigitalOpus::MB::Core::DRect GetEncapsulatingRect(::DigitalOpus::MB::Core::DRect& uvRect1, ::DigitalOpus::MB::Core::DRect& uvRect2)
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_GETENCAPSULATINGRECT_OFFSET))(uvRect1, uvRect2);
		}

		static ::System::Boolean RectContainsShifted(::DigitalOpus::MB::Core::DRect& bucket, ::DigitalOpus::MB::Core::DRect& tryFit)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINSSHIFTED_OFFSET))(bucket, tryFit);
		}

		static ::System::Boolean RectContainsShifted_1(::UnityEngine::Rect& bucket, ::UnityEngine::Rect& tryFit)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINSSHIFTED_1_OFFSET))(bucket, tryFit);
		}

		static ::System::Boolean LineSegmentContainsShifted(::System::Single bucketOffset, ::System::Single bucketLength, ::System::Single tryFitOffset, ::System::Single tryFitLength)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_LINESEGMENTCONTAINSSHIFTED_OFFSET))(bucketOffset, bucketLength, tryFitOffset, tryFitLength);
		}

		static ::System::Boolean RectContains(::DigitalOpus::MB::Core::DRect& bigRect, ::DigitalOpus::MB::Core::DRect& smallToTestIfFits)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DRect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINS_OFFSET))(bigRect, smallToTestIfFits);
		}

		static ::System::Boolean RectContains_1(::UnityEngine::Rect& bigRect, ::UnityEngine::Rect& smallToTestIfFits)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_RECTCONTAINS_1_OFFSET))(bigRect, smallToTestIfFits);
		}

		static ::UnityEngine::Vector2 TransformPoint(::DigitalOpus::MB::Core::DRect& r, ::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector2(*)(::DigitalOpus::MB::Core::DRect&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMPOINT_OFFSET))(r, p);
		}

		static ::DigitalOpus::MB::Core::DVector2 TransformPoint_1(::DigitalOpus::MB::Core::DRect& r, ::DigitalOpus::MB::Core::DVector2 p)
		{
			return ((::DigitalOpus::MB::Core::DVector2(*)(::DigitalOpus::MB::Core::DRect&, ::DigitalOpus::MB::Core::DVector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_UVTRANSFORMUTILITY_TRANSFORMPOINT_1_OFFSET))(r, p);
		}
	};
}
