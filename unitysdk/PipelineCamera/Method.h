#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/Unreal/Unsafe/Interval.h"
#include "unitysdk/PipelineCamera/AsCameraDataType_2.h"
#include "unitysdk/PipelineCamera/AsCoreCameraDataType_2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/PipelineCamera/Method_AdvanceTimeResult.h"
#include "unitysdk/PipelineCamera/Method_CameraLogCategory.h"
#include "unitysdk/PipelineCamera/Method_LoopInterval.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera { template <typename T> class IMathOperation_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_METHOD_ADVANCETIME_OFFSET UNITYSDK_OFFSET(0x1DCDE300)
#define PIPELINECAMERA_METHOD_AVERAGE_1_OFFSET UNITYSDK_OFFSET(0x1DCDE9E0)
#define PIPELINECAMERA_METHOD_AVERAGE_OFFSET UNITYSDK_OFFSET(0x1DCDE990)
#define PIPELINECAMERA_METHOD_CALCULATECOSANGLE_OFFSET UNITYSDK_OFFSET(0x1DCDFDE0)
#define PIPELINECAMERA_METHOD_CLAMPRELATIVEANGLEXZ_OFFSET UNITYSDK_OFFSET(0x1DCDA330)
#define PIPELINECAMERA_METHOD_DOWNWARDALIGNMENT_1_OFFSET UNITYSDK_OFFSET(0x1DCDE890)
#define PIPELINECAMERA_METHOD_DOWNWARDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1DCDE840)
#define PIPELINECAMERA_METHOD_EULERDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DCD9180)
#define PIPELINECAMERA_METHOD_FASTATAN_OFFSET UNITYSDK_OFFSET(0x1DCDE770)
#define PIPELINECAMERA_METHOD_FASTNEGEXP_OFFSET UNITYSDK_OFFSET(0x1DCDE6F0)
#define PIPELINECAMERA_METHOD_GETDESIREDRADIUSBYENTITYSHAPE_OFFSET UNITYSDK_OFFSET(0x1DCDA770)
#define PIPELINECAMERA_METHOD_GETNEXTLARGESTPOWERTWO_OFFSET UNITYSDK_OFFSET(0x1DCDEAC0)
#define PIPELINECAMERA_METHOD_GETNUMBITSET_OFFSET UNITYSDK_OFFSET(0x1DCDEB20)
#define PIPELINECAMERA_METHOD_HALFFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1DCD9AA0)
#define PIPELINECAMERA_METHOD_INTERPCONSTANTTO_1_OFFSET UNITYSDK_OFFSET(0x1DCDFB90)
#define PIPELINECAMERA_METHOD_INTERPCONSTANTTO_2_OFFSET UNITYSDK_OFFSET(0x1DCE0170)
#define PIPELINECAMERA_METHOD_INTERPCONSTANTTO_3_OFFSET UNITYSDK_OFFSET(0x1DCE03D0)
#define PIPELINECAMERA_METHOD_INTERPCONSTANTTO_OFFSET UNITYSDK_OFFSET(0x1DCDEEE0)
#define PIPELINECAMERA_METHOD_INTERPTO_1_OFFSET UNITYSDK_OFFSET(0x1DCDF990)
#define PIPELINECAMERA_METHOD_INTERPTO_2_OFFSET UNITYSDK_OFFSET(0x1DCE0040)
#define PIPELINECAMERA_METHOD_INTERPTO_3_OFFSET UNITYSDK_OFFSET(0x1DCE02E0)
#define PIPELINECAMERA_METHOD_INTERPTO_OFFSET UNITYSDK_OFFSET(0x1DCDEE10)
#define PIPELINECAMERA_METHOD_INTERSECTIONOFANGLE_OFFSET UNITYSDK_OFFSET(0x1DCDA820)
#define PIPELINECAMERA_METHOD_INTERSECTIONOFPERIODIC_OFFSET UNITYSDK_OFFSET(0x1DCDC750)
#define PIPELINECAMERA_METHOD_INTERSECTIONOFRADIAN_OFFSET UNITYSDK_OFFSET(0x1DCDC590)
#define PIPELINECAMERA_METHOD_LERPPERCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DCDFF60)
#define PIPELINECAMERA_METHOD_MINMAX_1_OFFSET UNITYSDK_OFFSET(0x1DCDF5B0)
#define PIPELINECAMERA_METHOD_MINMAX_OFFSET UNITYSDK_OFFSET(0x1DCDF530)
#define PIPELINECAMERA_METHOD_OFFSETTOSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD9FF0)
#define PIPELINECAMERA_METHOD_OFFSETTOUNIFORMSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCDA180)
#define PIPELINECAMERA_METHOD_PRINT_OFFSET UNITYSDK_OFFSET(0x1DCD9360)
#define PIPELINECAMERA_METHOD_RELATIVEALPHA_OFFSET UNITYSDK_OFFSET(0x1DCDEBC0)
#define PIPELINECAMERA_METHOD_REVERSE_OFFSET UNITYSDK_OFFSET(0x1DCDEA40)
#define PIPELINECAMERA_METHOD_SAMPLECIRCLE_OFFSET UNITYSDK_OFFSET(0x1DCDA4D0)
#define PIPELINECAMERA_METHOD_SAMPLEDEFAULTRESOLVERCURVE_OFFSET UNITYSDK_OFFSET(0x1DCDA560)
#define PIPELINECAMERA_METHOD_SCREENALIGNEDOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD9640)
#define PIPELINECAMERA_METHOD_SCREENOFFSETTOOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD9BD0)
#define PIPELINECAMERA_METHOD_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD98E0)
#define PIPELINECAMERA_METHOD_SINCOSDEGREE_OFFSET UNITYSDK_OFFSET(0x1DCDED80)
#define PIPELINECAMERA_METHOD_SINCOS_OFFSET UNITYSDK_OFFSET(0x1DCDED00)
#define PIPELINECAMERA_METHOD_SINRANGE_OFFSET UNITYSDK_OFFSET(0x1DCDF6C0)
#define PIPELINECAMERA_METHOD_SOLVEQUADRATICEQUATION_OFFSET UNITYSDK_OFFSET(0x1DCD94A0)
#define PIPELINECAMERA_METHOD_SQRTSQUARESUM_1_OFFSET UNITYSDK_OFFSET(0x1DCDF270)
#define PIPELINECAMERA_METHOD_SQRTSQUARESUM_2_OFFSET UNITYSDK_OFFSET(0x1DCDF3C0)
#define PIPELINECAMERA_METHOD_SQRTSQUARESUM_OFFSET UNITYSDK_OFFSET(0x1DCDF150)
#define PIPELINECAMERA_METHOD_SQUARESUM_1_OFFSET UNITYSDK_OFFSET(0x1DCDF020)
#define PIPELINECAMERA_METHOD_SQUARESUM_2_OFFSET UNITYSDK_OFFSET(0x1DCDF0B0)
#define PIPELINECAMERA_METHOD_SQUARESUM_OFFSET UNITYSDK_OFFSET(0x1DCDEFB0)
#define PIPELINECAMERA_METHOD_TANGENTHALFFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1DCD9A10)
#define PIPELINECAMERA_METHOD_TOLOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x1DCDE450)
#define PIPELINECAMERA_METHOD_UNIFORMSCREENOFFSETTOOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD9D30)
#define PIPELINECAMERA_METHOD_UNIFORMSCREENOFFSETTOSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1DCD9E50)
#define PIPELINECAMERA_METHOD_UPWARDALIGNMENT_1_OFFSET UNITYSDK_OFFSET(0x1DCDE930)
#define PIPELINECAMERA_METHOD_UPWARDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1DCDE8E0)
#define PIPELINECAMERA_METHOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCE0510)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_OFFSET UNITYSDK_OFFSET(0x1DCE05E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_TypeDefinitionIndex = 38148;

	class Method : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_ValidCircleSegments()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x2A4E0);
		}
		static ::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>** StaticGet_PrintOnDelegate()
		{
			return (::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x2A4E8);
		}
		static ::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Single>>** StaticGet__sinCosIntegralAngle()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x2A4F0);
		}
		static ::System::Double* StaticGet_Log2D()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x8B20);
		}
		static ::System::Int32* StaticGet_SizeofChar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x8B28);
		}
		static ::System::Int32* StaticGet_SizeOfInt64()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x8B2C);
		}
		static ::System::Single* StaticGet_Log2F()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x8B30);
		}
		static ::System::Int32* StaticGet_SizeOfInt32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Method_TypeDefinitionIndex)->GetStaticField(0x8B34);
		}
		// static const ::System::String* OnScreenLoggerCondition; // 0x0
		// static const ::System::Single HalfPIf; // 0x0
		// static const ::System::Double HalfPId; // 0x0
		// static const ::System::Single QuarterPIf; // 0x0
		// static const ::System::Double QuarterPId; // 0x0
		// static const ::System::Single TwoPIf; // 0x0
		// static const ::System::Double TwoPId; // 0x0
		// static const ::System::Single MinFieldOfView; // 0x0
		// static const ::System::Single MaxFieldOfView; // 0x0
		// static const ::System::Single MinAspectRatio; // 0x0
		// static const ::System::Single MaxAspectRatio; // 0x0
		// static const ::System::Single MinPitch; // 0x0
		// static const ::System::Single MaxPitch; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 EulerDistance(::UnityEngine::Vector3& from, ::UnityEngine::Vector3& to)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_EULERDISTANCE_OFFSET))(from, to);
		}

		static ::System::Void Print(::PipelineCamera::Method_CameraLogCategory category, ::System::Boolean condition, ::System::String* message, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean outputToLog)
		{
			return ((::System::Void(*)(::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_PRINT_OFFSET))(category, condition, message, color, duration, outputToLog);
		}

		static ::System::ValueTuple_2<::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>> SolveQuadraticEquation(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::ValueTuple_2<::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>>(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SOLVEQUADRATICEQUATION_OFFSET))(a, b, c);
		}

		static ::UnityEngine::Vector2 ScreenAlignedOffset(::UnityEngine::Vector2& fromOffset, ::UnityEngine::Vector2& toOffset, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SCREENALIGNEDOFFSET_OFFSET))(fromOffset, toOffset, fieldOfView, aspectRatio);
		}

		static ::UnityEngine::Vector2 ScreenOffset(::PipelineCamera::FinalCameraData& cameraData, ::UnityEngine::Vector3& location, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SCREENOFFSET_OFFSET))(cameraData, location, aspectRatio);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> TangentHalfFieldOfView(::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_TANGENTHALFFIELDOFVIEW_OFFSET))(fieldOfView, aspectRatio);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> HalfFieldOfView(::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_HALFFIELDOFVIEW_OFFSET))(fieldOfView, aspectRatio);
		}

		static ::UnityEngine::Vector2 ScreenOffsetToOffset(::UnityEngine::Vector2& screenOffset, ::System::Single radius, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SCREENOFFSETTOOFFSET_OFFSET))(screenOffset, radius, fieldOfView, aspectRatio);
		}

		static ::UnityEngine::Vector2 UniformScreenOffsetToOffset(::UnityEngine::Vector2& screenOffset, ::System::Single radius, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_UNIFORMSCREENOFFSETTOOFFSET_OFFSET))(screenOffset, radius, fieldOfView, aspectRatio);
		}

		static ::UnityEngine::Vector2 UniformScreenOffsetToScreenOffset(::UnityEngine::Vector2& uniformScreenOffset, ::System::Single radius, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_UNIFORMSCREENOFFSETTOSCREENOFFSET_OFFSET))(uniformScreenOffset, radius, fieldOfView, aspectRatio);
		}

		static ::UnityEngine::Vector2 OffsetToScreenOffset(::UnityEngine::Vector2& offset, ::System::Single radius, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_OFFSETTOSCREENOFFSET_OFFSET))(offset, radius, fieldOfView, aspectRatio);
		}

		static ::System::Nullable_1<::UnityEngine::Vector2> OffsetToUniformScreenOffset(::UnityEngine::Vector2& offset, ::System::Single radius, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_OFFSETTOUNIFORMSCREENOFFSET_OFFSET))(offset, radius, fieldOfView, aspectRatio);
		}

		static ::System::Single ClampRelativeAngleXZ(::UnityEngine::Vector3& axis, ::UnityEngine::Vector3& vec, ::System::Single minAngle, ::System::Single maxAngle, ::System::Single& axisAngle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_CLAMPRELATIVEANGLEXZ_OFFSET))(axis, vec, minAngle, maxAngle, axisAngle);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* SampleCircle(::System::Int32 segmentHint)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SAMPLECIRCLE_OFFSET))(segmentHint);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> SampleDefaultResolverCurve(::System::Single time, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>& orbit, ::UnityEngine::Vector2& top, ::System::Single topCurvature)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>&, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SAMPLEDEFAULTRESOLVERCURVE_OFFSET))(time, orbit, top, topCurvature);
		}

		static ::System::Single GetDesiredRadiusByEntityShape(::System::Single pitch, ::System::Single height, ::System::Single ratio, ::System::Single unit)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_GETDESIREDRADIUSBYENTITYSHAPE_OFFSET))(pitch, height, ratio, unit);
		}

		static ::System::Span_1<::Foundation::Unreal::Unsafe::Interval> IntersectionOfAngle(::Foundation::Unreal::Unsafe::Interval rangeA, ::Foundation::Unreal::Unsafe::Interval rangeB, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval> output)
		{
			return ((::System::Span_1<::Foundation::Unreal::Unsafe::Interval>(*)(::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERSECTIONOFANGLE_OFFSET))(rangeA, rangeB, output);
		}

		static ::System::Span_1<::Foundation::Unreal::Unsafe::Interval> IntersectionOfRadian(::Foundation::Unreal::Unsafe::Interval rangeA, ::Foundation::Unreal::Unsafe::Interval rangeB, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval> output)
		{
			return ((::System::Span_1<::Foundation::Unreal::Unsafe::Interval>(*)(::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERSECTIONOFRADIAN_OFFSET))(rangeA, rangeB, output);
		}

		static ::System::Int32 IntersectionOfPeriodic(::Foundation::Unreal::Unsafe::Interval rangeA, ::Foundation::Unreal::Unsafe::Interval rangeB, ::System::Single period, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval> output)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval, ::System::Single, ::System::Span_1<::Foundation::Unreal::Unsafe::Interval>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERSECTIONOFPERIODIC_OFFSET))(rangeA, rangeB, period, output);
		}

		static ::PipelineCamera::Method_AdvanceTimeResult AdvanceTime(::System::Boolean isLooping, ::System::Single& deltaTime, ::System::Single& time, ::System::Single length)
		{
			return ((::PipelineCamera::Method_AdvanceTimeResult(*)(::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_ADVANCETIME_OFFSET))(isLooping, deltaTime, time, length);
		}

		static ::System::Int32 ToLoopInterval(::Foundation::Unreal::Interval_1<::System::Single>& interval, ::System::Span_1<::PipelineCamera::Method_LoopInterval> loopInterval, ::System::Single period)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::Interval_1<::System::Single>&, ::System::Span_1<::PipelineCamera::Method_LoopInterval>, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_TOLOOPINTERVAL_OFFSET))(interval, loopInterval, period);
		}

		static ::System::Single FastNegExp(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_FASTNEGEXP_OFFSET))(value);
		}

		static ::System::Single FastAtan(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_FASTATAN_OFFSET))(value);
		}

		static ::System::Int32 DownwardAlignment(::System::Int32 pointer, ::System::Int32 alignment)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_DOWNWARDALIGNMENT_OFFSET))(pointer, alignment);
		}

		static ::System::Int64 DownwardAlignment_1(::System::Int64 pointer, ::System::Int32 alignment)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_DOWNWARDALIGNMENT_1_OFFSET))(pointer, alignment);
		}

		static ::System::Int32 UpwardAlignment(::System::Int32 pointer, ::System::Int32 alignment)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_UPWARDALIGNMENT_OFFSET))(pointer, alignment);
		}

		static ::System::Int64 UpwardAlignment_1(::System::Int64 pointer, ::System::Int32 alignment)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_UPWARDALIGNMENT_1_OFFSET))(pointer, alignment);
		}

		static ::System::Int32 Average(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_AVERAGE_OFFSET))(a, b);
		}

		static ::System::Int64 Average_1(::System::Int64 a, ::System::Int64 b)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_AVERAGE_1_OFFSET))(a, b);
		}

		static ::System::UInt32 Reverse(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_REVERSE_OFFSET))(x);
		}

		static ::System::UInt32 GetNextLargestPowerTwo(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_GETNEXTLARGESTPOWERTWO_OFFSET))(value);
		}

		static ::System::UInt32 GetNumBitSet(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_GETNUMBITSET_OFFSET))(value);
		}

		static ::System::Single RelativeAlpha(::PipelineCamera::TimeBasedAlphaGenerator* self, ::System::Single currentTimestamp, ::System::Single deltaTime, ::System::Single fallback)
		{
			return ((::System::Single(*)(::PipelineCamera::TimeBasedAlphaGenerator*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_RELATIVEALPHA_OFFSET))(self, currentTimestamp, deltaTime, fallback);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> SinCos(::System::Single radian)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SINCOS_OFFSET))(radian);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> SinCosDegree(::System::Single degree)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SINCOSDEGREE_OFFSET))(degree);
		}

		static ::System::Single InterpTo(::System::Single current, ::System::Single target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPTO_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::System::Single InterpConstantTo(::System::Single current, ::System::Single target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPCONSTANTTO_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::System::Single SquareSum(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQUARESUM_OFFSET))(a, b);
		}

		static ::System::Single SquareSum_1(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQUARESUM_1_OFFSET))(a, b, c);
		}

		static ::System::Single SquareSum_2(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQUARESUM_2_OFFSET))(a, b, c, d);
		}

		static ::System::Single SqrtSquareSum(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQRTSQUARESUM_OFFSET))(a, b);
		}

		static ::System::Single SqrtSquareSum_1(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQRTSQUARESUM_1_OFFSET))(a, b, c);
		}

		static ::System::Single SqrtSquareSum_2(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SQRTSQUARESUM_2_OFFSET))(a, b, c, d);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> MinMax(::System::Single x, ::System::Single y)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_MINMAX_OFFSET))(x, y);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> MinMax_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_MINMAX_1_OFFSET))(values);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> SinRange(::System::Single start, ::System::Single interval)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_SINRANGE_OFFSET))(start, interval);
		}

		static ::UnityEngine::Quaternion InterpTo_1(::UnityEngine::Quaternion& current, ::UnityEngine::Quaternion& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPTO_1_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::UnityEngine::Quaternion InterpConstantTo_1(::UnityEngine::Quaternion& current, ::UnityEngine::Quaternion& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPCONSTANTTO_1_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::System::Nullable_1<::System::Single> CalculateCosAngle(::UnityEngine::Vector3& right, ::UnityEngine::Vector3& up)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_CALCULATECOSANGLE_OFFSET))(right, up);
		}

		static ::UnityEngine::Vector3 LerpPerChannel(::UnityEngine::Vector3& from, ::UnityEngine::Vector3& to, ::UnityEngine::Vector3& ratio)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_LERPPERCHANNEL_OFFSET))(from, to, ratio);
		}

		static ::UnityEngine::Vector3 InterpTo_2(::UnityEngine::Vector3& current, ::UnityEngine::Vector3& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPTO_2_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::UnityEngine::Vector3 InterpConstantTo_2(::UnityEngine::Vector3& current, ::UnityEngine::Vector3& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPCONSTANTTO_2_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::UnityEngine::Vector2 InterpTo_3(::UnityEngine::Vector2& current, ::UnityEngine::Vector2& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPTO_3_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::UnityEngine::Vector2 InterpConstantTo_3(::UnityEngine::Vector2& current, ::UnityEngine::Vector2& target, ::System::Single deltaTime, ::System::Single interpSpeed)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_INTERPCONSTANTTO_3_OFFSET))(current, target, deltaTime, interpSpeed);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* _SampleCircle_g__GetSinCosEnumerable_38_1()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_OFFSET))();
		}
	};
}
