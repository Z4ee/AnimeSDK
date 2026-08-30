#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15CD6640)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET UNITYSDK_OFFSET(0x15CD81D0)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x15CD8260)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15CD8150)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x15CD6F20)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET UNITYSDK_OFFSET(0x15CD6F10)
#define MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD8320)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountListDropdownItemHandler_TypeDefinitionIndex = 9235;

	class AccountListDropdownItemHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* UserNamePath; // 0x0
		// static const ::System::String* loginTimePath; // 0x0
		// static const ::System::String* emailIconPath; // 0x0
		// static const ::System::String* userNameIconPath; // 0x0
		// static const ::System::String* itemTextPath; // 0x0
		// static const ::System::String* splitVertical; // 0x0
		// static const ::System::String* MidContent; // 0x0
		// static const ::System::String* deleteButtonPath; // 0x0
		// static const ::System::String* lastItemButtonTextPath; // 0x0
		// static const ::System::String* itemBackgroundPath; // 0x0
		// static const ::System::String* buttonBackgroundPath; // 0x0
		::UnityEngine::UI::Text* itemText; // 0x18
		::UnityEngine::UI::Text* showText; // 0x20
		::UnityEngine::UI::Text* loginTimeText; // 0x28
		::UnityEngine::UI::Image* emailIcon; // 0x30
		::UnityEngine::UI::Image* userNameIcon; // 0x38
		::UnityEngine::UI::Image* itemBackgournd; // 0x40
		::UnityEngine::UI::Image* buttonBackgournd; // 0x48
		::UnityEngine::UI::Button* deleteButton; // 0x50
		::UnityEngine::UI::Text* buttonText; // 0x58
		::System::String* type; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET))(this);
		}

		::System::Void ParseAccountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::String* GetKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET))(this);
		}

		::System::Void OnDeleteAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET))(this);
		}
	};
}
