#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CinemachineVirtualCameraBindingModeExt_BindingModeExt.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA08C630)
#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_DEACTIVE_OFFSET UNITYSDK_OFFSET(0xA08C6D0)
#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA08B910)
#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_METHOD_5_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA08BBC0)
#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_REFRESHVCAM_OFFSET UNITYSDK_OFFSET(0xA08B990)
#define RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA08C720)

namespace RPG::Client
{
	inline static constexpr unsigned int CinemachineVirtualCameraBindingModeExt_TypeDefinitionIndex = 62994;

	class CinemachineVirtualCameraBindingModeExt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isActive; // 0x18
		::RPG::Client::CinemachineVirtualCameraBindingModeExt_BindingModeExt ExtBindingMode; // 0x1C
		::UnityEngine::Vector3 FollowOffset; // 0x20
		::UnityEngine::Vector3 CameraRotation; // 0x2C
		::System::Single CameraRotateOffset; // 0x38
		::RPG::Client::CinemachineVirtualCameraBindingModeExt_BindingModeExt RuntimeExtBindingMode; // 0x3C
		::UnityEngine::Vector3 RuntimeFollowOffset; // 0x40
		::UnityEngine::Vector3 RuntimeAimOffset; // 0x4C
		::System::Single RuntimeCameraRotateOffset; // 0x58
		::System::Single AnchorOffsetModifier; // 0x5C
		::UnityEngine::Vector3 Field_5_10; // 0x60
		::UnityEngine::Transform* Field_5_11; // 0x70
		::UnityEngine::Transform* Field_5_12; // 0x78
		::UnityEngine::Transform* Field_5_13; // 0x80
		::Cinemachine::CinemachineVirtualCamera* Field_5_14; // 0x88
		::Cinemachine::CinemachineTransposer* Field_5_15; // 0x90
		::Cinemachine::CinemachineComposer* Field_5_16; // 0x98
		::Cinemachine::CinemachineBrain* Field_5_17; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Active()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_ACTIVE_OFFSET))(this);
		}

		::System::Void DeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_DEACTIVE_OFFSET))(this);
		}

		::System::Void RefreshVCam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_REFRESHVCAM_OFFSET))(this);
		}

		::System::Void Method_5_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEVIRTUALCAMERABINDINGMODEEXT_METHOD_5_0076C796B2045359_OFFSET))(this);
		}
	};
}
