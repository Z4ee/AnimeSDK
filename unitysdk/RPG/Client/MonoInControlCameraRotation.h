#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoInControlEvent; }
namespace RPG::Client { class UIController; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC11A580)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_GET_OFFSET UNITYSDK_OFFSET(0xC11A220)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC11A420)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC11A310)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC11A470)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xC11A5D0)
#define RPG_CLIENT_MONOINCONTROLCAMERAROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC11AE50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlCameraRotation_TypeDefinitionIndex = 57344;

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
