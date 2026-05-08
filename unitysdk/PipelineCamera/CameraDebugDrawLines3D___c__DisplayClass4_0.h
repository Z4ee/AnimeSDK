#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE03E70)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D___C__DISPLAYCLASS4_0__DRAW_B__0_OFFSET UNITYSDK_OFFSET(0x1AE03E80)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines3D___c__DisplayClass4_0_TypeDefinitionIndex = 36024;

	class CameraDebugDrawLines3D___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Draw_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D___C__DISPLAYCLASS4_0__DRAW_B__0_OFFSET))(this);
		}
	};
}
