#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkImageManager; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A9C6800)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A9C6950)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A9C69B0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A9C6960)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9C67F0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C67E0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager__GetScreenshotWatermarkTimer_d__12_TypeDefinitionIndex = 20615;

	class WatermarkImageManager__GetScreenshotWatermarkTimer_d__12 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Watermark::WatermarkImageManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single waitSeconds; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__GETSCREENSHOTWATERMARKTIMER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
