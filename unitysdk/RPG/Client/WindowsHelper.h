#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WindowsHelper_EnumWindowsCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0xE465E20)
#define RPG_CLIENT_WINDOWSHELPER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0xE465EB0)
#define RPG_CLIENT_WINDOWSHELPER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xE465F40)
#define RPG_CLIENT_WINDOWSHELPER_SETWINDOWTEXTW_OFFSET UNITYSDK_OFFSET(0xE465D90)
#define RPG_CLIENT_WINDOWSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4663B0)
#define RPG_CLIENT_WINDOWSHELPER__ENUMWINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE465C10)

namespace RPG::Client
{
	inline static constexpr unsigned int WindowsHelper_TypeDefinitionIndex = 73243;

	class WindowsHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet__MyWindowHandle()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(WindowsHelper_TypeDefinitionIndex)->GetStaticField(0x4C920);
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
