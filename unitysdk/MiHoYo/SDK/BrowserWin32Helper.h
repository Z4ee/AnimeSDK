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

#define MIHOYO_SDK_BROWSERWIN32HELPER_ATTACHTHREADINPUT_OFFSET UNITYSDK_OFFSET(0x8CEA370)
#define MIHOYO_SDK_BROWSERWIN32HELPER_AUTOADJUSTWNDZORDER_OFFSET UNITYSDK_OFFSET(0x8CEAD40)
#define MIHOYO_SDK_BROWSERWIN32HELPER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8CEC590)
#define MIHOYO_SDK_BROWSERWIN32HELPER_BRINGBROWSERFOREGROUND_OFFSET UNITYSDK_OFFSET(0x8CED270)
#define MIHOYO_SDK_BROWSERWIN32HELPER_BRINGGAMEWNDFOREGROUND_OFFSET UNITYSDK_OFFSET(0x8CED1D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CALLWINDOWPROC_OFFSET UNITYSDK_OFFSET(0x8CE8B20)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CLIENTTOSCREEN_OFFSET UNITYSDK_OFFSET(0x8CE8F80)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDICORE_OFFSET UNITYSDK_OFFSET(0x8CEDB50)
#define MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDI_OFFSET UNITYSDK_OFFSET(0x8CEDF20)
#define MIHOYO_SDK_BROWSERWIN32HELPER_DEFSUBCLASSPROC_OFFSET UNITYSDK_OFFSET(0x8CE9400)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMDISPLAYSETTINGS_OFFSET UNITYSDK_OFFSET(0x8CE9DB0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWSPROC_OFFSET UNITYSDK_OFFSET(0x8CE7DE0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWS_OFFSET UNITYSDK_OFFSET(0x8CE8A40)
#define MIHOYO_SDK_BROWSERWIN32HELPER_FINDWINDOWEX_OFFSET UNITYSDK_OFFSET(0x8CE8ED0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_FORCETOFOREGROUND_OFFSET UNITYSDK_OFFSET(0x8CEC970)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETBROWSERMANAGER_OFFSET UNITYSDK_OFFSET(0x8CEC5F0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x8CE8950)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCLIENTRECT_OFFSET UNITYSDK_OFFSET(0x8CE8CE0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTDPI_OFFSET UNITYSDK_OFFSET(0x8CEB730)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTTHREADID_OFFSET UNITYSDK_OFFSET(0x8CE88D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDC_OFFSET UNITYSDK_OFFSET(0x8CE97F0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDEVICECAPS_OFFSET UNITYSDK_OFFSET(0x8CE9990)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETDPIFORWINDOW_OFFSET UNITYSDK_OFFSET(0x8CE9730)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x8CEA1E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETMONITORINFO_OFFSET UNITYSDK_OFFSET(0x8CE9A60)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x8CE8C10)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x8CEA440)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x8CEA8A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_GAMESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x8CED880)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGERNAME_OFFSET UNITYSDK_OFFSET(0x8CEA850)
#define MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x8CEA870)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0x8CEC7C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDPICHANGED_OFFSET UNITYSDK_OFFSET(0x8CEC720)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYDOWN_OFFSET UNITYSDK_OFFSET(0x8CEC870)
#define MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYUP_OFFSET UNITYSDK_OFFSET(0x8CEC8F0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISVALIDWINDOW_OFFSET UNITYSDK_OFFSET(0x8CED590)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x8CE9670)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOW_OFFSET UNITYSDK_OFFSET(0x8CE95B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_KEYBD_EVENT_OFFSET UNITYSDK_OFFSET(0x8CEA2A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_MESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x8CE9050)
#define MIHOYO_SDK_BROWSERWIN32HELPER_MONITORFROMWINDOW_OFFSET UNITYSDK_OFFSET(0x8CE9CF0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8CED810)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x8CED820)
#define MIHOYO_SDK_BROWSERWIN32HELPER_POSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8CEA6B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_QUERYOWNERHWNDIFNEED_OFFSET UNITYSDK_OFFSET(0x8CEAAC0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTUREIFNEED_OFFSET UNITYSDK_OFFSET(0x8CED6B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x8CEA790)
#define MIHOYO_SDK_BROWSERWIN32HELPER_RELEASEDC_OFFSET UNITYSDK_OFFSET(0x8CE98C0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_1_OFFSET UNITYSDK_OFFSET(0x8CEB4A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_OFFSET UNITYSDK_OFFSET(0x8CEB220)
#define MIHOYO_SDK_BROWSERWIN32HELPER_REMOVEWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0x8CE9330)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETACTIVEWINDOW_OFFSET UNITYSDK_OFFSET(0x8CEA510)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETBROWSERWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x8CEBE60)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x8CEA5E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x8CEA120)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONG32_OFFSET UNITYSDK_OFFSET(0x8CE8DB0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONGPTR64_OFFSET UNITYSDK_OFFSET(0x8CE8E40)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x8CE9140)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0x8CE9250)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x8CEA8B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SET_WEBVIEWMANAGERNAME_OFFSET UNITYSDK_OFFSET(0x8CEA860)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SHOWWINDOW_OFFSET UNITYSDK_OFFSET(0x8CE94E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_SUBCLASSOWNERWINDOW_OFFSET UNITYSDK_OFFSET(0x8CEAEF0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_TOPMOST_OFFSET UNITYSDK_OFFSET(0x8CEC390)
#define MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEBROWSERWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x8CEBCE0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEHELPER_OFFSET UNITYSDK_OFFSET(0x8CEBBF0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROC_OFFSET UNITYSDK_OFFSET(0x8CE8020)
#define MIHOYO_SDK_BROWSERWIN32HELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CEE010)
#define MIHOYO_SDK_BROWSERWIN32HELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CEE000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_TypeDefinitionIndex = 43166;

	class BrowserWin32Helper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_methodGetSizeOfMainGameView()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0x46920);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_browserIdWebViewManagerDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0x46928);
		}
		static ::System::IntPtr* StaticGet_ownerHWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0xF600);
		}
		static ::UnityEngine::Vector2* StaticGet_currentGameSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0xF608);
		}
		static ::System::Int32* StaticGet_gameScreenSizeFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper_TypeDefinitionIndex)->GetStaticField(0xF610);
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

		static ::System::Int32 GetClassName(::System::IntPtr hWnd, ::System::Text::StringBuilder* lpString, ::System::Int32 nMaxCount)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCLASSNAME_OFFSET))(hWnd, lpString, nMaxCount);
		}

		static ::System::Boolean EnumThreadWindows(::System::UInt32 dwThreadId, ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc* lpEnumFunc, ::System::IntPtr lParam)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWS_OFFSET))(dwThreadId, lpEnumFunc, lParam);
		}

		static ::System::IntPtr CallWindowProc(::System::IntPtr lpPrevWndFunc, ::System::IntPtr hWnd, ::System::UInt32 Msg, ::System::IntPtr wParam, ::System::IntPtr lParam)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CALLWINDOWPROC_OFFSET))(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
		}

		static ::System::Boolean GetWindowRect(::System::IntPtr hwnd, ::MiHoYo::SDK::BrowserWin32Helper_RECT& lpRect)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_RECT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWRECT_OFFSET))(hwnd, lpRect);
		}

		static ::System::Boolean GetClientRect(::System::IntPtr hWnd, ::MiHoYo::SDK::BrowserWin32Helper_RECT& lpRect)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_RECT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCLIENTRECT_OFFSET))(hWnd, lpRect);
		}

		static ::System::IntPtr SetWindowLong32(::System::IntPtr hWnd, ::System::Int32 nIndex, ::System::IntPtr dwNewLong)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONG32_OFFSET))(hWnd, nIndex, dwNewLong);
		}

		static ::System::IntPtr SetWindowLongPtr64(::System::IntPtr hWnd, ::System::Int32 nIndex, ::System::IntPtr dwNewLong)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWLONGPTR64_OFFSET))(hWnd, nIndex, dwNewLong);
		}

		static ::System::IntPtr FindWindowEx(::System::IntPtr hParentWnd, ::System::IntPtr hChildWndAfter, ::System::String* lpszClass, ::System::String* lpszWindow)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_FINDWINDOWEX_OFFSET))(hParentWnd, hChildWndAfter, lpszClass, lpszWindow);
		}

		static ::System::Int32 ClientToScreen(::System::IntPtr hWnd, ::MiHoYo::SDK::BrowserWin32Helper_POINT& lpPt)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_POINT&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CLIENTTOSCREEN_OFFSET))(hWnd, lpPt);
		}

		static ::System::Int32 MessageBox(::System::IntPtr hWnd, ::System::String* lpText, ::System::String* lpCaption, ::System::UInt32 uType)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_MESSAGEBOX_OFFSET))(hWnd, lpText, lpCaption, uType);
		}

		static ::System::Boolean SetWindowPos(::System::IntPtr hWnd, ::System::IntPtr hWndInsertAfter, ::System::Int32 x, ::System::Int32 y, ::System::Int32 cx, ::System::Int32 cy, ::System::UInt32 uFlags)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWPOS_OFFSET))(hWnd, hWndInsertAfter, x, y, cx, cy, uFlags);
		}

		static ::System::Int32 SetWindowSubclass(::System::IntPtr hWnd, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate* pfnSubclass, ::System::IntPtr uIdSubclass, ::System::IntPtr dwRefData)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETWINDOWSUBCLASS_OFFSET))(hWnd, pfnSubclass, uIdSubclass, dwRefData);
		}

		static ::System::Int32 RemoveWindowSubclass(::System::IntPtr hWnd, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate* pfnSubclass, ::System::IntPtr uIdSubclass)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVEWINDOWSUBCLASS_OFFSET))(hWnd, pfnSubclass, uIdSubclass);
		}

		static ::System::IntPtr DefSubclassProc(::System::IntPtr hWnd, ::System::UInt32 Msg, ::System::IntPtr wParam, ::System::IntPtr lParam)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_DEFSUBCLASSPROC_OFFSET))(hWnd, Msg, wParam, lParam);
		}

		static ::System::Boolean ShowWindow(::System::IntPtr hWnd, ::System::Int32 nCmdShow)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SHOWWINDOW_OFFSET))(hWnd, nCmdShow);
		}

		static ::System::Boolean IsWindow(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOW_OFFSET))(hWnd);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISWINDOWVISIBLE_OFFSET))(hWnd);
		}

		static ::System::UInt32 GetDpiForWindow(::System::IntPtr hWnd)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDPIFORWINDOW_OFFSET))(hWnd);
		}

		static ::System::IntPtr GetDC(::System::IntPtr hWnd)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDC_OFFSET))(hWnd);
		}

		static ::System::Int32 ReleaseDC(::System::IntPtr hWnd, ::System::IntPtr hDC)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASEDC_OFFSET))(hWnd, hDC);
		}

		static ::System::Int32 GetDeviceCaps(::System::IntPtr hDC, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETDEVICECAPS_OFFSET))(hDC, index);
		}

		static ::System::Boolean GetMonitorInfo(::System::IntPtr monitorHandle, ::MiHoYo::SDK::BrowserWin32Helper_MONITORINFOEX* mInfo)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::BrowserWin32Helper_MONITORINFOEX*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETMONITORINFO_OFFSET))(monitorHandle, mInfo);
		}

		static ::System::IntPtr MonitorFromWindow(::System::IntPtr hwnd, ::System::UInt32 dwFlags)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_MONITORFROMWINDOW_OFFSET))(hwnd, dwFlags);
		}

		static ::System::Int32 EnumDisplaySettings(::System::String* lpszDeviceName, ::System::Int32 iModeNum, ::MiHoYo::SDK::BrowserWin32Helper_DEVMODE& lpDevMode)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::MiHoYo::SDK::BrowserWin32Helper_DEVMODE&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMDISPLAYSETTINGS_OFFSET))(lpszDeviceName, iModeNum, lpDevMode);
		}

		static ::System::Boolean SetForegroundWindow(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETFOREGROUNDWINDOW_OFFSET))(hWnd);
		}

		static ::System::IntPtr GetForegroundWindow()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Void keybd_event(::System::Int32 bVk, ::System::Int32 bScan, ::System::Int32 dwFlags, ::System::IntPtr dwExtraInfo)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_KEYBD_EVENT_OFFSET))(bVk, bScan, dwFlags, dwExtraInfo);
		}

		static ::System::Boolean AttachThreadInput(::System::UInt32 idAttach, ::System::UInt32 idAttachTo, ::System::Boolean fAttach)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ATTACHTHREADINPUT_OFFSET))(idAttach, idAttachTo, fAttach);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr hWnd, ::System::UInt32& lpdwProcessId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETWINDOWTHREADPROCESSID_OFFSET))(hWnd, lpdwProcessId);
		}

		static ::System::IntPtr SetActiveWindow(::System::IntPtr hWnd)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETACTIVEWINDOW_OFFSET))(hWnd);
		}

		static ::System::IntPtr SetFocus(::System::IntPtr hWnd)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETFOCUS_OFFSET))(hWnd);
		}

		static ::System::IntPtr PostMessage(::System::IntPtr hWnd, ::System::UInt32 msg, ::System::IntPtr wParam, ::System::IntPtr lParam)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_POSTMESSAGE_OFFSET))(hWnd, msg, wParam, lParam);
		}

		static ::System::Boolean ReleaseCapture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTURE_OFFSET))();
		}

		::System::String* get_WebViewManagerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGERNAME_OFFSET))(this);
		}

		::System::Void set_WebViewManagerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SET_WEBVIEWMANAGERNAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::MiHoYoSDKWebViewManager* get_WebViewManager()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebViewManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_WEBVIEWMANAGER_OFFSET))(this);
		}

		::System::Int32 get_BrowserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_BROWSERID_OFFSET))(this);
		}

		::System::Void set_BrowserId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SET_BROWSERID_OFFSET))(this, value);
		}

		::System::Void SubClassOwnerWindow(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SUBCLASSOWNERWINDOW_OFFSET))(this, browserId);
		}

		static ::System::Single GetCurrentDPI(::System::IntPtr hWnd)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETCURRENTDPI_OFFSET))(hWnd);
		}

		static ::System::Boolean EnumThreadWindowsProc(::System::IntPtr hWnd, ::System::IntPtr lParam)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMTHREADWINDOWSPROC_OFFSET))(hWnd, lParam);
		}

		::System::Void UpdateHelper(::System::Boolean affectWnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEHELPER_OFFSET))(this, affectWnd);
		}

		static ::System::Void QueryOwnerHWndIfNeed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_QUERYOWNERHWNDIFNEED_OFFSET))();
		}

		static ::System::Void SetBrowserWindowPos(::ZenFulcrum::EmbeddedBrowser::Browser* browser, ::System::Int32 clientX, ::System::Int32 clientY, ::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_SETBROWSERWINDOWPOS_OFFSET))(browser, clientX, clientY, w, h);
		}

		static ::System::Void TopMost(::System::IntPtr hWnd, ::System::Boolean topMost)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_TOPMOST_OFFSET))(hWnd, topMost);
		}

		static ::System::Void AutoAdjustWndZOrder(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_AUTOADJUSTWNDZORDER_OFFSET))(browser);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_AWAKE_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKWebViewManager* GetBrowserManager(::System::Int32 browserId)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebViewManager*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GETBROWSERMANAGER_OFFSET))(browserId);
		}

		static ::System::Void UpdateBrowserWindowPos(::System::Int32 browserId, ::System::Boolean recalculateSize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_UPDATEBROWSERWINDOWPOS_OFFSET))(browserId, recalculateSize);
		}

		static ::System::IntPtr wndProc(::System::IntPtr hWnd, ::System::UInt32 msg, ::System::IntPtr wParam, ::System::IntPtr lParam, ::System::IntPtr uIdSubclass, ::System::IntPtr dwRefData)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROC_OFFSET))(hWnd, msg, wParam, lParam, uIdSubclass, dwRefData);
		}

		static ::System::Boolean ForceToForeground(::System::IntPtr hWnd, ::System::Boolean checkInput)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_FORCETOFOREGROUND_OFFSET))(hWnd, checkInput);
		}

		static ::System::Void BringGameWndForeground(::System::Boolean checkInput)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_BRINGGAMEWNDFOREGROUND_OFFSET))(checkInput);
		}

		static ::System::Void BringBrowserForeground(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_BRINGBROWSERFOREGROUND_OFFSET))(browser);
		}

		static ::System::Void ReleaseCaptureIfNeed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RELEASECAPTUREIFNEED_OFFSET))();
		}

		static ::System::Void HandleDPIChanged(::System::Single dpi, ::System::Int32 browserId, ::MiHoYo::SDK::BrowserWin32Helper_RECT suggestRt)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32, ::MiHoYo::SDK::BrowserWin32Helper_RECT))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDPICHANGED_OFFSET))(dpi, browserId, suggestRt);
		}

		static ::System::Void HandleDisplayChanged(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEDISPLAYCHANGED_OFFSET))(browserId);
		}

		static ::System::IntPtr HandleKeyDown(::System::Int32 vkCode, ::System::Int32 browserId)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYDOWN_OFFSET))(vkCode, browserId);
		}

		static ::System::IntPtr HandleKeyuP(::System::Int32 vkCode, ::System::Int32 browserId)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_HANDLEKEYUP_OFFSET))(vkCode, browserId);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RemoveSubclass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_OFFSET))(this);
		}

		static ::System::Void RemoveSubclass_1(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_REMOVESUBCLASS_1_OFFSET))(browserId);
		}

		::System::Void OnNativeReady(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ONNATIVEREADY_OFFSET))(this, browserId);
		}

		static ::UnityEngine::Vector2 get_GameScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_GET_GAMESCREENSIZE_OFFSET))();
		}

		static ::System::Boolean IsValidWindow(::System::IntPtr hwnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ISVALIDWINDOW_OFFSET))(hwnd);
		}

		static ::System::Void ConvertRectFromGameToGDICore(::System::Single& x, ::System::Single& y, ::System::Single& width, ::System::Single& height)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDICORE_OFFSET))(x, y, width, height);
		}

		static ::UnityEngine::Rect ConvertRectFromGameToGDI(::UnityEngine::Rect rt)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_CONVERTRECTFROMGAMETOGDI_OFFSET))(rt);
		}
	};
}
