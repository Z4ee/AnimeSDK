#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotDataInCore.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotInCore_DataProvider.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D877A30)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1D877BD0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D877D30)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_RADIUS_OFFSET UNITYSDK_OFFSET(0x1D877C80)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D877DE0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D8780D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D877990)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D878100)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8780E0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D8781B0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D8782A0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedFramePivotDataInCore_TypeDefinitionIndex = 37971;

	class FixedFramePivotDataInCore : public ::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedFramePivotDataInCore_TypeDefinitionIndex)->GetStaticField(0x8D10);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedFramePivotDataInCore_TypeDefinitionIndex)->GetStaticField(0x8D18);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedFramePivotDataInCore_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		::System::Single fieldOfView; // 0x40
		::System::Single radius; // 0x44
		::UnityEngine::Vector2 offset; // 0x48
		::System::Boolean makeContextDependent; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::System::Single fetch_radius(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_RADIUS_OFFSET))(this, context);
		}

		::UnityEngine::Vector2 fetch_offset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_FETCH_OFFSET_OFFSET))(this, context);
		}

		::PipelineCamera::CameraSequence::FramePivotDataInCore GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::CameraSequence::FramePivotDataInCore(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDFRAMEPIVOTDATAINCORE___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
