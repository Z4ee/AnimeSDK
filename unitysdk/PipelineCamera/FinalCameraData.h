#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_FINALCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA8BB10)
#define PIPELINECAMERA_FINALCAMERADATA_CHECKLOCATION_OFFSET UNITYSDK_OFFSET(0xA8BA90)
#define PIPELINECAMERA_FINALCAMERADATA_CHECKROTATION_OFFSET UNITYSDK_OFFSET(0xA8BAD0)
#define PIPELINECAMERA_FINALCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1F057DE0)
#define PIPELINECAMERA_FINALCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define PIPELINECAMERA_FINALCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define PIPELINECAMERA_FINALCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x4963E0)
#define PIPELINECAMERA_FINALCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA8B9E0)
#define PIPELINECAMERA_FINALCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xA8B890)
#define PIPELINECAMERA_FINALCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0xA8B920)

namespace PipelineCamera
{
	inline static constexpr unsigned int FinalCameraData_TypeDefinitionIndex = 38258;

	struct alignas(4) FinalCameraData
	{
		::UnityEngine::Vector3 _location; // 0x10
		::UnityEngine::Quaternion _rotation; // 0x1C
		::System::Single _fieldOfView; // 0x2C

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void SetLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_SETLOCATION_OFFSET))(this, value);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_SETROTATION_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		static ::PipelineCamera::FinalCameraData Create(::UnityEngine::Vector3& location, ::UnityEngine::Quaternion& rotation, ::System::Single fieldOfView)
		{
			return ((::PipelineCamera::FinalCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_CREATE_OFFSET))(location, rotation, fieldOfView);
		}

		::System::Void CheckLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_CHECKLOCATION_OFFSET))(this);
		}

		::System::Void CheckRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_CHECKROTATION_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FINALCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}
	};
}
