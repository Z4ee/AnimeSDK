#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ImageCache; }
namespace System { class String; }

#define MIHOYO_SDK_IMAGECACHE___C__DISPLAYCLASS6_0__ASYNCDOWNLOADTEXTURE_B__1_OFFSET UNITYSDK_OFFSET(0x1C92CB20)
#define MIHOYO_SDK_IMAGECACHE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92CB10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache___c__DisplayClass6_0_TypeDefinitionIndex = 20089;

	class ImageCache___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ImageCache* __4__this; // 0x10
		::System::String* url; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncDownloadTexture_b__1(::Il2CppArray<::System::Byte>* data, ::System::Int32 error, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__DISPLAYCLASS6_0__ASYNCDOWNLOADTEXTURE_B__1_OFFSET))(this, data, error, message);
		}
	};
}
