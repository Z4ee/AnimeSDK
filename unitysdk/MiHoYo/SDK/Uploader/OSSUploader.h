#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/Uploader.h"

namespace MiHoYo::SDK::Uploader { class Task; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_OSSUPLOADER_INTERNALUPLOAD_OFFSET UNITYSDK_OFFSET(0x8DDEEF0)
#define MIHOYO_SDK_UPLOADER_OSSUPLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DDEDC0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int OSSUploader_TypeDefinitionIndex = 43227;

	class OSSUploader : public ::MiHoYo::SDK::Uploader::Uploader
	{
	public:
		::System::Void _ctor(::System::String* keyId, ::System::String* keySecret, ::System::String* token, ::System::String* endPoint, ::System::String* bucketName, ::System::String* dir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_OSSUPLOADER__CTOR_OFFSET))(this, keyId, keySecret, token, endPoint, bucketName, dir);
		}

		::System::Void InternalUpload(::MiHoYo::SDK::Uploader::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Uploader::Task*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_OSSUPLOADER_INTERNALUPLOAD_OFFSET))(this, task);
		}
	};
}
