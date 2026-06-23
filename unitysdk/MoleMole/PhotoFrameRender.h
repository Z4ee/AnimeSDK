#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PhotoFrame;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class CanvasScaler; }

#define MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET UNITYSDK_OFFSET(0x12BDD610)
#define MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET UNITYSDK_OFFSET(0x12BDD540)
#define MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x12BDD5B0)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET UNITYSDK_OFFSET(0x12BDD0E0)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x12BDD020)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET UNITYSDK_OFFSET(0x12BDD0F0)
#define MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET UNITYSDK_OFFSET(0x12BDD100)
#define MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x12BDD080)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET UNITYSDK_OFFSET(0x12BDD700)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET UNITYSDK_OFFSET(0x12BDD150)
#define MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BDD7F0)
#define MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDD7A0)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameRender_TypeDefinitionIndex = 77830;

	class PhotoFrameRender : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_Field_5_0()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PhotoFrameRender_TypeDefinitionIndex)->GetStaticField(0xF350);
		}
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::UI::CanvasScaler* CanvasScaler; // 0x20
		::UnityEngine::Canvas* canvas; // 0x28
		::UnityEngine::Vector2 Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::UnityEngine::RenderTexture* Field_5_6; // 0x40
		::PhotoFrame* Field_5_7; // 0x48
		::UnityEngine::Vector2 Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET))();
		}

		static ::System::Single get_RenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET))();
		}

		static ::System::Void set_RenderScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET))(a1);
		}

		::UnityEngine::Vector2 get_CanvasSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_RenderSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET))(this);
		}

		::System::Void SetPhotoCanvasSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET))(this, a1);
		}

		::System::Void UpdateRenderSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET))(this);
		}

		::System::Void CameraRenderRT(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET))(this, a1);
		}

		::System::Void ClearCameraTargetTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET))(this);
		}

		::System::Void AddPhotoFrame(::PhotoFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PhotoFrame*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET))(this, a1);
		}

		::System::Void UpdateCanvasAndCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET))(this);
		}
	};
}
