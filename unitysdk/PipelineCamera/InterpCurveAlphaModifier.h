#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_BEZIER_OFFSET UNITYSDK_OFFSET(0x1E5CAB20)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_CONSTANT_OFFSET UNITYSDK_OFFSET(0x1E5CA8E0)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_CUBIC_OFFSET UNITYSDK_OFFSET(0x1E5CA9F0)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_LINEAR_OFFSET UNITYSDK_OFFSET(0x1E5CA7D0)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA2E800)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA2E730)
#define PIPELINECAMERA_INTERPCURVEALPHAMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x4157E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurveAlphaModifier_TypeDefinitionIndex = 38334;

	struct alignas(8) InterpCurveAlphaModifier
	{
		::PipelineCamera::InterpCurve_1<::System::Single> _interpCurve; // 0x10

		::System::Void _ctor(::PipelineCamera::InterpCurve_1<::System::Single>& curve)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::InterpCurve_1<::System::Single>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER__CTOR_OFFSET))(this, curve);
		}

		/*
		static ::PipelineCamera::InterpCurveAlphaModifier Linear(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys)
		{
			return ((::PipelineCamera::InterpCurveAlphaModifier(*)(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_LINEAR_OFFSET))(keys);
		}
		*/

		/*
		static ::PipelineCamera::InterpCurveAlphaModifier Constant(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys)
		{
			return ((::PipelineCamera::InterpCurveAlphaModifier(*)(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_CONSTANT_OFFSET))(keys);
		}
		*/

		/*
		static ::PipelineCamera::InterpCurveAlphaModifier Cubic(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Single tension)
		{
			return ((::PipelineCamera::InterpCurveAlphaModifier(*)(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_CUBIC_OFFSET))(keys, tension);
		}
		*/

		/*
		static ::PipelineCamera::InterpCurveAlphaModifier Bezier(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys)
		{
			return ((::PipelineCamera::InterpCurveAlphaModifier(*)(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_BEZIER_OFFSET))(keys);
		}
		*/

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
