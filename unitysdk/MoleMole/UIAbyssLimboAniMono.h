#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_E621E51D351EB960;
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABYSSLIMBOANIMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x13ED1250)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x13ED1510)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_PLAYUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x13ED1620)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETAFKUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x13ED17F0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0x13ED10D0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x13ED1700)
#define MOLEMOLE_UIABYSSLIMBOANIMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED1D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLimboAniMono_TypeDefinitionIndex = 46957;

	class UIAbyssLimboAniMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsBossRush; // 0x18
		::System::Boolean IsNest; // 0x19
		::UnityEngine::GameObject* HardNestUnlockedDisableItem; // 0x20
		::System::String* UnlockName; // 0x28
		::UnityEngine::GameObject* AfkLock; // 0x30
		::UnityEngine::GameObject* VXRoot; // 0x38
		::UnityEngine::GameObject* AfkLock2; // 0x40
		::UnityEngine::GameObject* VXRoot2; // 0x48
		::UnityEngine::UI::Extension::UILocalizationText* NameText; // 0x50
		::MoleMole::NotificationBadge* Popup; // 0x58
		::UnityEngine::Animation* Field_5_10; // 0x60
		::Class_2_E621E51D351EB960* Field_5_11; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO__CTOR_OFFSET))(this);
		}

		::System::Void SetNameText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETNAMETEXT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_AWAKE_OFFSET))(this);
		}

		::Class_2_E621E51D351EB960* get_Model()
		{
			return ((::Class_2_E621E51D351EB960*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_GET_MODEL_OFFSET))(this);
		}

		::System::Single PlayUnlockAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_PLAYUNLOCKANI_OFFSET))(this);
		}

		::System::Void SetUnLockState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETUNLOCKSTATE_OFFSET))(this, a1);
		}

		::System::Void SetAfkUnlockState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETAFKUNLOCKSTATE_OFFSET))(this, a1);
		}
	};
}
