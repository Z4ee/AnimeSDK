#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WindowsHelper_EnumWindowsCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0xCC2F220)
#define RPG_CLIENT_WINDOWSHELPER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0xCC2F2B0)
#define RPG_CLIENT_WINDOWSHELPER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xCC2F340)
#define RPG_CLIENT_WINDOWSHELPER_SETWINDOWTEXTW_OFFSET UNITYSDK_OFFSET(0xCC2F190)
#define RPG_CLIENT_WINDOWSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC2F780)
#define RPG_CLIENT_WINDOWSHELPER__ENUMWINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC2F010)

namespace RPG::Client
{
	inline static constexpr unsigned int WindowsHelper_TypeDefinitionIndex = 68395;

	class WindowsHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet__MyWindowHandle()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(WindowsHelper_TypeDefinitionIndex)->GetStaticField(0x62110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean SetWindowTextW(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_SETWINDOWTEXTW_OFFSET))(a1, a2);
		}

		static ::System::Int32 EnumWindows(::RPG::Client::WindowsHelper_EnumWindowsCallBack* a1, ::System::IntPtr a2)
		{
			return ((::System::Int32(*)(::RPG::Client::WindowsHelper_EnumWindowsCallBack*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWS_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr a1, ::System::IntPtr& a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_GETWINDOWTHREADPROCESSID_OFFSET))(a1, a2);
		}

		static ::System::Void SetTitle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_SETTITLE_OFFSET))();
		}

		static ::System::Boolean _EnumWindCallback(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER__ENUMWINDCALLBACK_OFFSET))(a1, a2);
		}
	};
}
