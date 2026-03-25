#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

class Class_1_20FCC2F82753283C_1;
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA_INITSWIPECAMERA_OFFSET UNITYSDK_OFFSET(0xA2516B0)
#define RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xA251840)
#define RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xA251A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineSwipeRotationCamera_TypeDefinitionIndex = 56995;

	class RPGCinemachineSwipeRotationCamera : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Class_1_20FCC2F82753283C_1* Field_6_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void InitSwipeCamera(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA_INITSWIPECAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPEROTATIONCAMERA_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
