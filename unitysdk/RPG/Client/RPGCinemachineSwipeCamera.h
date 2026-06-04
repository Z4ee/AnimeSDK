#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

class Class_1_F11A264FAF28E2C5;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::GameCore { class MazeDragCameraConfig; }

#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_ENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xC685E40)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC686030)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_OVERRIDESWIPECONFIG_OFFSET UNITYSDK_OFFSET(0xC685EC0)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xC6860A0)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_START_OFFSET UNITYSDK_OFFSET(0xC685F30)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xC686180)
#define RPG_CLIENT_RPGCINEMACHINESWIPECAMERA___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC686190)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineSwipeCamera_TypeDefinitionIndex = 65165;

	class RPGCinemachineSwipeCamera : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Class_1_F11A264FAF28E2C5* Field_6_0; // 0x28
		::System::Boolean Field_6_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void EnableUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_ENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void OverrideSwipeConfig(::RPG::GameCore::MazeDragCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeDragCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_OVERRIDESWIPECONFIG_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_ONDESTROY_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESWIPECAMERA___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
