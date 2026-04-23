#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x17680730)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET UNITYSDK_OFFSET(0x176822F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x17682320)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17682260)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x17681400)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET UNITYSDK_OFFSET(0x176813F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176823A0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int OverseaAccountListDropdownItemHandler_TypeDefinitionIndex = 7451;

	class OverseaAccountListDropdownItemHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* UserNamePath; // 0x0
		// static const ::System::String* loginTimePath; // 0x0
		// static const ::System::String* emailIconPath; // 0x0
		// static const ::System::String* userNameIconPath; // 0x0
		// static const ::System::String* appleIconPath; // 0x0
		// static const ::System::String* facebookIconPath; // 0x0
		// static const ::System::String* googleIconPath; // 0x0
		// static const ::System::String* twitterIconPath; // 0x0
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
		::UnityEngine::UI::Image* appleIcon; // 0x40
		::UnityEngine::UI::Image* facebookIcon; // 0x48
		::UnityEngine::UI::Image* googleIcon; // 0x50
		::UnityEngine::UI::Image* twitterIcon; // 0x58
		::UnityEngine::UI::Image* itemBackgournd; // 0x60
		::UnityEngine::UI::Image* buttonBackgournd; // 0x68
		::UnityEngine::UI::Button* deleteButton; // 0x70
		::UnityEngine::UI::Text* buttonText; // 0x78
		::UnityEngine::UI::Image* icon; // 0x80
		::System::String* type; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_START_OFFSET))(this);
		}

		::System::Void ParseAccountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_PARSEACCOUNTINFO_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::String* GetKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_GETKEY_OFFSET))(this);
		}

		::System::Void OnDeleteAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_OVERSEAACCOUNTLISTDROPDOWNITEMHANDLER_ONDELETEACCOUNT_OFFSET))(this);
		}
	};
}
