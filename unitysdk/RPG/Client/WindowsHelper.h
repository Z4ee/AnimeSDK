#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WindowsHelper_EnumWindowsCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0xA785D00)
#define RPG_CLIENT_WINDOWSHELPER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0xA785D90)
#define RPG_CLIENT_WINDOWSHELPER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xA785E20)
#define RPG_CLIENT_WINDOWSHELPER_SETWINDOWTEXTW_OFFSET UNITYSDK_OFFSET(0xA785C70)
#define RPG_CLIENT_WINDOWSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA786250)
#define RPG_CLIENT_WINDOWSHELPER__ENUMWINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA785B20)

namespace RPG::Client
{
	inline static constexpr unsigned int WindowsHelper_TypeDefinitionIndex = 60045;

	class WindowsHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet__MyWindowHandle()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(WindowsHelper_TypeDefinitionIndex)->GetStaticField(0x37A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean SetWindowTextW(::System::IntPtr hwnd, ::System::String* title)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_SETWINDOWTEXTW_OFFSET))(hwnd, title);
		}

		static ::System::Int32 EnumWindows(::RPG::Client::WindowsHelper_EnumWindowsCallBack* lpEnumFunc, ::System::IntPtr lParam)
		{
			return ((::System::Int32(*)(::RPG::Client::WindowsHelper_EnumWindowsCallBack*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWS_OFFSET))(lpEnumFunc, lParam);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr hWnd, ::System::IntPtr& lpdwProcessId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_GETWINDOWTHREADPROCESSID_OFFSET))(hWnd, lpdwProcessId);
		}

		static ::System::Void SetTitle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_SETTITLE_OFFSET))();
		}

		static ::System::Boolean _EnumWindCallback(::System::IntPtr hwnd, ::System::IntPtr lParam)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER__ENUMWINDCALLBACK_OFFSET))(hwnd, lParam);
		}
	};
}
