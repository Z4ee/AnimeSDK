#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoInControlEvent; }
namespace RPG::Client { class UIController; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x18C4BCC0)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_GET_OFFSET UNITYSDK_OFFSET(0x18C4B960)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C4BB60)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C4BA50)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_SPAWNED_OFFSET UNITYSDK_OFFSET(0x18C4BBB0)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C4BD10)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4C560)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlCameraRotation_TypeDefinitionIndex = 58604;

	class MonoInControlCameraRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _CameraRotationFPS; // 0x18
		::RPG::Client::MonoInControlEvent* _MonoInControlEvent; // 0x20
		::RPG::Client::UIController* _Controller; // 0x28
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoInControlCameraRotation* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::MonoInControlCameraRotation*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_GET_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_DESPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCAMERAROTATION_UPDATE_OFFSET))(this);
		}
	};
}
