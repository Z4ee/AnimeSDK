#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/AspectRatioPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B4CAB60)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_FETCH_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B4CAD00)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETASPECTRATIOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B4CA950)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B4CAA40)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B4CAAB0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B4CAAC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CADC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CADB0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B4CAE20)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B4CAF10)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AspectRatioPolicy_Default_TypeDefinitionIndex = 36281;

	class AspectRatioPolicy_Default : public ::PipelineCamera::CameraSequence::AspectRatioPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_AspectRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AspectRatioPolicy_Default_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		::System::Boolean useFixedAspectRatio; // 0x40
		::System::Single fixedAspectRatio; // 0x44
		::System::Single AspectRatio; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CCTOR_OFFSET))();
		}

		::System::Single GetAspectRatioInternal(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETASPECTRATIOINTERNAL_OFFSET))(this, context);
		}

		::System::Single GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_AspectRatio(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_FETCH_ASPECTRATIO_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
