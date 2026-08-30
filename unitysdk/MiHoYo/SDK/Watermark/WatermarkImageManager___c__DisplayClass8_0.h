#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkImageManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0C050)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS8_0__REQUESTSCREENSHOTWATERMARK_B__0_OFFSET UNITYSDK_OFFSET(0x1BB0EE10)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager___c__DisplayClass8_0_TypeDefinitionIndex = 8807;

	class WatermarkImageManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* requestCacheKey; // 0x10
		::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback; // 0x18
		::MiHoYo::SDK::Watermark::WatermarkImageManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestScreenshotWatermark_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS8_0__REQUESTSCREENSHOTWATERMARK_B__0_OFFSET))(this, a1);
		}
	};
}
