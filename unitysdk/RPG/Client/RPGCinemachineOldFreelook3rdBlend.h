#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_DISABLE_OFFSET UNITYSDK_OFFSET(0x18032C90)
#define RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_INIT_OFFSET UNITYSDK_OFFSET(0x18032A50)
#define RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18032CD0)
#define RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18033010)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineOldFreelook3rdBlend_TypeDefinitionIndex = 69667;

	class RPGCinemachineOldFreelook3rdBlend : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Cinemachine::CinemachineFreeLook* ODIDIJIBJKK; // 0x28
		::UnityEngine::Vector3 JKHEOBPDLLK; // 0x30
		::System::Boolean MOKNCFJICIC; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Cinemachine::CinemachineFreeLook* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_INIT_OFFSET))(this, a1);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_DISABLE_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEOLDFREELOOK3RDBLEND_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
