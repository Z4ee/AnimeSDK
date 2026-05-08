#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIStyle; }

#define RICHTAPCONSOLE_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BAB07F0)
#define RICHTAPCONSOLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BAB9090)
#define RICHTAPCONSOLE_CLAMPWINDOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1BAB9700)
#define RICHTAPCONSOLE_CLEARALLMESSAGES_OFFSET UNITYSDK_OFFSET(0x1BAB9BF0)
#define RICHTAPCONSOLE_DRAWCONSOLEWINDOW_OFFSET UNITYSDK_OFFSET(0x1BAB95F0)
#define RICHTAPCONSOLE_DRAWTOOLBAR_OFFSET UNITYSDK_OFFSET(0x1BAB9A20)
#define RICHTAPCONSOLE_DRAWWINDOWCONTENT_OFFSET UNITYSDK_OFFSET(0x1BAB9780)
#define RICHTAPCONSOLE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BAB9080)
#define RICHTAPCONSOLE_INITGUISTYLE_OFFSET UNITYSDK_OFFSET(0x1BAB9360)
#define RICHTAPCONSOLE_INITWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x1BAB92F0)
#define RICHTAPCONSOLE_ONGUI_OFFSET UNITYSDK_OFFSET(0x1BAB95E0)
#define RICHTAPCONSOLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BAB95D0)
#define RICHTAPCONSOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB9CC0)

inline static constexpr unsigned int RichTapConsole_TypeDefinitionIndex = 36468;

class RichTapConsole : public ::UnityEngine::MonoBehaviour
{
public:
	static ::RichTapConsole** StaticGet__instance()
	{
		return (::RichTapConsole**)Il2CppClass::FromTypeDefinitionIndex(RichTapConsole_TypeDefinitionIndex)->GetStaticField(0x271D0);
	}
	// static const ::System::Int32 ConsoleWindowID = 0x29A; // 0x0
	// static const ::System::Int32 ConsoleEdge = 0x14; // 0x0
	// static const ::System::String* RichTapWindowTitle; // 0x0
	::UnityEngine::KeyCode ShortcutKey; // 0x18
	::System::Single shakeAcceleration; // 0x1C
	::System::Int32 maxMessages; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* messages; // 0x28
	::System::Single initWidthRatio; // 0x30
	::UnityEngine::Vector2 scrollPosition; // 0x34
	::UnityEngine::Rect windowRect; // 0x3C
	::UnityEngine::GUIStyle* textStyle; // 0x50
	::UnityEngine::GUIStyle* clearButtonStyle; // 0x58
	::System::Object* _lock; // 0x60
	::System::Boolean scrollToBottom; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE__CTOR_OFFSET))(this);
	}

	static ::RichTapConsole* get_Instance()
	{
		return ((::RichTapConsole*(*)())((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_UPDATE_OFFSET))(this);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_ONGUI_OFFSET))(this);
	}

	::System::Void InitWindowRect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_INITWINDOWRECT_OFFSET))(this);
	}

	::System::Void InitGUIStyle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_INITGUISTYLE_OFFSET))(this);
	}

	::System::Void DrawConsoleWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_DRAWCONSOLEWINDOW_OFFSET))(this);
	}

	::System::Void DrawWindowContent(::System::Int32 windowId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_DRAWWINDOWCONTENT_OFFSET))(this, windowId);
	}

	::System::Void DrawToolbar()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_DRAWTOOLBAR_OFFSET))(this);
	}

	::System::Void ClampWindowPosition()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_CLAMPWINDOWPOSITION_OFFSET))(this);
	}

	::System::Void AddMessage(::System::String* message)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_ADDMESSAGE_OFFSET))(this, message);
	}

	::System::Void ClearAllMessages()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCONSOLE_CLEARALLMESSAGES_OFFSET))(this);
	}
};
