#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x160B07E0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET UNITYSDK_OFFSET(0x160B1AD0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x160B1B00)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x160B1A40)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x160B0F80)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET UNITYSDK_OFFSET(0x160B0F70)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160B1B80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int InternalAccountListDropdownItemHandler_TypeDefinitionIndex = 7906;

	class InternalAccountListDropdownItemHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* UserNamePath; // 0x0
		// static const ::System::String* loginTimePath; // 0x0
		// static const ::System::String* accountIconPath; // 0x0
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
		::UnityEngine::GameObject* accountIcon; // 0x30
		::UnityEngine::UI::Image* itemBackgournd; // 0x38
		::UnityEngine::UI::Image* buttonBackgournd; // 0x40
		::UnityEngine::UI::Button* deleteButton; // 0x48
		::UnityEngine::UI::Text* buttonText; // 0x50
		::System::String* type; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET))(this);
		}

		::System::Void ParseAccountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::String* GetKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET))(this);
		}

		::System::Void OnDeleteAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET))(this);
		}
	};
}
