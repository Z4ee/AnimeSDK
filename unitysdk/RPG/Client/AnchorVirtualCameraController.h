#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnchorVirtualCameraMode.h"
#include "unitysdk/RPG/Client/LookAtExtraConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class VirtualCameraAutoFitScreen; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB30B6B0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_1EC859072E470A1E_OFFSET UNITYSDK_OFFSET(0xB30D430)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xB30CF50)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB30BF50)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB30B630)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_461F63418186686D_OFFSET UNITYSDK_OFFSET(0xB30D320)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xB30BD90)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB30D780)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB30E160)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB30BCE0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_C66E15B631BB1D0F_OFFSET UNITYSDK_OFFSET(0xB30EF20)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_E51D1F1F10746D68_OFFSET UNITYSDK_OFFSET(0xB30ED50)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB30B690)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB30B6A0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB30B680)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xB30BFA0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xB30C150)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB30BBB0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_SETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xB30D280)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xB30D840)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xB30E1E0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPHONECAMERAPOSITIONANDDIRECTION_OFFSET UNITYSDK_OFFSET(0xB30E3F0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPROPCAMERAPOSITIONANDDIRECTION_OFFSET UNITYSDK_OFFSET(0xB30F110)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnchorVirtualCameraController_TypeDefinitionIndex = 63902;

	class AnchorVirtualCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnchorVirtualCameraMode ControllerMode; // 0x18
		::UnityEngine::Vector3 PositionOffsetRatio; // 0x1C
		::System::String* AnchorName; // 0x28
		::UnityEngine::Vector3 RotationMaxLimit; // 0x30
		::UnityEngine::Vector3 RotationMinLimit; // 0x3C
		::System::Single MaxOffsetDistance; // 0x48
		::System::Single RotationLerpDuration; // 0x4C
		::System::Single PositionLerpDuration; // 0x50
		::UnityEngine::AnimationCurve* MovingLerpCurve; // 0x58
		::UnityEngine::Transform* FollowTarget; // 0x60
		::System::Single CameraActiveLerpDuration; // 0x68
		::System::Single CameraDeactiveLerpDuration; // 0x6C
		::UnityEngine::Vector3 CameraRootOffset; // 0x70
		::UnityEngine::Vector3 CameraRotateRatio; // 0x7C
		::UnityEngine::Vector3 Field_5_14; // 0x88
		::UnityEngine::Quaternion Field_5_15; // 0x94
		::UnityEngine::Vector3 Field_5_16; // 0xA4
		::Cinemachine::CinemachineVirtualCamera* Field_5_17; // 0xB0
		::UnityEngine::Vector3 Field_5_18; // 0xB8
		::UnityEngine::Vector3 Field_5_19; // 0xC4
		::System::Boolean Field_5_20; // 0xD0
		::System::Boolean Field_5_21; // 0xD1
		::UnityEngine::Transform* Field_5_22; // 0xD8
		::UnityEngine::Vector3 Field_5_23; // 0xE0
		::RPG::Client::AdventurePhase* Field_5_24; // 0xF0
		::UnityEngine::Vector3 Field_5_25; // 0xF8
		::System::Single Field_5_26; // 0x104
		::System::Single Field_5_27; // 0x108
		::UnityEngine::Vector3 Field_5_28; // 0x10C
		::UnityEngine::Quaternion Field_5_29; // 0x118
		::UnityEngine::Vector3 Field_5_30; // 0x128
		::System::Boolean Field_5_31; // 0x134
		::UnityEngine::AnimationCurve* Field_5_32; // 0x138
		::UnityEngine::Vector3 Field_5_33; // 0x140
		::UnityEngine::Quaternion Field_5_34; // 0x14C
		::System::Boolean Field_5_35; // 0x15C
		::RPG::Client::CameraDataAndFlags* Field_5_36; // 0x160
		::System::Boolean Field_5_37; // 0x168
		::UnityEngine::Vector3 FollowOffsetDetect; // 0x16C
		::Il2CppArray<::RPG::Client::LookAtExtraConfig>* LookAtPhoneExtraConfigs; // 0x178
		::UnityEngine::Vector3 Field_5_40; // 0x180
		::RPG::Client::CharacterMonoAvatar* Field_5_41; // 0x190
		::Cinemachine::CinemachineComposer* Field_5_42; // 0x198
		::RPG::Client::VirtualCameraAutoFitScreen* Field_5_43; // 0x1A0
		::UnityEngine::Vector3 Field_5_44; // 0x1A8
		::Il2CppArray<::RPG::Client::LookAtExtraConfig>* LookAtPropExtraConfigs; // 0x1B8
		::System::Single DetectPlayerRaycastLength; // 0x1C0
		::System::Int32 Field_5_47; // 0x1C4
		::RPG::Client::PipelineCameraEngine* Field_5_48; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_5_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void SetCenterPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_SETCENTERPOS_OFFSET))(this, a1);
		}

		static ::UnityEngine::AnimationCurve* Method_5_461F63418186686D()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_461F63418186686D_OFFSET))();
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Single Method_5_1EC859072E470A1E(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_1EC859072E470A1E_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void StartUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STARTUPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_8C3DB70FFBBF01C7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_8C3DB70FFBBF01C7_OFFSET))(this, a1);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STOPUPDATE_OFFSET))(this);
		}

		::System::Void UpdateLookAtPhoneCameraPositionAndDirection(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPHONECAMERAPOSITIONANDDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2ED6C3773AA1E488()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_2ED6C3773AA1E488_OFFSET))(this);
		}

		::System::Boolean Method_5_C66E15B631BB1D0F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_C66E15B631BB1D0F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_E51D1F1F10746D68(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_METHOD_5_E51D1F1F10746D68_OFFSET))(this, a1);
		}

		::System::Void UpdateLookAtPropCameraPositionAndDirection(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPROPCAMERAPOSITIONANDDIRECTION_OFFSET))(this, a1);
		}
	};
}
