#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_057C3FE8F02A318D;
namespace RPG::Client { class GameObjectAudio; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOROTATINGBLOCKCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8616A0)
#define RPG_CLIENT_MONOROTATINGBLOCKCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8617D0)
#define RPG_CLIENT_MONOROTATINGBLOCKCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD861710)
#define RPG_CLIENT_MONOROTATINGBLOCKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD861770)
#define RPG_CLIENT_MONOROTATINGBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD861860)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRotatingBlockControl_TypeDefinitionIndex = 70707;

	class MonoRotatingBlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isEditorDebug; // 0x18
		::UnityEngine::GameObject* ReferencePos; // 0x20
		::UnityEngine::GameObject* RootBase; // 0x28
		::Il2CppArray<::UnityEngine::GameObject*>* rootNode; // 0x30
		::Il2CppArray<::System::Single>* rootSpeed; // 0x38
		::Il2CppArray<::UnityEngine::AnimationCurve*>* rootPattern; // 0x40
		::UnityEngine::Vector2 startRandomRange; // 0x48
		::System::Single startRotationGap; // 0x50
		::UnityEngine::Vector2 rotaionRange; // 0x54
		::System::Single recoveryDuration; // 0x5C
		::System::Single recoveryDistance; // 0x60
		::System::Single recoverryStartDistance; // 0x64
		::Il2CppArray<::RPG::Client::GameObjectAudio*>* rootSFX; // 0x68
		::Il2CppArray<::UnityEngine::GameObject*>* rootSFXObj; // 0x70
		::Il2CppArray<::UnityEngine::Renderer*>* floorRenderer; // 0x78
		::System::Int32 floorID; // 0x80
		::Il2CppArray<::UnityEngine::Renderer*>* wallRenderer; // 0x88
		::System::Int32 wallID; // 0x90
		::System::Single timePhase; // 0x94
		::System::Single RoundTime; // 0x98
		::System::Boolean isReversed; // 0x9C
		::Class_2_057C3FE8F02A318D* _Behavior; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATINGBLOCKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATINGBLOCKCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATINGBLOCKCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATINGBLOCKCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATINGBLOCKCONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}
