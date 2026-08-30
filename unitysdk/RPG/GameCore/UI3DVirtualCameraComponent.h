#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/UI3DVirtualCameraComponent_BlendStyle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class BlendDefinition; }
namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class InputDataController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ManikinAreaConfig; }
namespace RPG::GameCore { class UI3DCameraStateBase; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A35DCC0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_1_OFFSET UNITYSDK_OFFSET(0x1A368550)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1A3683C0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A367E90)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0x1A368A20)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREACONFIG_OFFSET UNITYSDK_OFFSET(0x1A369050)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0x1A369070)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_BRAIN_OFFSET UNITYSDK_OFFSET(0x1A369030)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1A368FD0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0x1A35C570)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_ISENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0x1A368FF0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A369010)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A3680D0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A368D90)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A368C10)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1A368000)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLENDSTYLE_OFFSET UNITYSDK_OFFSET(0x1A3689B0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLEND_OFFSET UNITYSDK_OFFSET(0x1A368790)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETMAINLIGHTDIROFFSET_OFFSET UNITYSDK_OFFSET(0x1A3686F0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A368740)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREACONFIG_OFFSET UNITYSDK_OFFSET(0x1A369060)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0x1A369080)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_BRAIN_OFFSET UNITYSDK_OFFSET(0x1A369040)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1A368FE0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_ISENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0x1A369000)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A369020)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x1A368D10)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_UPDATECINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0x1A368CB0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A369290)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__GETACTIVECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1A368C70)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__SETUPBLEND_OFFSET UNITYSDK_OFFSET(0x1A368930)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__TICKENVIROMENT_OFFSET UNITYSDK_OFFSET(0x1A368E60)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1A369090)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEUI3DCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1A368ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DVirtualCameraComponent_TypeDefinitionIndex = 57707;

	class UI3DVirtualCameraComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* _BLEND_CONFIG_PATH; // 0x0
		::RPG::Client::EnvironmentSystem* _EnvironmentSystemRef; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x20
		::UnityEngine::Transform* _AreaRootTrans_k__BackingField; // 0x28
		::RPG::GameCore::UI3DCameraStateBase* _ActiveCameraState; // 0x30
		::Cinemachine::CinemachineBrain* _Brain_k__BackingField; // 0x38
		::UnityEngine::Camera* _Camera_k__BackingField; // 0x40
		::UnityEngine::Transform* _CameraTrans; // 0x48
		::RPG::GameCore::ManikinAreaConfig* _AreaConfig_k__BackingField; // 0x50
		::RPG::Client::BlendDefinition* _BlendConfig; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::UI3DCameraStateBase*>* _CameraStates; // 0x60
		::RPG::Client::InputDataController* _InputControllerRef; // 0x68
		::System::Boolean _IsEnviromentProfileActive; // 0x70
		::System::Boolean _IsEnableMainLightChange_k__BackingField; // 0x71
		::UnityEngine::Vector2 _MainLightDirOffset; // 0x74
		::UnityEngine::Vector4 _MainLightDir; // 0x7C
		::UnityEngine::Vector2 _DEFAULT_MAIN_LIGHT_DIR; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::UI3DCameraStateBase* CreateCameraState(::UnityEngine::Transform* a1)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::UI3DCameraStateBase* CreateCameraState_1(::System::Type* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID, ::System::Type*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMainLightDirOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETMAINLIGHTDIROFFSET_OFFSET))(this, a1);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETTARGETENTITY_OFFSET))(this, a1);
		}

		::System::Void SetBlend(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLEND_OFFSET))(this, a1);
		}

		::System::Void SetBlendStyle(::RPG::GameCore::UI3DVirtualCameraComponent_BlendStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent_BlendStyle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLENDSTYLE_OFFSET))(this, a1);
		}

		::System::Void ResetMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void EnableMainLightChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ENABLEMAINLIGHTCHANGE_OFFSET))(this, a1);
		}

		::System::Void ResetInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void ActiveVirtualCamera(::RPG::GameCore::UI3DCameraStateBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraStateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void UpdateCinemachineBrain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_UPDATECINEMACHINEBRAIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_CAMERA_OFFSET))(this);
		}

		::System::Void set_Camera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_CAMERA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnableMainLightChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_ISENABLEMAINLIGHTCHANGE_OFFSET))(this);
		}

		::System::Void set_IsEnableMainLightChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_ISENABLEMAINLIGHTCHANGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_TARGETENTITY_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineBrain* get_Brain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_BRAIN_OFFSET))(this);
		}

		::System::Void set_Brain(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_BRAIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ManikinAreaConfig* get_AreaConfig()
		{
			return ((::RPG::GameCore::ManikinAreaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREACONFIG_OFFSET))(this);
		}

		::System::Void set_AreaConfig(::RPG::GameCore::ManikinAreaConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREACONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::ClientInputData* get_InputData()
		{
			return ((::RPG::Client::ClientInputData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_INPUTDATA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AreaRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREAROOTTRANS_OFFSET))(this);
		}

		::System::Void set_AreaRootTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREAROOTTRANS_OFFSET))(this, a1);
		}

		::System::Void _TickEnviroment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__TICKENVIROMENT_OFFSET))(this);
		}

		::System::Void _UpdateMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void _UpdateUI3DCameraState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEUI3DCAMERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraStateBase* _GetActiveCameraState()
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__GETACTIVECAMERASTATE_OFFSET))(this);
		}

		::System::Void _SetupBlend(::Cinemachine::CinemachineBlendDefinition_Style a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__SETUPBLEND_OFFSET))(this, a1, a2, a3);
		}
	};
}
