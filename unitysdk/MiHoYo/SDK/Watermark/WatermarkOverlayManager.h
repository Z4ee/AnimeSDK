#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_CREATEWATERMARKOVERLAY_OFFSET UNITYSDK_OFFSET(0x1B5CEEE0)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_GETDISPLAYWATERMARK_OFFSET UNITYSDK_OFFSET(0x1B5CFE70)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_HIDEWATERMARK_OFFSET UNITYSDK_OFFSET(0x1B5CF710)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_OVERLAYRECTTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1B5CFB70)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_SHOWWATERMARK_OFFSET UNITYSDK_OFFSET(0x1B5CF5C0)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_UPDATEWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B5CF860)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5CFEE0)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CFED0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkOverlayManager_TypeDefinitionIndex = 20617;

	class WatermarkOverlayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkOverlayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkOverlayManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkOverlayManager_TypeDefinitionIndex)->GetStaticField(0xA260);
		}
		// static const ::System::String* OVERLAY_OBJECT_NAME; // 0x0
		::UnityEngine::Canvas* canvas; // 0x10
		::UnityEngine::UI::RawImage* image; // 0x18
		::UnityEngine::GameObject* overlayObject; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void CreateWatermarkOverlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_CREATEWATERMARKOVERLAY_OFFSET))(this);
		}

		::System::Void ShowWatermark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_SHOWWATERMARK_OFFSET))(this);
		}

		::System::Void HideWatermark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_HIDEWATERMARK_OFFSET))(this);
		}

		::System::Void UpdateWatermarkImage(::UnityEngine::Texture2D* texture, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_UPDATEWATERMARKIMAGE_OFFSET))(this, texture, alpha);
		}

		::System::Void OverlayRectTransformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_OVERLAYRECTTRANSFORMCHANGED_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetDisplayWatermark()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_GETDISPLAYWATERMARK_OFFSET))(this);
		}
	};
}
