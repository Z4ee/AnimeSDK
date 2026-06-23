#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_COMMONSCENETRIGGER_CREATEBOXTRIGGER_OFFSET UNITYSDK_OFFSET(0x1702FBB0)
#define MOLEMOLE_COMMONSCENETRIGGER_CREATECAPSULETRIGGER_OFFSET UNITYSDK_OFFSET(0x1702FF60)
#define MOLEMOLE_COMMONSCENETRIGGER_CREATESPHERETRIGGER_OFFSET UNITYSDK_OFFSET(0x170302D0)
#define MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1702F7D0)
#define MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1702F860)
#define MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGERENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1702F8F0)
#define MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1702F9A0)
#define MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGERENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1702FA50)
#define MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1702FB00)
#define MOLEMOLE_COMMONSCENETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17030630)

namespace MoleMole
{
	inline static constexpr unsigned int CommonSceneTrigger_TypeDefinitionIndex = 53115;

	class CommonSceneTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collider*>* Field_5_0; // 0x18
		::System::Action_1<::UnityEngine::Collider*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void RegisterTriggerEnterCallBack(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGERENTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterTriggerExitCallBack(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGEREXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterTriggerEnterCallBack(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGERENTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterTriggerExitCallBack(::System::Action_1<::UnityEngine::Collider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGEREXITCALLBACK_OFFSET))(this, a1);
		}

		static ::MoleMole::CommonSceneTrigger* CreateBoxTrigger(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::System::Int32 a8)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATEBOXTRIGGER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::MoleMole::CommonSceneTrigger* CreateCapsuleTrigger(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::System::Int32 a7)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATECAPSULETRIGGER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::MoleMole::CommonSceneTrigger* CreateSphereTrigger(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::System::Int32 a7)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATESPHERETRIGGER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
