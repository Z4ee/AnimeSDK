#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkImageManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8CB10)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS7_0__REQUESTSCREENSHOTWATERMARK_B__0_OFFSET UNITYSDK_OFFSET(0x19C8CB20)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager___c__DisplayClass7_0_TypeDefinitionIndex = 19452;

	class WatermarkImageManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Watermark::WatermarkImageManager* __4__this; // 0x10
		::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestScreenshotWatermark_b__0(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS7_0__REQUESTSCREENSHOTWATERMARK_B__0_OFFSET))(this, url);
		}
	};
}
