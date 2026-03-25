#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_12B6F33C27E05B35;
namespace RPG::Client { class MonoDBBridgeControl; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONODBBRIDGEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C29920)
#define RPG_CLIENT_MONODBBRIDGEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9C29A60)
#define RPG_CLIENT_MONODBBRIDGEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9C29990)
#define RPG_CLIENT_MONODBBRIDGEMANAGER_UPDATEREFERENCEPOS_OFFSET UNITYSDK_OFFSET(0x9C29750)
#define RPG_CLIENT_MONODBBRIDGEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C299F0)
#define RPG_CLIENT_MONODBBRIDGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C29B20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDBBridgeManager_TypeDefinitionIndex = 57931;

	class MonoDBBridgeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean StandingBy; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* Reference; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* Bridge; // 0x28
		::Il2CppArray<::RPG::Client::MonoDBBridgeControl*>* BridgeController; // 0x30
		::Il2CppArray<::System::Int32>* BridgeType; // 0x38
		::System::Boolean Reversed; // 0x40
		::System::Boolean switchOn; // 0x41
		::System::Boolean switchOff; // 0x42
		::System::Boolean isMoving; // 0x43
		::System::Boolean isMovingBack; // 0x44
		::System::Boolean isLooping; // 0x45
		::System::Boolean isStopping; // 0x46
		::System::Boolean notCompletelyUseable; // 0x47
		::UnityEngine::GameObject* GatheringPos; // 0x48
		::System::Boolean GotoBridge; // 0x50
		::System::Boolean FallbacktoStandby; // 0x51
		::System::Single bridgeProgress; // 0x54
		::Class_2_12B6F33C27E05B35* _Behavior; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateReferencePos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER_UPDATEREFERENCEPOS_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODBBRIDGEMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
