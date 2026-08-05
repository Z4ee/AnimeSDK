#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1F157F50)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F157FC0)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_FETCH_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1F158120)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1F158290)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F158330)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1F158240)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F158320)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1F1582E0)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F158960)
#define PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1588A0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int VariableSequence_TypeDefinitionIndex = 38635;

	class VariableSequence : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_Variable()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(VariableSequence_TypeDefinitionIndex)->GetStaticField(0x8D90);
		}
		::Foundation::Unreal::FName _contextName; // 0x18
		::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Variable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> fetch_Variable(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>>(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_FETCH_VARIABLE_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_VARIABLESEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}
	};
}
