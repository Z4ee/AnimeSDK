#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC118D0)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D___C__DISPLAYCLASS4_0__DRAW_B__0_OFFSET UNITYSDK_OFFSET(0x1EC118E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawPoints3D___c__DisplayClass4_0_TypeDefinitionIndex = 38290;

	class CameraDebugDrawPoints3D___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Draw_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D___C__DISPLAYCLASS4_0__DRAW_B__0_OFFSET))(this);
		}
	};
}
