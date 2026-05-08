#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define MONOUIPAINTING_DOENDDRAW_OFFSET UNITYSDK_OFFSET(0xE874660)
#define MONOUIPAINTING_DOPROCESSDRAW_OFFSET UNITYSDK_OFFSET(0xE874460)
#define MONOUIPAINTING_DOSTARTDRAW_OFFSET UNITYSDK_OFFSET(0xE8745F0)
#define MONOUIPAINTING_DRAWBYGAMEPADJOYSTICK_OFFSET UNITYSDK_OFFSET(0xE873A50)
#define MONOUIPAINTING_DRAW_OFFSET UNITYSDK_OFFSET(0xE8748A0)
#define MONOUIPAINTING_FILLRENDERTEXTUREWITHBG_OFFSET UNITYSDK_OFFSET(0xE873570)
#define MONOUIPAINTING_FULLPROGRESS_OFFSET UNITYSDK_OFFSET(0xE8721E0)
#define MONOUIPAINTING_GET_MESH_OFFSET UNITYSDK_OFFSET(0xE872530)
#define MONOUIPAINTING_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xE8721D0)
#define MONOUIPAINTING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE873480)
#define MONOUIPAINTING_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE875310)
#define MONOUIPAINTING_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xE8746B0)
#define MONOUIPAINTING_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xE8754C0)
#define MONOUIPAINTING_REFRESHRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xE873790)
#define MONOUIPAINTING_RESETIMAGE_OFFSET UNITYSDK_OFFSET(0xE8732C0)
#define MONOUIPAINTING_SETUP_OFFSET UNITYSDK_OFFSET(0xE872A50)
#define MONOUIPAINTING_START_OFFSET UNITYSDK_OFFSET(0xE8729F0)
#define MONOUIPAINTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8755F0)
#define MONOUIPAINTING__CTOR_OFFSET UNITYSDK_OFFSET(0xE875540)

inline static constexpr unsigned int MonoUIPainting_TypeDefinitionIndex = 61079;

class MonoUIPainting : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Mesh** StaticGet_mesh()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(MonoUIPainting_TypeDefinitionIndex)->GetStaticField(0x40B60);
	}
	static ::System::Int32* StaticGet__MainTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoUIPainting_TypeDefinitionIndex)->GetStaticField(0xFAF0);
	}
	static ::System::Int32* StaticGet__ScaleOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoUIPainting_TypeDefinitionIndex)->GetStaticField(0xFAF4);
	}
	::System::Single MaxClearProgress; // 0x18
	::UnityEngine::UI::RawImage* rawImage; // 0x20
	::UnityEngine::UI::Text* text; // 0x28
	::UnityEngine::Texture2D* bg; // 0x30
	::UnityEngine::Material* brushMaterial; // 0x38
	::UnityEngine::Vector2 textAreaSize; // 0x40
	::System::Single brushSize; // 0x48
	::System::Single insertInterval; // 0x4C
	::UnityEngine::RenderTexture* renderTexture; // 0x50
	::System::Boolean isDrawing; // 0x58
	::Il2CppArray<::System::Boolean>* flagMasks; // 0x60
	::System::Int32 maskCount; // 0x68
	::UnityEngine::Vector2 previousLocalPosition; // 0x6C
	::System::Single brushWidth; // 0x74
	::System::Single brushHeight; // 0x78
	::UnityEngine::Vector2 textAreaPixelSize; // 0x7C
	::UnityEngine::Texture2D* brushTexture; // 0x88
	::UnityEngine::Camera* canvasCamera; // 0x90
	::UnityEngine::Vector2 previousGamepadAxisValue; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUIPAINTING__CCTOR_OFFSET))();
	}

	::System::Single get_Progress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void FullProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_FULLPROGRESS_OFFSET))(this);
	}

	static ::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + MONOUIPAINTING_GET_MESH_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_ONDESTROY_OFFSET))(this);
	}

	::System::Void ResetImage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_RESETIMAGE_OFFSET))(this);
	}

	::System::Void RefreshRenderTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_REFRESHRENDERTEXTURE_OFFSET))(this);
	}

	::System::Void FillRenderTextureWithBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_FILLRENDERTEXTUREWITHBG_OFFSET))(this);
	}

	::System::Void DrawByGamepadJoystick(::UnityEngine::Vector2 axisValue)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIPAINTING_DRAWBYGAMEPADJOYSTICK_OFFSET))(this, axisValue);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIPAINTING_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void DoStartDraw(::UnityEngine::Vector2 localPoint)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIPAINTING_DOSTARTDRAW_OFFSET))(this, localPoint);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIPAINTING_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void DoProcessDraw(::UnityEngine::Vector2 localPoint)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIPAINTING_DOPROCESSDRAW_OFFSET))(this, localPoint);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIPAINTING_ONPOINTERUP_OFFSET))(this, eventData);
	}

	::System::Void DoEndDraw()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_DOENDDRAW_OFFSET))(this);
	}

	::System::Void Draw(::UnityEngine::Vector2 localPoint)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIPAINTING_DRAW_OFFSET))(this, localPoint);
	}

	::System::Boolean Setup()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIPAINTING_SETUP_OFFSET))(this);
	}
};
