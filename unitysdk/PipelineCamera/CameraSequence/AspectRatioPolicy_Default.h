#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/AspectRatioPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D876CF0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_FETCH_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1D876E90)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETASPECTRATIOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D876AE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D876BD0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D876C40)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D876C50)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D876F50)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D876F40)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D876FB0)
#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY_DEFAULT___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D8770A0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AspectRatioPolicy_Default_TypeDefinitionIndex = 37889;

	class AspectRatioPolicy_Default : public ::PipelineCamera::CameraSequence::AspectRatioPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_AspectRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AspectRatioPolicy_Default_TypeDefinitionIndex)->GetStaticField(0x8D00);
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
