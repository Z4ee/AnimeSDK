#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipeSplineDeformation/CubicBezierSegment.h"
#include "unitysdk/PipeSplineDeformation/CurveSample.h"
#include "unitysdk/PipeSplineDeformation/PipeInstanceData.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineGpuBuildResult.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineGpuBuildSettings.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineGpuConverter_DenseSample.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_ADDPIPEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C4CEED0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDDENSESAMPLES_OFFSET UNITYSDK_OFFSET(0x1C4CC810)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDPARALLELTRANSPORTFRAMES_OFFSET UNITYSDK_OFFSET(0x1C4CD900)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDPIPEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C4CE3C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDRENDERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C4CE790)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILD_OFFSET UNITYSDK_OFFSET(0x1C4CC270)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_CALCULATESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C4CD010)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_ESTIMATECONTROLPOLYGONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4CECB0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_REBUILDTANGENTSFROMARCSAMPLES_OFFSET UNITYSDK_OFFSET(0x1C4CD5F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_RESAMPLEBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C4CD0B0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_SAFENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C4CEDB0)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineGpuConverter_TypeDefinitionIndex = 27400;

	class PipeSplineGpuConverter : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		static ::PipeSplineDeformation::PipeSplineGpuBuildResult Build(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* segments, ::PipeSplineDeformation::PipeSplineGpuBuildSettings settings, ::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances)
		{
			return ((::PipeSplineDeformation::PipeSplineGpuBuildResult(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*, ::PipeSplineDeformation::PipeSplineGpuBuildSettings, ::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>*, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILD_OFFSET))(segments, settings, curveSamples, pipeInstances);
		}

		static ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineGpuConverter_DenseSample>* BuildDenseSamples(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* segments, ::System::Single requestedSpacing, ::System::Single& totalLength)
		{
			return ((::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineGpuConverter_DenseSample>*(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDDENSESAMPLES_OFFSET))(segments, requestedSpacing, totalLength);
		}

		static ::System::Void ResampleByDistance(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeSplineGpuConverter_DenseSample>* denseSamples, ::System::Single totalLength, ::System::Single spacing, ::System::Int32 desiredCount, ::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* curveSamples)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeSplineGpuConverter_DenseSample>*, ::System::Single, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_RESAMPLEBYDISTANCE_OFFSET))(denseSamples, totalLength, spacing, desiredCount, curveSamples);
		}

		static ::System::Void RebuildTangentsFromArcSamples(::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* samples)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_REBUILDTANGENTSFROMARCSAMPLES_OFFSET))(samples);
		}

		static ::System::Void BuildParallelTransportFrames(::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* samples, ::UnityEngine::Vector3 preferredUp)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDPARALLELTRANSPORTFRAMES_OFFSET))(samples, preferredUp);
		}

		static ::System::Void BuildPipeInstances(::PipeSplineDeformation::PipeSplineGpuBuildSettings settings, ::System::Int32 curveSampleCount, ::System::Single totalLength, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances)
		{
			return ((::System::Void(*)(::PipeSplineDeformation::PipeSplineGpuBuildSettings, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDPIPEINSTANCES_OFFSET))(settings, curveSampleCount, totalLength, pipeInstances);
		}

		static ::System::Void AddPipeInstance(::PipeSplineDeformation::PipeSplineGpuBuildSettings settings, ::System::Int32 curveSampleCount, ::System::Single startDistance, ::System::Single pipeLength, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances)
		{
			return ((::System::Void(*)(::PipeSplineDeformation::PipeSplineGpuBuildSettings, ::System::Int32, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_ADDPIPEINSTANCE_OFFSET))(settings, curveSampleCount, startDistance, pipeLength, pipeInstances);
		}

		static ::UnityEngine::Bounds BuildRenderBounds(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* samples, ::System::Single padding)
		{
			return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_BUILDRENDERBOUNDS_OFFSET))(samples, padding);
		}

		static ::System::Int32 CalculateSampleCount(::System::Single totalLength, ::System::Single spacing)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_CALCULATESAMPLECOUNT_OFFSET))(totalLength, spacing);
		}

		static ::System::Single EstimateControlPolygonLength(::PipeSplineDeformation::CubicBezierSegment segment)
		{
			return ((::System::Single(*)(::PipeSplineDeformation::CubicBezierSegment))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_ESTIMATECONTROLPOLYGONLENGTH_OFFSET))(segment);
		}

		static ::UnityEngine::Vector3 SafeNormalize(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 fallback)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUCONVERTER_SAFENORMALIZE_OFFSET))(value, fallback);
		}
	};
}
