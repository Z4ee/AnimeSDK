#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/BrowserWin32Helper_DEVMODE.h"
#include "unitysdk/MiHoYo/SDK/BrowserWin32Helper_POINT.h"
#include "unitysdk/MiHoYo/SDK/BrowserWin32Helper_RECT.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MiHoYo::SDK { class BrowserWin32Helper_EnumWindowsProc; }
namespace MiHoYo::SDK { class BrowserWin32Helper_MONITORINFOEX; }
namespace MiHoYo::SDK { class BrowserWin32Helper_ResolutionChangedEvent; }
namespace MiHoYo::SDK { class BrowserWin32Helper_WndProcDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Text { class StringBuilder; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_ATTACHTHREADINPUT_OFFSET UNITYSDK_OFFSET(0x1536B2E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_AUTOADJUSTWNDZORDER_OFFSET UNITYSDK_OFFSET(0x1536BCE0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1536D4D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_BRINGBROWSERFOREGROUND_OFFSET UNITYSDK_OFFSET(0x1536E180)
#define MIHOYO_SDK_BROWSERWIN32HELPER_BRINGGAMEWNDFOREGROUND_OFFSET UNITYSDK_OFFSET(0x1536E0E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CALLWINDOWPROC_OFFSET UNITYSDK_OFFSET(0x15369AA0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CLIENTTOSCREEN_OFFSET UNITYSDK_OFFSET(0x15369F00)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDICORE_OFFSET UNITYSDK_OFFSET(0x1536EA30)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDI_OFFSET UNITYSDK_OFFSET(0x1536EE00)
#define MIHOYO_SDK_BROWSERWIN32HELPER_DEFSUBCLASSPROC_OFFSET UNITYSDK_OFFSET(0x1536A380)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMDISPLAYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1536AD20)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWSPROC_OFFSET UNITYSDK_OFFSET(0x15368D50)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWS_OFFSET UNITYSDK_OFFSET(0x153699C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_FINDWINDOWEX_OFFSET UNITYSDK_OFFSET(0x15369E50)
#define MIHOYO_SDK_BROWSERWIN32HELPER_FORCETOFOREGROUND_OFFSET UNITYSDK_OFFSET(0x1536D880)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETBROWSERMANAGER_OFFSET UNITYSDK_OFFSET(0x1536D530)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x153698D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCLIENTRECT_OFFSET UNITYSDK_OFFSET(0x15369C60)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTDPI_OFFSET UNITYSDK_OFFSET(0x1536C6A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTTHREADID_OFFSET UNITYSDK_OFFSET(0x15369850)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDC_OFFSET UNITYSDK_OFFSET(0x1536A770)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDEVICECAPS_OFFSET UNITYSDK_OFFSET(0x1536A910)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDPIFORWINDOW_OFFSET UNITYSDK_OFFSET(0x1536A6B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1536B150)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETMONITORINFO_OFFSET UNITYSDK_OFFSET(0x1536A9E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x15369B90)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x1536B3B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x1536B810)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_GAMESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1536E790)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGERNAME_OFFSET UNITYSDK_OFFSET(0x1536B7C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x1536B7E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0x1536D6D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDPICHANGED_OFFSET UNITYSDK_OFFSET(0x1536D630)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1536D780)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYUP_OFFSET UNITYSDK_OFFSET(0x1536D800)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISVALIDWINDOW_OFFSET UNITYSDK_OFFSET(0x1536E4A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x1536A5F0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOW_OFFSET UNITYSDK_OFFSET(0x1536A530)
#define MIHOYO_SDK_BROWSERWIN32HELPER_KEYBD_EVENT_OFFSET UNITYSDK_OFFSET(0x1536B210)
#define MIHOYO_SDK_BROWSERWIN32HELPER_MESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x15369FD0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_MONITORFROMWINDOW_OFFSET UNITYSDK_OFFSET(0x1536AC60)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1536E720)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1536E730)
#define MIHOYO_SDK_BROWSERWIN32HELPER_POSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1536B620)
#define MIHOYO_SDK_BROWSERWIN32HELPER_QUERYOWNERHWNDIFNEED_OFFSET UNITYSDK_OFFSET(0x1536BA40)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTUREIFNEED_OFFSET UNITYSDK_OFFSET(0x1536E5C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x1536B700)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASEDC_OFFSET UNITYSDK_OFFSET(0x1536A840)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_1_OFFSET UNITYSDK_OFFSET(0x1536C440)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_OFFSET UNITYSDK_OFFSET(0x1536C1D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVEWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0x1536A2B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETACTIVEWINDOW_OFFSET UNITYSDK_OFFSET(0x1536B480)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETBROWSERWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x1536CDA0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x1536B550)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1536B090)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONG32_OFFSET UNITYSDK_OFFSET(0x15369D30)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONGPTR64_OFFSET UNITYSDK_OFFSET(0x15369DC0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x1536A0C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0x1536A1D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x1536B820)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SET_WEBVIEWMANAGERNAME_OFFSET UNITYSDK_OFFSET(0x1536B7D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SHOWWINDOW_OFFSET UNITYSDK_OFFSET(0x1536A460)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SUBCLASSOWNERWINDOW_OFFSET UNITYSDK_OFFSET(0x1536BE90)
#define MIHOYO_SDK_BROWSERWIN32HELPER_TOPMOST_OFFSET UNITYSDK_OFFSET(0x1536D2D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEBROWSERWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x1536CC40)
#define MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEHELPER_OFFSET UNITYSDK_OFFSET(0x1536CB50)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROC_OFFSET UNITYSDK_OFFSET(0x15368F90)
#define MIHOYO_SDK_BROWSERWIN32HELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1536EEF0)
#define MIHOYO_SDK_BROWSERWIN32HELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1536EEE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_TypeDefinitionIndex = 44831;

	class BrowserWin32Helper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_browserIdWebViewManagerDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0xB290);
		}
		static ::System::Reflection::MethodInfo** StaticGet_methodGetSizeOfMainGameView()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0xB298);
		}
		static ::System::Int32* StaticGet_gameScreenSizeFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0x45B0);
		}
		static ::UnityEngine::Vector2* StaticGet_currentGameSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0x45B4);
		}
		static ::System::IntPtr* StaticGet_ownerHWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0x45C0);
		}
		// static const ::System::Int32 WM_SIZE = 0x5; // 0x0
		// static const ::System::Int32 WM_MOVE = 0x3; // 0x0
		// static const ::System::Int32 WM_MOVING = 0x216; // 0x0
		// static const ::System::Int32 WM_SIZING = 0x214; // 0x0
		// static const ::System::Int32 WM_WINDOWPOSCHANGING = 0x46; // 0x0
		// static const ::System::Int32 WM_WINDOWPOSCHANGED = 0x47; // 0x0
		// static const ::System::Int32 WM_ACTIVATE = 0x6; // 0x0
		// static const ::System::Int32 WM_KILLFOCUS = 0x8; // 0x0
		// static const ::System::Int32 WM_NCDESTROY = 0x82; // 0x0
		// static const ::System::Int32 WM_CLOSE = 0x10; // 0x0
		// static const ::System::Int32 WM_DESTROY = 0x2; // 0x0
		// static const ::System::Int32 WM_DPICHANGED = 0x2E0; // 0x0
		// static const ::System::Int32 WM_KEYUP = 0x101; // 0x0
		// static const ::System::Int32 WM_KEYDOWN = 0x100; // 0x0
		// static const ::System::Int32 WM_DISPLAYCHANGE = 0x7E; // 0x0
		// static const ::System::Int32 WM_RBUTTONDOWN = 0x204; // 0x0
		// static const ::System::Int32 WM_RBUTTONUP = 0x205; // 0x0
		// static const ::System::Int32 WMSZ_LEFT = 0x1; // 0x0
		// static const ::System::Int32 WMSZ_RIGHT = 0x2; // 0x0
		// static const ::System::Int32 WMSZ_TOP = 0x3; // 0x0
		// static const ::System::Int32 SIZE_MINIMIZED = 0x1; // 0x0
		// static const ::System::Int32 WMSZ_BOTTOM = 0x6; // 0x0
		// static const ::System::Int32 GWLP_WNDPROC = 0xFFFFFFFC; // 0x0
		// static const ::System::Int32 SWP_ASYNCWINDOWPOS = 0x4000; // 0x0
		// static const ::System::Int32 SWP_NOOWNERZORDER = 0x200; // 0x0
		// static const ::System::Int32 SWP_HIDEWINDOW = 0x80; // 0x0
		// static const ::System::Int32 SWP_NOZORDER = 0x4; // 0x0
		// static const ::System::Int32 SWP_NOACTIVATE = 0x10; // 0x0
		// static const ::System::Int32 SWP_NOSIZE = 0x1; // 0x0
		// static const ::System::Int32 SWP_NOMOVE = 0x2; // 0x0
		// static const ::System::Int32 VK_ESCAPE = 0x1B; // 0x0
		// static const ::System::Int32 SW_SHOW = 0x5; // 0x0
		// static const ::System::Int32 SW_HIDE = 0x0; // 0x0
		// static const ::System::Int32 HORZRES = 0x8; // 0x0
		// static const ::System::Int32 LOGPIXELSX = 0x58; // 0x0
		// static const ::System::Int32 MONITOR_DEFAULTTONEAREST = 0x2; // 0x0
		// static const ::System::String* UNITY_WND_CLASSNAME; // 0x0
		::MiHoYo::SDK::BrowserWin32Helper_ResolutionChangedEvent* resolutionChangedEvent; // 0x18
		::System::String* _WebViewManagerName_k__BackingField; // 0x20
		::System::Int32 browserId; // 0x28
		::System::Int32 screenW; // 0x2C
		::System::Int32 screenH; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetCurrentThreadId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTTHREADID_OFFSET))();
		}

		static ::System::Int32 GetClassName(::System::IntPtr a1, ::System::Text::StringBuilder* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCLASSNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EnumThreadWindows(::System::UInt32 a1, ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc* a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWS_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CallWindowProc(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::IntPtr a4, ::System::IntPtr a5)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CALLWINDOWPROC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetWindowRect(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_RECT& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_RECT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWRECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetClientRect(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_RECT& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_RECT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCLIENTRECT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr SetWindowLong32(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONG32_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr SetWindowLongPtr64(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONGPTR64_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr FindWindowEx(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_FINDWINDOWEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 ClientToScreen(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_POINT& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_POINT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CLIENTTOSCREEN_OFFSET))(a1, a2);
		}

		static ::System::Int32 MessageBox(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_MESSAGEBOX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetWindowPos(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::UInt32 a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWPOS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 SetWindowSubclass(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate* a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWSUBCLASS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 RemoveWindowSubclass(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate* a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVEWINDOWSUBCLASS_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr DefSubclassProc(::System::IntPtr a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_DEFSUBCLASSPROC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ShowWindow(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SHOWWINDOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsWindow(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOW_OFFSET))(a1);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOWVISIBLE_OFFSET))(a1);
		}

		static ::System::UInt32 GetDpiForWindow(::System::IntPtr a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDPIFORWINDOW_OFFSET))(a1);
		}

		static ::System::IntPtr GetDC(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDC_OFFSET))(a1);
		}

		static ::System::Int32 ReleaseDC(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASEDC_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetDeviceCaps(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDEVICECAPS_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetMonitorInfo(::System::IntPtr a1, ::MiHoYo::SDK::BrowserWin32Helper_MONITORINFOEX* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_MONITORINFOEX*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETMONITORINFO_OFFSET))(a1, a2);
		}

		static ::System::IntPtr MonitorFromWindow(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_MONITORFROMWINDOW_OFFSET))(a1, a2);
		}

		static ::System::Int32 EnumDisplaySettings(::System::String* a1, ::System::Int32 a2, ::MiHoYo::SDK::BrowserWin32Helper_DEVMODE& a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::MiHoYo::SDK::BrowserWin32Helper_DEVMODE&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMDISPLAYSETTINGS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetForegroundWindow(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETFOREGROUNDWINDOW_OFFSET))(a1);
		}

		static ::System::IntPtr GetForegroundWindow()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Void keybd_event(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_KEYBD_EVENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean AttachThreadInput(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ATTACHTHREADINPUT_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr a1, ::System::UInt32& a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWTHREADPROCESSID_OFFSET))(a1, a2);
		}

		static ::System::IntPtr SetActiveWindow(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETACTIVEWINDOW_OFFSET))(a1);
		}

		static ::System::IntPtr SetFocus(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETFOCUS_OFFSET))(a1);
		}

		static ::System::IntPtr PostMessage(::System::IntPtr a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_POSTMESSAGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ReleaseCapture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTURE_OFFSET))();
		}

		::System::String* get_WebViewManagerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGERNAME_OFFSET))(this);
		}

		::System::Void set_WebViewManagerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SET_WEBVIEWMANAGERNAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::MiHoYoSDKWebViewManager* get_WebViewManager()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebViewManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGER_OFFSET))(this);
		}

		::System::Int32 get_BrowserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_BROWSERID_OFFSET))(this);
		}

		::System::Void set_BrowserId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SET_BROWSERID_OFFSET))(this, a1);
		}

		::System::Void SubClassOwnerWindow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SUBCLASSOWNERWINDOW_OFFSET))(this, a1);
		}

		static ::System::Single GetCurrentDPI(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTDPI_OFFSET))(a1);
		}

		static ::System::Boolean EnumThreadWindowsProc(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWSPROC_OFFSET))(a1, a2);
		}

		::System::Void UpdateHelper(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEHELPER_OFFSET))(this, a1);
		}

		static ::System::Void QueryOwnerHWndIfNeed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_QUERYOWNERHWNDIFNEED_OFFSET))();
		}

		static ::System::Void SetBrowserWindowPos(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETBROWSERWINDOWPOS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TopMost(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_TOPMOST_OFFSET))(a1, a2);
		}

		static ::System::Void AutoAdjustWndZOrder(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_AUTOADJUSTWNDZORDER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_AWAKE_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKWebViewManager* GetBrowserManager(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebViewManager*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETBROWSERMANAGER_OFFSET))(a1);
		}

		static ::System::Void UpdateBrowserWindowPos(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEBROWSERWINDOWPOS_OFFSET))(a1, a2);
		}

		static ::System::IntPtr wndProc(::System::IntPtr a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::IntPtr a5, ::System::IntPtr a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ForceToForeground(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_FORCETOFOREGROUND_OFFSET))(a1, a2);
		}

		static ::System::Void BringGameWndForeground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_BRINGGAMEWNDFOREGROUND_OFFSET))(a1);
		}

		static ::System::Void BringBrowserForeground(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_BRINGBROWSERFOREGROUND_OFFSET))(a1);
		}

		static ::System::Void ReleaseCaptureIfNeed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTUREIFNEED_OFFSET))();
		}

		static ::System::Void HandleDPIChanged(::System::Single a1, ::System::Int32 a2, ::MiHoYo::SDK::BrowserWin32Helper_RECT a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32, ::MiHoYo::SDK::BrowserWin32Helper_RECT))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDPICHANGED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HandleDisplayChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDISPLAYCHANGED_OFFSET))(a1);
		}

		static ::System::IntPtr HandleKeyDown(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYDOWN_OFFSET))(a1, a2);
		}

		static ::System::IntPtr HandleKeyuP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYUP_OFFSET))(a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RemoveSubclass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_OFFSET))(this);
		}

		static ::System::Void RemoveSubclass_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_1_OFFSET))(a1);
		}

		::System::Void OnNativeReady(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ONNATIVEREADY_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 get_GameScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_GAMESCREENSIZE_OFFSET))();
		}

		static ::System::Boolean IsValidWindow(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISVALIDWINDOW_OFFSET))(a1);
		}

		static ::System::Void ConvertRectFromGameToGDICore(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDICORE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Rect ConvertRectFromGameToGDI(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDI_OFFSET))(a1);
		}
	};
}
