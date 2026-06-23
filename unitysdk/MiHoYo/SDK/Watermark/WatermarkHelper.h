#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETAPPID_OFFSET UNITYSDK_OFFSET(0x1B5CEAB0)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTBODY_OFFSET UNITYSDK_OFFSET(0x1B5CE870)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1B5CEC20)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CEED0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkHelper_TypeDefinitionIndex = 20611;

	class WatermarkHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_appId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WatermarkHelper_TypeDefinitionIndex)->GetStaticField(0xA240);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Watermark::WatermarkRequest* GetWatermarkRequestBody(::System::Int32 width, ::System::Int32 height)
		{
			return ((::MiHoYo::SDK::Watermark::WatermarkRequest*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTBODY_OFFSET))(width, height);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetWatermarkRequestHeader()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTHEADER_OFFSET))();
		}

		static ::System::String* GetAppId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETAPPID_OFFSET))();
		}
	};
}
