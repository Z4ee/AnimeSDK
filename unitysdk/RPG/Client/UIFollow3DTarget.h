#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class UIFollow3DTarget_PostProcessDelegate; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIFOLLOW3DTARGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1701C1B0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_CLEARFOLLOWDATA_OFFSET UNITYSDK_OFFSET(0x1701B780)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1701C730)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET_OFFSET UNITYSDK_OFFSET(0x1701B510)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET__CAMERA_OFFSET UNITYSDK_OFFSET(0x1701B490)
#define RPG_CLIENT_UIFOLLOW3DTARGET_INIT_OFFSET UNITYSDK_OFFSET(0x17001370)
#define RPG_CLIENT_UIFOLLOW3DTARGET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1701BAE0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_ONLYAPPLYCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1701B800)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SAFEUPDATE_OFFSET UNITYSDK_OFFSET(0x1701BA80)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETFLIPX_OFFSET UNITYSDK_OFFSET(0x1701B680)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETOVERRIDECAMERA_OFFSET UNITYSDK_OFFSET(0x1701B630)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETPOSTPROCESSHANDLER_OFFSET UNITYSDK_OFFSET(0x1701C110)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETPRETICKHANDLER_OFFSET UNITYSDK_OFFSET(0x1701C160)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17001570)
#define RPG_CLIENT_UIFOLLOW3DTARGET_START_OFFSET UNITYSDK_OFFSET(0x1701C250)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1701C7F0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CLAMPPOS_OFFSET UNITYSDK_OFFSET(0x1701C500)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1701C790)
#define RPG_CLIENT_UIFOLLOW3DTARGET__GETTARGETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1701B870)
#define RPG_CLIENT_UIFOLLOW3DTARGET__INITUICONFIG_OFFSET UNITYSDK_OFFSET(0x1701B6D0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET UNITYSDK_OFFSET(0x1701C410)
#define RPG_CLIENT_UIFOLLOW3DTARGET__ONUIREDOADAPT_OFFSET UNITYSDK_OFFSET(0x1701C2A0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__POSTPROCESSPOSITION_OFFSET UNITYSDK_OFFSET(0x1701C640)
#define RPG_CLIENT_UIFOLLOW3DTARGET__SHOULDTICKFOLLOW_OFFSET UNITYSDK_OFFSET(0x1701C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollow3DTarget_TypeDefinitionIndex = 69062;

	class UIFollow3DTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet__CAMERA_DIS_INIT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x13ED0);
		}
		static ::System::Boolean* StaticGet__CHECK_VISIBILITY()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x13ED1);
		}
		static ::UnityEngine::Vector3* StaticGet__veryFarPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x13ED4);
		}
		::UnityEngine::Camera* _OverrideCamera; // 0x18
		::RPG::GameCore::GameEntity* FollowEntity; // 0x20
		::System::Boolean ActiveState; // 0x28
		::UnityEngine::Vector3 WorldOffset; // 0x2C
		::UnityEngine::Vector3 LocalOffset; // 0x38
		::System::Boolean UseLocalOffset; // 0x44
		::System::Boolean Clamp01; // 0x45
		::UnityEngine::Rect ClampRect; // 0x48
		::UnityEngine::Vector3 ScreenOffset; // 0x58
		::UnityEngine::Vector3 viewPos; // 0x64
		::UnityEngine::RectTransform* _RectTransformRef; // 0x70
		::UnityEngine::RectTransform* _RectParentTransformRef; // 0x78
		::UnityEngine::Transform* _FollowTargetTrans; // 0x80
		::UnityEngine::Vector2 _ParentRectSize; // 0x88
		::UnityEngine::Vector3 _FollowPosition; // 0x90
		::System::Boolean _UseFixedPosition; // 0x9C
		::System::Boolean _FlipX; // 0x9D
		::RPG::Client::NotifyHandler* _NotifyHandler; // 0xA0
		::RPG::Client::UIFollow3DTarget_PostProcessDelegate* _PostProcessHandler; // 0xA8
		::System::Action_1<::RPG::Client::UIFollow3DTarget*>* _PreTickHandler; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__CCTOR_OFFSET))();
		}

		::UnityEngine::Camera* get__Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_GET__CAMERA_OFFSET))(this);
		}

		static ::RPG::Client::UIFollow3DTarget* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UIFollow3DTarget*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_GET_OFFSET))(a1);
		}

		::System::Void SetOverrideCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETOVERRIDECAMERA_OFFSET))(this, a1);
		}

		::System::Void SetFlipX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETFLIPX_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_INIT_OFFSET))(this);
		}

		::System::Void ClearFollowData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_CLEARFOLLOWDATA_OFFSET))(this);
		}

		::System::Void OnlyApplyCurrentPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_ONLYAPPLYCURRENTPOSITION_OFFSET))(this);
		}

		::System::Void SafeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SAFEUPDATE_OFFSET))(this);
		}

		::System::Void SetPostProcessHandler(::RPG::Client::UIFollow3DTarget_PostProcessDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget_PostProcessDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETPOSTPROCESSHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetPreTickHandler(::System::Action_1<::RPG::Client::UIFollow3DTarget*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::UIFollow3DTarget*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETPRETICKHANDLER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_START_OFFSET))(this);
		}

		::System::Void _OnUIRedoAdapt(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__ONUIREDOADAPT_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetTargetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__GETTARGETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean _IsWorldPosClampedInCameraZ(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _PostProcessPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__POSTPROCESSPOSITION_OFFSET))(this, a1);
		}

		static ::System::Void _InitUIConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__INITUICONFIG_OFFSET))();
		}

		::System::Boolean _ShouldTickFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__SHOULDTICKFOLLOW_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ClampPos(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__CLAMPPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* get_FollowTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SET_FOLLOWTARGET_OFFSET))(this, a1);
		}
	};
}
