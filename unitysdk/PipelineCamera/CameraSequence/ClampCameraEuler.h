#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/EulerRotationChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1D562780)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D5627F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x1D562A00)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXROLL_OFFSET UNITYSDK_OFFSET(0x1D562CC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXYAW_OFFSET UNITYSDK_OFFSET(0x1D562B60)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINPITCH_OFFSET UNITYSDK_OFFSET(0x1D562950)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINROLL_OFFSET UNITYSDK_OFFSET(0x1D562C10)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINYAW_OFFSET UNITYSDK_OFFSET(0x1D562AB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_RELATIVECLAMPSPACE_OFFSET UNITYSDK_OFFSET(0x1D562D70)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_RELATIVEROTATION_OFFSET UNITYSDK_OFFSET(0x1D562E20)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1D562F50)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D562FF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1D562F00)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D562FE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1D562FA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D564140)
#define PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5640D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ClampCameraEuler_TypeDefinitionIndex = 37967;

	class ClampCameraEuler : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_relativeRotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A60);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minRoll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minYaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A70);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_relativeClampSpace()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A78);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxPitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A80);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxYaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A88);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxRoll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A90);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minPitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ClampCameraEuler_TypeDefinitionIndex)->GetStaticField(0x8A98);
		}
		::PipelineCamera::EulerRotationChannel channel; // 0x18
		::System::Single minPitch; // 0x1C
		::System::Single maxPitch; // 0x20
		::System::Single minYaw; // 0x24
		::System::Single maxYaw; // 0x28
		::System::Single minRoll; // 0x2C
		::System::Single maxRoll; // 0x30
		::System::Boolean relativeClampSpace; // 0x34
		::UnityEngine::Quaternion relativeRotation; // 0x38
		::System::Boolean makeContextDependent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_minPitch(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINPITCH_OFFSET))(this, context);
		}

		::System::Single fetch_maxPitch(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXPITCH_OFFSET))(this, context);
		}

		::System::Single fetch_minYaw(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINYAW_OFFSET))(this, context);
		}

		::System::Single fetch_maxYaw(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXYAW_OFFSET))(this, context);
		}

		::System::Single fetch_minRoll(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MINROLL_OFFSET))(this, context);
		}

		::System::Single fetch_maxRoll(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_MAXROLL_OFFSET))(this, context);
		}

		::System::Boolean fetch_relativeClampSpace(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_RELATIVECLAMPSPACE_OFFSET))(this, context);
		}

		::UnityEngine::Quaternion fetch_relativeRotation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_FETCH_RELATIVEROTATION_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CLAMPCAMERAEULER_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}
	};
}
