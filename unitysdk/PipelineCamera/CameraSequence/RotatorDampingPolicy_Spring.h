#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/PipelineCamera/CameraSequence/RotatorDampingAxis.h"
#include "unitysdk/PipelineCamera/CameraSequence/RotatorDampingPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DD40540)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DD41570)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD415A0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD41580)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotatorDampingPolicy_Spring_TypeDefinitionIndex = 37904;

	class RotatorDampingPolicy_Spring : public ::PipelineCamera::CameraSequence::RotatorDampingPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_LastTarget()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C80);
		}
		static ::Foundation::Unreal::FName* StaticGet_Velocity()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C88);
		}
		static ::Foundation::Unreal::FName* StaticGet_LastCurrent()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C90);
		}
		static ::Foundation::Unreal::FName* StaticGet_DampingTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotatorDampingPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C98);
		}
		::UnityEngine::Vector3 stiffness; // 0x40
		::UnityEngine::Vector3 damping; // 0x4C
		::PipelineCamera::CameraSequence::RotatorDampingAxis dampingAxis; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING__CCTOR_OFFSET))();
		}

		::Foundation::Unreal::FRotator GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::Foundation::Unreal::FRotator current, ::Foundation::Unreal::FRotator target)
		{
			return ((::Foundation::Unreal::FRotator(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::Foundation::Unreal::FRotator, ::Foundation::Unreal::FRotator))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING_GETDATA_OFFSET))(this, time, context, current, target);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY_SPRING_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
