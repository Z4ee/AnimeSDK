#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKSCREENSHOTWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C911A80)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C9116D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGEDIRECT_OFFSET UNITYSDK_OFFSET(0x1C9118B0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1C9116E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C911390)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C910830)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1C9105D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C911CE0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C911CD0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkManager_TypeDefinitionIndex = 20965;

	class WatermarkManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkManager_TypeDefinitionIndex)->GetStaticField(0xA8E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetWatermarkEnable(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKENABLE_OFFSET))(this, args);
		}

		::System::Void SetWatermarkConfig(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKCONFIG_OFFSET))(this, jsonString);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_INIT_OFFSET))(this);
		}

		::System::Void GetScreenShotWatermarkImage(::System::Int32 width, ::System::Int32 height, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback, ::System::Single timeoutSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGE_OFFSET))(this, width, height, callback, timeoutSecond);
		}

		::System::Void GetScreenShotWatermarkImageDirect(::System::Int32 width, ::System::Int32 height, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback, ::System::Single timeoutSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGEDIRECT_OFFSET))(this, width, height, callback, timeoutSecond);
		}

		::System::Boolean CheckWatermarkConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET))(this);
		}

		::System::Boolean CheckScreenshotWatermarkConfig(::System::Boolean ignoreSwitch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKSCREENSHOTWATERMARKCONFIG_OFFSET))(this, ignoreSwitch);
		}
	};
}
