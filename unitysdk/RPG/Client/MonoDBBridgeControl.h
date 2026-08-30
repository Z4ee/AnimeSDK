#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_E81EA3C183D62038;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONODBBRIDGECONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E41DC0)
#define RPG_CLIENT_MONODBBRIDGECONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E41EE0)
#define RPG_CLIENT_MONODBBRIDGECONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19E41E30)
#define RPG_CLIENT_MONODBBRIDGECONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E41E90)
#define RPG_CLIENT_MONODBBRIDGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E41F70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDBBridgeControl_TypeDefinitionIndex = 70692;

	class MonoDBBridgeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean StandingBy; // 0x18
		::UnityEngine::GameObject* rootPos; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* effectNode; // 0x28
		::Il2CppArray<::UnityEngine::Renderer*>* effectLoopRenderer; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* effectMovingRenderer; // 0x38
		::System::Single Timer; // 0x40
		::System::Boolean GotoBridge; // 0x44
		::System::Boolean FallbacktoStandby; // 0x45
		::System::Boolean switchOn; // 0x46
		::System::Boolean switchOff; // 0x47
		::System::Boolean fadeOut; // 0x48
		::System::Boolean isMoving; // 0x49
		::System::Boolean isMovingBack; // 0x4A
		::System::Boolean isStopping; // 0x4B
		::System::Boolean notCompletelyUseable; // 0x4C
		::System::Single fadeoutDuration; // 0x50
		::Class_2_E81EA3C183D62038* _Behavior; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGECONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGECONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGECONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGECONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}
