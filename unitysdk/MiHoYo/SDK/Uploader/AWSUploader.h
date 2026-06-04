#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/Uploader.h"

namespace MiHoYo::SDK::Uploader { class Task; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_AWSUPLOADER_INTERNALUPLOAD_OFFSET UNITYSDK_OFFSET(0xA228AC0)
#define MIHOYO_SDK_UPLOADER_AWSUPLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xA228790)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int AWSUploader_TypeDefinitionIndex = 44032;

	class AWSUploader : public ::MiHoYo::SDK::Uploader::Uploader
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_AWSUPLOADER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void InternalUpload(::MiHoYo::SDK::Uploader::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Uploader::Task*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_AWSUPLOADER_INTERNALUPLOAD_OFFSET))(this, a1);
		}
	};
}
