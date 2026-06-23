#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD3E950)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_GETINVERSED_OFFSET UNITYSDK_OFFSET(0xA3D900)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0xA3D880)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1DD3EBB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_TRANSFORMTIMEINTERVAL_OFFSET UNITYSDK_OFFSET(0xA3D980)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_TRANSFORMTIME_OFFSET UNITYSDK_OFFSET(0xA3D910)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3F010)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM__TRANSFORMTIMEINTERVAL_G__TRANSFORMBOUND_8_0_OFFSET UNITYSDK_OFFSET(0x1DD3EE80)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceTimeTransform_TypeDefinitionIndex = 37869;

	struct alignas(4) CameraSequenceTimeTransform
	{
		static ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform* StaticGet_Identity()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceTimeTransform*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceTimeTransform_TypeDefinitionIndex)->GetStaticField(0x8C60);
		}
		::System::Single TimeScale; // 0x10
		::System::Single TimeOffset; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM__CCTOR_OFFSET))();
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform Create(::System::Single timeOffset, ::System::Single timeScale)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTimeTransform(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_CREATE_OFFSET))(timeOffset, timeScale);
		}

		::System::Boolean IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_ISIDENTITY_OFFSET))(this);
		}

		::System::Boolean GetInversed(::PipelineCamera::CameraSequence::CameraSequenceTimeTransform& inversed)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_GETINVERSED_OFFSET))(this, inversed);
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform Multiply(::PipelineCamera::CameraSequence::CameraSequenceTimeTransform& left, ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform& right)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTimeTransform(*)(::PipelineCamera::CameraSequence::CameraSequenceTimeTransform&, ::PipelineCamera::CameraSequence::CameraSequenceTimeTransform&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_MULTIPLY_OFFSET))(left, right);
		}

		::System::Single TransformTime(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_TRANSFORMTIME_OFFSET))(this, time);
		}

		/*
		::Foundation::Unreal::Interval_1<::System::Single> TransformTimeInterval(::Foundation::Unreal::Interval_1<::System::Single>& timeInterval)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM_TRANSFORMTIMEINTERVAL_OFFSET))(this, timeInterval);
		}
		*/

		/*
		static ::Foundation::Unreal::IntervalBound_1<::System::Single> _TransformTimeInterval_g__TransformBound_8_0(::PipelineCamera::CameraSequence::CameraSequenceTimeTransform& self, ::Foundation::Unreal::IntervalBound_1<::System::Single>& bound)
		{
			return ((::Foundation::Unreal::IntervalBound_1<::System::Single>(*)(::PipelineCamera::CameraSequence::CameraSequenceTimeTransform&, ::Foundation::Unreal::IntervalBound_1<::System::Single>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCETIMETRANSFORM__TRANSFORMTIMEINTERVAL_G__TRANSFORMBOUND_8_0_OFFSET))(self, bound);
		}
		*/
	};
}
