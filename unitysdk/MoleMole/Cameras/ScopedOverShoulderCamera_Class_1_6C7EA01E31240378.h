#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x11C89680)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x11C89740)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378__CTOR_OFFSET UNITYSDK_OFFSET(0x11C89670)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_6C7EA01E31240378_TypeDefinitionIndex = 58299;

	class ScopedOverShoulderCamera_Class_1_6C7EA01E31240378 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_1; // 0x10
		::Enum_3_4A097505A5A1A069 Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6C7EA01E31240378_METHOD_1_1904421C06532BF0_OFFSET))(this);
		}
	};
}
