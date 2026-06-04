#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CursorLockMode.h"

namespace RPG::GameCore { template <typename T> class SharedAsset_1; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MOUSEINPUTCONTROLLER_CLOSEFORCESHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xC1A6F50)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_FORCESHOWCURSORBYSDKUI_OFFSET UNITYSDK_OFFSET(0xC1A6D00)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_FORCESHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xC1A6A90)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC1A6560)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_GET_USECURSORMODE_OFFSET UNITYSDK_OFFSET(0xC1A75C0)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_HIDECURSOR_OFFSET UNITYSDK_OFFSET(0xC1A7250)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_OVERRIDECURSORLOCKMODEONHIDE_OFFSET UNITYSDK_OFFSET(0xC1A6F90)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_RESETCURSORLOCKMODEONHIDE_OFFSET UNITYSDK_OFFSET(0xC1A6FF0)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_SETCURSORSPRITE_OFFSET UNITYSDK_OFFSET(0xC1A6730)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_SETLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC1A7540)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER_SHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xC1A7040)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1A7710)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A6720)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER__GETMOUSEICONSHAREDASSET_OFFSET UNITYSDK_OFFSET(0xC1A74D0)
#define RPG_CLIENT_MOUSEINPUTCONTROLLER__SHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xC1A6CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MouseInputController_TypeDefinitionIndex = 57332;

	class MouseInputController : public ::System::Object
	{
	public:
		static ::RPG::Client::MouseInputController** StaticGet__Instance()
		{
			return (::RPG::Client::MouseInputController**)Il2CppClass::FromTypeDefinitionIndex(MouseInputController_TypeDefinitionIndex)->GetStaticField(0x65650);
		}
		static ::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>** StaticGet__Mouse64IconSharedAsset()
		{
			return (::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(MouseInputController_TypeDefinitionIndex)->GetStaticField(0x65658);
		}
		static ::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>** StaticGet__MouseIconSharedAsset()
		{
			return (::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(MouseInputController_TypeDefinitionIndex)->GetStaticField(0x65660);
		}
		// static const ::System::String* _MouseIconPath; // 0x0
		// static const ::System::String* _Mouse64IconPath; // 0x0
		::System::String* _MouseOperatingActionName; // 0x10
		::System::Boolean _ForceShowCursor; // 0x18
		::System::Boolean _UseCursorMode; // 0x19
		::System::Nullable_1<::UnityEngine::CursorLockMode> _OverrideCursorLockMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MouseInputController* get_Instance()
		{
			return ((::RPG::Client::MouseInputController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		::System::Void ForceShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_FORCESHOWCURSOR_OFFSET))(this);
		}

		::System::Void ForceShowCursorBySDKUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_FORCESHOWCURSORBYSDKUI_OFFSET))(this);
		}

		::System::Void CloseForceShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_CLOSEFORCESHOWCURSOR_OFFSET))(this);
		}

		::System::Void OverrideCursorLockModeOnHide(::UnityEngine::CursorLockMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CursorLockMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_OVERRIDECURSORLOCKMODEONHIDE_OFFSET))(this, a1);
		}

		::System::Void ResetCursorLockModeOnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_RESETCURSORLOCKMODEONHIDE_OFFSET))(this);
		}

		::System::Void ShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_SHOWCURSOR_OFFSET))(this);
		}

		::System::Void HideCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_HIDECURSOR_OFFSET))(this);
		}

		::System::Void SetCursorSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_SETCURSORSPRITE_OFFSET))(this);
		}

		::System::Void SetLockState(::UnityEngine::CursorLockMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CursorLockMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_SETLOCKSTATE_OFFSET))(this, a1);
		}

		::System::Void _ShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER__SHOWCURSOR_OFFSET))(this);
		}

		::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>* _GetMouseIconSharedAsset()
		{
			return ((::RPG::GameCore::SharedAsset_1<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER__GETMOUSEICONSHAREDASSET_OFFSET))(this);
		}

		::System::Boolean get_UseCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOUSEINPUTCONTROLLER_GET_USECURSORMODE_OFFSET))(this);
		}
	};
}
