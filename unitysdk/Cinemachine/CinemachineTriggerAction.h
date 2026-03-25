#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTriggerAction_ActionSettings.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINETRIGGERACTION_FILTER_OFFSET UNITYSDK_OFFSET(0x119D2650)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x119D26E0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x119D2CC0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x119D3260)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x119D2EE0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x119D3370)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x119D3010)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x119D3400)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x119D30C0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x119D2D40)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x119D31D0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x119D2E50)
#define CINEMACHINE_CINEMACHINETRIGGERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x119D3410)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_TypeDefinitionIndex = 30899;

	class CinemachineTriggerAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::LayerMask m_LayerMask; // 0x18
		::System::String* m_WithTag; // 0x20
		::System::String* m_WithoutTag; // 0x28
		::System::Int32 m_SkipFirst; // 0x30
		::System::Boolean m_Repeating; // 0x34
		::Cinemachine::CinemachineTriggerAction_ActionSettings m_OnObjectEnter; // 0x38
		::Cinemachine::CinemachineTriggerAction_ActionSettings m_OnObjectExit; // 0x60
		::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* m_ActiveTriggerObjects; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean Filter(::UnityEngine::GameObject* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_FILTER_OFFSET))(this, other);
		}

		::System::Void InternalDoTriggerEnter(::UnityEngine::GameObject* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void InternalDoTriggerExit(::UnityEngine::GameObject* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER_OFFSET))(this, other);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT_OFFSET))(this, other);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER2D_OFFSET))(this, other);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT2D_OFFSET))(this, other);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONENABLE_OFFSET))(this);
		}
	};
}
