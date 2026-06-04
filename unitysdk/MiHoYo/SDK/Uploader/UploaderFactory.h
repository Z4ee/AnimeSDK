#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/Provider.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class Uploader; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_UPLOADERFACTORY_CREATEUPLOADER_OFFSET UNITYSDK_OFFSET(0xA22B9D0)
#define MIHOYO_SDK_UPLOADER_UPLOADERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xA22BAB0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int UploaderFactory_TypeDefinitionIndex = 44028;

	class UploaderFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADERFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Uploader::Uploader* createUploader(::MiHoYo::SDK::Uploader::Provider a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::MiHoYo::SDK::Uploader::Uploader*(*)(::MiHoYo::SDK::Uploader::Provider, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADERFACTORY_CREATEUPLOADER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
