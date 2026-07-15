#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x167901C0)
#define RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION_SETENABLE_OFFSET UNITYSDK_OFFSET(0x16790170)
#define RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x16790440)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineCorrectionExtension_TypeDefinitionIndex = 66571;

	class RPGCinemachineCorrectionExtension : public ::Cinemachine::CinemachineExtension
	{
	public:
		::UnityEngine::Vector2 InputPitchRange; // 0x28
		::System::Single InitYAxisRatio; // 0x30
		::System::Boolean Field_6_2; // 0x34
		::System::Boolean Field_6_3; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINECORRECTIONEXTENSION_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
