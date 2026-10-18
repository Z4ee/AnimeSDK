#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_FOCUSORCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xD973950)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_1475CF5B853FA99F_OFFSET UNITYSDK_OFFSET(0xD973AC0)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_6B5712A69C8DDBA9_OFFSET UNITYSDK_OFFSET(0xD973D00)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xD9739F0)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD973870)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD973790)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT__CTOR_OFFSET UNITYSDK_OFFSET(0xD973E20)

namespace RPG::Client
{
	inline static constexpr unsigned int NavigationEntryShortcut_TypeDefinitionIndex = 72617;

	class NavigationEntryShortcut : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::UINavigation::UINavigationArea* _TabBarArea; // 0x18
		::RPG::Client::AnimatorButton* _ShortcutButton; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void FocusOrClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_FOCUSORCLICKBUTTON_OFFSET))(this);
		}

		::System::Boolean Method_5_ABFE6A357B89C69A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_ABFE6A357B89C69A_OFFSET))(this);
		}

		::System::Int32 Method_5_1475CF5B853FA99F(::UnityEngine::GameObject*& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_1475CF5B853FA99F_OFFSET))(this, a1);
		}

		::System::Void Method_5_6B5712A69C8DDBA9(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_METHOD_5_6B5712A69C8DDBA9_OFFSET))(this, a1);
		}
	};
}
