#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x14664700)
#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET UNITYSDK_OFFSET(0x14664710)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachinePostProcessing_TypeDefinitionIndex = 36946;

	class CinemachinePostProcessing : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
