#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A3859B4230FECE9;
class Class_2_FC5BC7582631EFAD;
namespace Cinemachine { class ICinemachineCamera; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_FORCEDESTROY_OFFSET UNITYSDK_OFFSET(0x14843DF0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_CAMMODULESHOT_OFFSET UNITYSDK_OFFSET(0x14842C70)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x14842C10)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x14842C30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x14842C50)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x14843FF0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x14842C80)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_04577AC5AE05B41B_OFFSET UNITYSDK_OFFSET(0x14843650)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x148445C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x14843530)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x148437A0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x14844080)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_F6AFC74FF9D5F2C2_OFFSET UNITYSDK_OFFSET(0x14843470)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14843F40)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14843B60)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14843B10)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x148441C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONSWITCHTONEWSTAGE_OFFSET UNITYSDK_OFFSET(0x14844230)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x148437E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONTRANSITIONTOOTHER_OFFSET UNITYSDK_OFFSET(0x14844310)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x14842C20)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x14842C40)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x14844390)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14844470)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x148444F0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14844560)
#define MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x14844570)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualCutSceneCamera_TypeDefinitionIndex = 54233;

	class NapVirtualCutSceneCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::Cinemachine::CameraState Field_6_7; // 0x78
		::Cinemachine::LensSettings m_Lens; // 0x160
		::System::Collections::Generic::List_1<::Class_1_2A3859B4230FECE9*>* Field_6_5; // 0x190
		::Class_2_FC5BC7582631EFAD* Field_6_4; // 0x198
		::System::Boolean Field_6_11; // 0x1A0
		::System::Boolean isStartTick; // 0x1A1
		::MoleMole::Cameras::CameraDataAccessor* Field_6_9; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_STATE_OFFSET))(this);
		}

		::Class_2_FC5BC7582631EFAD* get_camModuleShot()
		{
			return ((::Class_2_FC5BC7582631EFAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_GET_CAMMODULESHOT_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitCameraData(::MoleMole::Cameras::CameraDataAccessor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_INITCAMERADATA_OFFSET))(this, a1);
		}

		::System::Void ForceDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_FORCEDESTROY_OFFSET))(this);
		}

		::System::Void OnStartNewGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONSTARTNEWGAME_OFFSET))(this);
		}

		::System::Void OnSwitchToNewStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONSWITCHTONEWSTAGE_OFFSET))(this);
		}

		::System::Void OnTransitionToOther()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_ONTRANSITIONTOOTHER_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::MoleMole::CameraModuleAvatarDataConfigExt* Method_6_F6AFC74FF9D5F2C2()
		{
			return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_F6AFC74FF9D5F2C2_OFFSET))(this);
		}

		::System::Void Method_6_04577AC5AE05B41B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_04577AC5AE05B41B_OFFSET))(this, a1);
		}

		::System::Void Method_6_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_6_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALCUTSCENECAMERA_METHOD_6_E7EF6BC52B28648C_OFFSET))(this);
		}
	};
}
