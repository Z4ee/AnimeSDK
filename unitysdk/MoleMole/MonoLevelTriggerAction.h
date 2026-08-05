#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_235F2F68A3E18565_OFFSET UNITYSDK_OFFSET(0x13850E60)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_4BEB176192B034ED_OFFSET UNITYSDK_OFFSET(0x13851410)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_C24205EEE527C3A3_OFFSET UNITYSDK_OFFSET(0x13850FC0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x138510A0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x13851110)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13851180)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x13850DF0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x13850F50)
#define MOLEMOLE_MONOLEVELTRIGGERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x138511C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelTriggerAction_TypeDefinitionIndex = 49487;

	class MonoLevelTriggerAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::LayerMask m_LayerMask; // 0x18
		::System::String* m_WithTag; // 0x20
		::System::String* m_WithoutTag; // 0x28
		::System::Int32 m_SkipFirst; // 0x30
		::System::Boolean m_Repeating; // 0x34
		::MoleMole::MonoLevelTriggerAction_ActionSettings m_OnObjectEnter; // 0x38
		::MoleMole::MonoLevelTriggerAction_ActionSettings m_OnObjectExit; // 0x60
		::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* Field_5_4; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_235F2F68A3E18565(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_235F2F68A3E18565_OFFSET))(this, a1);
		}

		::System::Void Method_5_C24205EEE527C3A3(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_C24205EEE527C3A3_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_4BEB176192B034ED(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_METHOD_5_4BEB176192B034ED_OFFSET))(this, a1);
		}
	};
}
