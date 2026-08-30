#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class SealPoolManager_Class_1_5268A629A666D630; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_CLEARALLSEALS_OFFSET UNITYSDK_OFFSET(0x1AF71850)
#define RPG_CLIENT_SEALPOOLMANAGER_METHOD_5_1FD1221B75305432_OFFSET UNITYSDK_OFFSET(0x1AF71280)
#define RPG_CLIENT_SEALPOOLMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AF72150)
#define RPG_CLIENT_SEALPOOLMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1AF71110)
#define RPG_CLIENT_SEALPOOLMANAGER_TRYADDSEAL_OFFSET UNITYSDK_OFFSET(0x1AF71540)
#define RPG_CLIENT_SEALPOOLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AF719A0)
#define RPG_CLIENT_SEALPOOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF72360)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager_TypeDefinitionIndex = 60523;

	class SealPoolManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* SealsRig; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SealInitPos; // 0x20
		::UnityEngine::Vector2 Offset; // 0x28
		::System::Single Force; // 0x30
		::System::Single Torque; // 0x34
		::System::Collections::Generic::List_1<::RPG::Client::SealPoolManager_Class_1_5268A629A666D630*>* FNPACBOBNJO; // 0x38
		::System::Boolean _AutoInit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_START_OFFSET))(this);
		}

		::System::Boolean TryAddSeal(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_TRYADDSEAL_OFFSET))(this, a1);
		}

		::System::Void ClearAllSeals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_CLEARALLSEALS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean Method_5_1FD1221B75305432(::UnityEngine::Rigidbody* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rigidbody*, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_METHOD_5_1FD1221B75305432_OFFSET))(this, a1, a2, a3);
		}
	};
}
