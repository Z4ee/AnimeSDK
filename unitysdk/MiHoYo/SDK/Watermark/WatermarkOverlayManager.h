#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_CREATEWATERMARKOVERLAY_OFFSET UNITYSDK_OFFSET(0x1845DB60)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_GETDISPLAYWATERMARK_OFFSET UNITYSDK_OFFSET(0x1845C060)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_HIDEWATERMARK_OFFSET UNITYSDK_OFFSET(0x1845C790)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_OVERLAYRECTTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x184604C0)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_SHOWWATERMARK_OFFSET UNITYSDK_OFFSET(0x1845E0E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_UPDATEWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1845E610)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18460790)
#define MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18460780)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkOverlayManager_TypeDefinitionIndex = 8532;

	class WatermarkOverlayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkOverlayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkOverlayManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkOverlayManager_TypeDefinitionIndex)->GetStaticField(0x244D0);
		}
		// static const ::System::String* OVERLAY_OBJECT_NAME; // 0x0
		::UnityEngine::GameObject* overlayObject; // 0x10
		::UnityEngine::Canvas* canvas; // 0x18
		::UnityEngine::UI::RawImage* image; // 0x20

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

		::System::Void UpdateWatermarkImage(::UnityEngine::Texture2D* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKOVERLAYMANAGER_UPDATEWATERMARKIMAGE_OFFSET))(this, a1, a2);
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
