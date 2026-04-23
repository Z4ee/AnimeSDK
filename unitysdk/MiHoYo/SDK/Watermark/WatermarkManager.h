#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1768EB50)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1768EDA0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1768E8E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1768DAC0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1768D8E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1768F010)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1768F000)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkManager_TypeDefinitionIndex = 7630;

	class WatermarkManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkManager_TypeDefinitionIndex)->GetStaticField(0x17510);
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

		::System::Boolean CheckWatermarkConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET))(this);
		}
	};
}
