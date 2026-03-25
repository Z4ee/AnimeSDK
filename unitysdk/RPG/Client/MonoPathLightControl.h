#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_91ADFC3DB9558F94;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOPATHLIGHTCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D26980)
#define RPG_CLIENT_MONOPATHLIGHTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D26AC0)
#define RPG_CLIENT_MONOPATHLIGHTCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D26A00)
#define RPG_CLIENT_MONOPATHLIGHTCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D26A60)
#define RPG_CLIENT_MONOPATHLIGHTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9D26B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPathLightControl_TypeDefinitionIndex = 56034;

	class MonoPathLightControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean contorlLightsAlongPath; // 0x18
		::UnityEngine::Vector3 startPosition; // 0x1C
		::UnityEngine::Vector3 destinationPosition; // 0x28
		::Il2CppArray<::UnityEngine::GameObject*>* lightRenderer; // 0x38
		::UnityEngine::GameObject* lightObject; // 0x40
		::UnityEngine::Vector2Int stoppingReference; // 0x48
		::System::Int32 lightPhase; // 0x50
		::System::Single PlayerPos; // 0x54
		::System::Boolean contorlFloatingAlongPath; // 0x58
		::UnityEngine::Vector3 targetPosition; // 0x5C
		::Il2CppArray<::UnityEngine::GameObject*>* distancingRootNode; // 0x68
		::Il2CppArray<::UnityEngine::GameObject*>* floatingRootNode; // 0x70
		::Il2CppArray<::System::Single>* floatingTimer; // 0x78
		::Il2CppArray<::UnityEngine::Vector3>* floatingStartPos; // 0x80
		::Il2CppArray<::UnityEngine::AnimationCurve*>* floatingPattern; // 0x88
		::Il2CppArray<::UnityEngine::GameObject*>* AudioSourece; // 0x90
		::System::Single floatingDuration; // 0x98
		::System::Single floatingAmount; // 0x9C
		::System::Boolean isfloatingOverrided; // 0xA0
		::System::Single floatingProgressOverride; // 0xA4
		::System::Boolean updateStartPos; // 0xA8
		::System::Boolean controlScaleByDistance; // 0xA9
		::UnityEngine::Vector3 StartPos; // 0xAC
		::UnityEngine::Vector3 DestPos; // 0xB8
		::UnityEngine::Vector3 StartScale; // 0xC4
		::UnityEngine::Vector3 DestScale; // 0xD0
		::UnityEngine::GameObject* scaledRootNode; // 0xE0
		::System::Single startDistance; // 0xE8
		::System::Boolean isEditorDebug; // 0xEC
		::UnityEngine::GameObject* ReferencePos; // 0xF0
		::System::Single DirectionalTest; // 0xF8
		::Class_2_91ADFC3DB9558F94* _Behavior; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPATHLIGHTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPATHLIGHTCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPATHLIGHTCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPATHLIGHTCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPATHLIGHTCONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}
