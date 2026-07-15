#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class DOFConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1802C660)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1802C550)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1802C810)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_SETDOF_OFFSET UNITYSDK_OFFSET(0x1802CB50)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1802C3C0)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1802CE70)
#define RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER__INITUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x1802C4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CreatePlayerEffectController_TypeDefinitionIndex = 69600;

	class CreatePlayerEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _EFFECT_PATH; // 0x0
		::RPG::Client::MonoEffect* _MonoEffect; // 0x18
		::UnityEngine::Camera* _UI3DCamera; // 0x20
		::System::Nullable_1<::System::Boolean> _IsNeedToInvoke; // 0x28
		::System::Action* _NextFrameCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayEffect(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_PLAYEFFECT_OFFSET))(this, a1);
		}

		::System::Void SetDOF(::RPG::GameCore::DOFConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DOFConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER_SETDOF_OFFSET))(this, a1);
		}

		::System::Void _InitUI3DCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEPLAYEREFFECTCONTROLLER__INITUI3DCAMERA_OFFSET))(this);
		}
	};
}
