#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9276F349915B6D21;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOLOOPEDROTAION_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D182C0)
#define RPG_CLIENT_MONOLOOPEDROTAION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D183E0)
#define RPG_CLIENT_MONOLOOPEDROTAION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D18310)
#define RPG_CLIENT_MONOLOOPEDROTAION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D18370)
#define RPG_CLIENT_MONOLOOPEDROTAION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D18470)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLoopedRotaion_TypeDefinitionIndex = 57944;

	class MonoLoopedRotaion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::GameObject*>* rootNode; // 0x18
		::Il2CppArray<::System::Single>* rotateStart; // 0x20
		::Il2CppArray<::System::Int32>* isRandom; // 0x28
		::UnityEngine::Vector3 rotationSpeed; // 0x30
		::System::Single RoundTime; // 0x3C
		::System::Boolean isGaped; // 0x40
		::System::Single gapTime; // 0x44
		::System::Boolean editorDebug; // 0x48
		::System::Boolean usePattern; // 0x49
		::UnityEngine::AnimationCurve* rotatePattern; // 0x50
		::Class_2_9276F349915B6D21* _Behavior; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPEDROTAION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPEDROTAION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPEDROTAION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPEDROTAION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPEDROTAION_ONDESTROY_OFFSET))(this);
		}
	};
}
