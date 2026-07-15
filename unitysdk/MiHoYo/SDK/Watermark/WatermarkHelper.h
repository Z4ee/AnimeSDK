#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETAPPID_OFFSET UNITYSDK_OFFSET(0x1B6C79B0)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTBODY_OFFSET UNITYSDK_OFFSET(0x1B6C76D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1B6C7AF0)
#define MIHOYO_SDK_WATERMARK_WATERMARKHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C7EA0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkHelper_TypeDefinitionIndex = 8538;

	class WatermarkHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_appId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WatermarkHelper_TypeDefinitionIndex)->GetStaticField(0x28860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Watermark::WatermarkRequest* GetWatermarkRequestBody(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Watermark::WatermarkRequest*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHELPER_GETWATERMARKREQUESTBODY_OFFSET))(a1, a2);
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
