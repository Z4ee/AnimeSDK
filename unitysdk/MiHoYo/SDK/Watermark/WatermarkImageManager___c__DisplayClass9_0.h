#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkImageManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD76EB0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS9_0__ONSCREENSHOTWATERMARKINFORESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1CD79380)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager___c__DisplayClass9_0_TypeDefinitionIndex = 8808;

	class WatermarkImageManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* requestCacheKey; // 0x10
		::MiHoYo::SDK::Watermark::WatermarkImageManager* __4__this; // 0x18
		::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScreenshotWatermarkInfoResponse_b__0(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER___C__DISPLAYCLASS9_0__ONSCREENSHOTWATERMARKINFORESPONSE_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
