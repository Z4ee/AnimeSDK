#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_AWAKE_OFFSET UNITYSDK_OFFSET(0xC5275B0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_AUDIOSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0xC527560)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_INFOPANELANCHOR_OFFSET UNITYSDK_OFFSET(0xC527540)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_ISJUMPING_OFFSET UNITYSDK_OFFSET(0xC5273D0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_TALKPANELANCHOR_OFFSET UNITYSDK_OFFSET(0xC527550)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET__CAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xC527420)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_REACTDITHERHIDE_OFFSET UNITYSDK_OFFSET(0xC527F40)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_RELOAD_OFFSET UNITYSDK_OFFSET(0xC527CB0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xC527D10)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xC527DD0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xC527D60)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STARTDITHERSHOW_OFFSET UNITYSDK_OFFSET(0xC527E30)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STARTMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0xC528050)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STOPMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0xC5280B0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_TRYTRIGGERJUMPANIMATION_OFFSET UNITYSDK_OFFSET(0xC528110)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC527710)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC528200)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE__PROJECTPIVOTPOSITION_OFFSET UNITYSDK_OFFSET(0xC527A10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraNewMembersModelInstance_TypeDefinitionIndex = 73007;

	class ChimeraNewMembersModelInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraGameObjectBuilder* _Builder; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* _DitherCtrl; // 0x20
		::UnityEngine::Animator* _Animator; // 0x28
		::System::String* _AnimParamMove; // 0x30
		::System::String* _AnimParamJump; // 0x38
		::UnityEngine::Transform* _InfoPanelProjPivot; // 0x40
		::UnityEngine::Vector3 _InfoPanelProjOffset; // 0x48
		::UnityEngine::Transform* _TalkPanelProjPivot; // 0x58
		::UnityEngine::Vector3 _TalkPanelProjOffset; // 0x60
		::UnityEngine::Collider* _Collider; // 0x70
		::System::Single _LastTriggerBlockTime; // 0x78
		::UnityEngine::Vector3 _OriginalInfoPanelProjPivotLocalPosition; // 0x7C
		::UnityEngine::Vector3 _OriginalTalkPanelProjPivotLocalPosition; // 0x88
		::UnityEngine::Transform* _CameraTransform; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsJumping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_ISJUMPING_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__CameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET__CAMERAPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* get_InfoPanelAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_INFOPANELANCHOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TalkPanelAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_TALKPANELANCHOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AudioSourceObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_GET_AUDIOSOURCEOBJECT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_UPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 _ProjectPivotPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE__PROJECTPIVOTPOSITION_OFFSET))(a1, a2, a3);
		}

		::System::Void Reload(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_RELOAD_OFFSET))(this, a1);
		}

		::System::Void SetCameraTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETCAMERATRANSFORM_OFFSET))(this, a1);
		}

		::System::Void SetVisibility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETVISIBILITY_OFFSET))(this, a1);
		}

		::System::Void SetColliderEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_SETCOLLIDERENABLED_OFFSET))(this, a1);
		}

		::System::Void StartDitherShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STARTDITHERSHOW_OFFSET))(this, a1);
		}

		::System::Void ReactDitherHide(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_REACTDITHERHIDE_OFFSET))(this, a1);
		}

		::System::Void StartMoveAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STARTMOVEANIMATION_OFFSET))(this);
		}

		::System::Void StopMoveAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_STOPMOVEANIMATION_OFFSET))(this);
		}

		::System::Void TryTriggerJumpAnimation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSMODELINSTANCE_TRYTRIGGERJUMPANIMATION_OFFSET))(this, a1);
		}
	};
}
