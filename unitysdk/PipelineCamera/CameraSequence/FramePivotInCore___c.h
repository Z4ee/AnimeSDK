#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotDataInCore.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FramePivotInCore_DataProvider; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8A80)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8AC0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C___CCTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0x1DAC8AD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCore___c_TypeDefinitionIndex = 37970;

	class FramePivotInCore___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::FramePivotInCore___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::FramePivotInCore___c**)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore___c_TypeDefinitionIndex)->GetStaticField(0x28D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::FramePivotDataInCore __cctor_b__21_0(::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider* provider, ::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::CameraSequence::FramePivotDataInCore(*)(::PVOID, ::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C___CCTOR_B__21_0_OFFSET))(this, provider, time, context);
		}
	};
}
