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

#define RPG_CLIENT_UIFOLLOW3DTARGET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA68FAF0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_CLEARFOLLOWDATA_OFFSET UNITYSDK_OFFSET(0xA68F0F0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xA690500)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET_OFFSET UNITYSDK_OFFSET(0xA68ED00)
#define RPG_CLIENT_UIFOLLOW3DTARGET_GET__CAMERA_OFFSET UNITYSDK_OFFSET(0xA68EC80)
#define RPG_CLIENT_UIFOLLOW3DTARGET_INIT_OFFSET UNITYSDK_OFFSET(0xA68EE70)
#define RPG_CLIENT_UIFOLLOW3DTARGET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA68F440)
#define RPG_CLIENT_UIFOLLOW3DTARGET_ONLYAPPLYCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0xA68F170)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SAFEUPDATE_OFFSET UNITYSDK_OFFSET(0xA68F3E0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETOVERRIDECAMERA_OFFSET UNITYSDK_OFFSET(0xA68EE20)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETPOSTPROCESSHANDLER_OFFSET UNITYSDK_OFFSET(0xA68FA50)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SETPRETICKHANDLER_OFFSET UNITYSDK_OFFSET(0xA68FAA0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xA677920)
#define RPG_CLIENT_UIFOLLOW3DTARGET_START_OFFSET UNITYSDK_OFFSET(0xA68FB60)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6905C0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CLAMPPOS_OFFSET UNITYSDK_OFFSET(0xA68FE10)
#define RPG_CLIENT_UIFOLLOW3DTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA690560)
#define RPG_CLIENT_UIFOLLOW3DTARGET__GETTARGETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xA68F1E0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__INITUICONFIG_OFFSET UNITYSDK_OFFSET(0xA68F040)
#define RPG_CLIENT_UIFOLLOW3DTARGET__ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET UNITYSDK_OFFSET(0xA68FD20)
#define RPG_CLIENT_UIFOLLOW3DTARGET__ONUIREDOADAPT_OFFSET UNITYSDK_OFFSET(0xA68FBB0)
#define RPG_CLIENT_UIFOLLOW3DTARGET__POSTPROCESSPOSITION_OFFSET UNITYSDK_OFFSET(0xA68FF50)
#define RPG_CLIENT_UIFOLLOW3DTARGET__SHOULDTICKFOLLOW_OFFSET UNITYSDK_OFFSET(0xA68FC00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollow3DTarget_TypeDefinitionIndex = 56457;

	class UIFollow3DTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector3* StaticGet__veryFarPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x10B20);
		}
		static ::System::Boolean* StaticGet__CAMERA_DIS_INIT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x10B2C);
		}
		static ::System::Boolean* StaticGet__CHECK_VISIBILITY()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIFollow3DTarget_TypeDefinitionIndex)->GetStaticField(0x10B2D);
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

		static ::RPG::Client::UIFollow3DTarget* Get(::UnityEngine::Transform* target)
		{
			return ((::RPG::Client::UIFollow3DTarget*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_GET_OFFSET))(target);
		}

		::System::Void SetOverrideCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETOVERRIDECAMERA_OFFSET))(this, camera);
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

		::System::Void SetPostProcessHandler(::RPG::Client::UIFollow3DTarget_PostProcessDelegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget_PostProcessDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETPOSTPROCESSHANDLER_OFFSET))(this, handler);
		}

		::System::Void SetPreTickHandler(::System::Action_1<::RPG::Client::UIFollow3DTarget*>* preTickHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::UIFollow3DTarget*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SETPRETICKHANDLER_OFFSET))(this, preTickHandler);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_START_OFFSET))(this);
		}

		::System::Void _OnUIRedoAdapt(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__ONUIREDOADAPT_OFFSET))(this, arg);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetTargetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__GETTARGETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean _IsWorldPosClampedInCameraZ(::UnityEngine::Camera* targetCamera, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET))(this, targetCamera, worldPos);
		}

		::UnityEngine::Vector3 _PostProcessPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__POSTPROCESSPOSITION_OFFSET))(this, position);
		}

		static ::System::Void _InitUIConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__INITUICONFIG_OFFSET))();
		}

		::System::Boolean _ShouldTickFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__SHOULDTICKFOLLOW_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ClampPos(::UnityEngine::Vector3 screenPos, ::System::Boolean isInCamera)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET__CLAMPPOS_OFFSET))(this, screenPos, isInCamera);
		}

		::UnityEngine::GameObject* get_FollowTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_SET_FOLLOWTARGET_OFFSET))(this, value);
		}
	};
}
