#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class OverrideControllerSwitcher_ControllerWithName; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_INIT_OFFSET UNITYSDK_OFFSET(0xAC0FEC0)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_METHOD_5_1A858E7747F55C9F_OFFSET UNITYSDK_OFFSET(0xAC101E0)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_METHOD_5_FB3DA77F663C0AAA_OFFSET UNITYSDK_OFFSET(0xAC100D0)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_ONUNLOADMODEL_OFFSET UNITYSDK_OFFSET(0xAC0FFE0)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xAC10030)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xAC10130)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC10370)

namespace RPG::Client
{
	inline static constexpr unsigned int OverrideControllerSwitcher_TypeDefinitionIndex = 63298;

	class OverrideControllerSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OverrideControllerSwitcher_ControllerWithName*>* Overrides; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::UnityEngine::Animator* Field_5_2; // 0x28
		::UnityEngine::RuntimeAnimatorController* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_INIT_OFFSET))(this);
		}

		::System::Void OnUnloadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_ONUNLOADMODEL_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void SwitchTo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_SWITCHTO_OFFSET))(this, a1);
		}

		::UnityEngine::RuntimeAnimatorController* Method_5_1A858E7747F55C9F(::System::String* a1)
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_METHOD_5_1A858E7747F55C9F_OFFSET))(this, a1);
		}

		::System::Void Method_5_FB3DA77F663C0AAA(::UnityEngine::RuntimeAnimatorController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_METHOD_5_FB3DA77F663C0AAA_OFFSET))(this, a1);
		}
	};
}
