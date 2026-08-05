#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RUNTIMESTATSWINDOW_CLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x13453780)
#define RUNTIMESTATSWINDOW_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x13454380)
#define RUNTIMESTATSWINDOW_DRAWWINDOW_OFFSET UNITYSDK_OFFSET(0x13454860)
#define RUNTIMESTATSWINDOW_ENTITYINFODUMP_OFFSET UNITYSDK_OFFSET(0x134553B0)
#define RUNTIMESTATSWINDOW_INITIALIZETEXTURES_OFFSET UNITYSDK_OFFSET(0x134535A0)
#define RUNTIMESTATSWINDOW_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x13455E40)
#define RUNTIMESTATSWINDOW_ONGUI_OFFSET UNITYSDK_OFFSET(0x13454770)
#define RUNTIMESTATSWINDOW_START_OFFSET UNITYSDK_OFFSET(0x13453550)
#define RUNTIMESTATSWINDOW_UPDATEGRAPHTEXTURES_OFFSET UNITYSDK_OFFSET(0x13453EA0)
#define RUNTIMESTATSWINDOW_UPDATEGRAPHTEXTURE_OFFSET UNITYSDK_OFFSET(0x13453F20)
#define RUNTIMESTATSWINDOW_UPDATE_OFFSET UNITYSDK_OFFSET(0x13453A20)
#define RUNTIMESTATSWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13456160)
#define RUNTIMESTATSWINDOW__ENTITYINFODUMP_G__CHILDSTARTWITHNAME_18_0_OFFSET UNITYSDK_OFFSET(0x13455F30)

inline static constexpr unsigned int RuntimeStatsWindow_TypeDefinitionIndex = 64451;

class RuntimeStatsWindow : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 maxHistory = 0x64; // 0x0
	::UnityEngine::Rect windowRect; // 0x18
	::System::Boolean isDetailedMode; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* AllCounts; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* AliveCounts; // 0x38
	::UnityEngine::Texture2D* allCountTexture; // 0x40
	::UnityEngine::Texture2D* aliveCountTexture; // 0x48
	::System::Boolean texturesInitialized; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_START_OFFSET))(this);
	}

	::System::Void InitializeTextures()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_INITIALIZETEXTURES_OFFSET))(this);
	}

	::System::Void ClearTexture(::UnityEngine::Texture2D* texture, ::UnityEngine::Color bgColor)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_CLEARTEXTURE_OFFSET))(this, texture, bgColor);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateGraphTextures()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_UPDATEGRAPHTEXTURES_OFFSET))(this);
	}

	::System::Void UpdateGraphTexture(::System::Collections::Generic::List_1<::System::Single>* data, ::UnityEngine::Texture2D* texture, ::UnityEngine::Color lineColor)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::UnityEngine::Texture2D*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_UPDATEGRAPHTEXTURE_OFFSET))(this, data, texture, lineColor);
	}

	::System::Void DrawLine(::UnityEngine::Texture2D* texture, ::System::Int32 x0, ::System::Int32 y0, ::System::Int32 x1, ::System::Int32 y1, ::UnityEngine::Color color)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_DRAWLINE_OFFSET))(this, texture, x0, y0, x1, y1, color);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_ONGUI_OFFSET))(this);
	}

	::System::Void DrawWindow(::System::Int32 windowID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_DRAWWINDOW_OFFSET))(this, windowID);
	}

	::System::Single MaxValue(::System::Collections::Generic::List_1<::System::Single>* values)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_MAXVALUE_OFFSET))(this, values);
	}

	::System::Void EntityInfoDump()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW_ENTITYINFODUMP_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* _EntityInfoDump_g__ChildStartWithName_18_0(::UnityEngine::GameObject* go, ::System::String* s)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RUNTIMESTATSWINDOW__ENTITYINFODUMP_G__CHILDSTARTWITHNAME_18_0_OFFSET))(go, s);
	}
};
