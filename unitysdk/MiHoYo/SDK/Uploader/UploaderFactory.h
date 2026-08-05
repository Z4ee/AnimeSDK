#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/Provider.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class Uploader; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_UPLOADERFACTORY_CREATEUPLOADER_OFFSET UNITYSDK_OFFSET(0x1E5E5C50)
#define MIHOYO_SDK_UPLOADER_UPLOADERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5D30)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int UploaderFactory_TypeDefinitionIndex = 37695;

	class UploaderFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADERFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Uploader::Uploader* createUploader(::MiHoYo::SDK::Uploader::Provider provider, ::System::String* keyId, ::System::String* keySecret, ::System::String* token, ::System::String* endPoint, ::System::String* bucketName, ::System::String* dir)
		{
			return ((::MiHoYo::SDK::Uploader::Uploader*(*)(::MiHoYo::SDK::Uploader::Provider, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADERFACTORY_CREATEUPLOADER_OFFSET))(provider, keyId, keySecret, token, endPoint, bucketName, dir);
		}
	};
}
