#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/PositionDampingAxis.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_COMPOSE_1_OFFSET UNITYSDK_OFFSET(0x99B360)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_COMPOSE_OFFSET UNITYSDK_OFFSET(0x99B240)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B9BA4E0)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B9BA210)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_DECOMPOSE_1_OFFSET UNITYSDK_OFFSET(0x99B100)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x99B060)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x99B370)
#define PIPELINECAMERA_POSITIONAXISDECOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x99B030)

namespace PipelineCamera
{
	inline static constexpr unsigned int PositionAxisDecomposer_TypeDefinitionIndex = 36052;

	struct alignas(4) PositionAxisDecomposer
	{
		::UnityEngine::Vector3 _forward; // 0x10
		::UnityEngine::Vector3 _right; // 0x1C
		::UnityEngine::Vector3 _up; // 0x28

		::System::Void _ctor(::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& right, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER__CTOR_OFFSET))(this, forward, right, up);
		}

		/*
		static ::PipelineCamera::PositionAxisDecomposer Create(::UnityEngine::Quaternion& rotation)
		{
			return ((::PipelineCamera::PositionAxisDecomposer(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_CREATE_OFFSET))(rotation);
		}
		*/

		/*
		static ::PipelineCamera::PositionAxisDecomposer Create_1(::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& forceUp)
		{
			return ((::PipelineCamera::PositionAxisDecomposer(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_CREATE_1_OFFSET))(rotation, forceUp);
		}
		*/

		/*
		::System::Void Decompose(::UnityEngine::Vector3& position, ::PipelineCamera::ValueBasedDampingStatus& x, ::PipelineCamera::ValueBasedDampingStatus& y, ::PipelineCamera::ValueBasedDampingStatus& z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_DECOMPOSE_OFFSET))(this, position, x, y, z);
		}
		*/

		/*
		::System::Void Decompose_1(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& velocity, ::PipelineCamera::VelocityBasedDampingStatus& x, ::PipelineCamera::VelocityBasedDampingStatus& y, ::PipelineCamera::VelocityBasedDampingStatus& z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_DECOMPOSE_1_OFFSET))(this, position, velocity, x, y, z);
		}
		*/

		/*
		::System::Void Compose(::PipelineCamera::ValueBasedDampingStatus& x, ::PipelineCamera::ValueBasedDampingStatus& y, ::PipelineCamera::ValueBasedDampingStatus& z, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_COMPOSE_OFFSET))(this, x, y, z, position);
		}
		*/

		/*
		::System::Void Compose_1(::PipelineCamera::VelocityBasedDampingStatus& x, ::PipelineCamera::VelocityBasedDampingStatus& y, ::PipelineCamera::VelocityBasedDampingStatus& z, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_COMPOSE_1_OFFSET))(this, x, y, z, position, velocity);
		}
		*/

		::UnityEngine::Vector3 Override(::UnityEngine::Vector3& value, ::UnityEngine::Vector3& overrideValue, ::PipelineCamera::PositionDampingAxis axis)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::PipelineCamera::PositionDampingAxis))((::PBYTE)hIl2Cpp + PIPELINECAMERA_POSITIONAXISDECOMPOSER_OVERRIDE_OFFSET))(this, value, overrideValue, axis);
		}
	};
}
