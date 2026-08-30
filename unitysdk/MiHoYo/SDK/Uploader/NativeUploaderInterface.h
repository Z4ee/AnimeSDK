#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class BaseUploaderWorker; }
namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNINITUPLOADER_OFFSET UNITYSDK_OFFSET(0xB2C7080)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0xB2C71F0)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADFILE_OFFSET UNITYSDK_OFFSET(0xB2C7180)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSINITUPLOADER_OFFSET UNITYSDK_OFFSET(0xB2C5690)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0xB2C5A90)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADFILE_OFFSET UNITYSDK_OFFSET(0xB2C5B10)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C7270)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int NativeUploaderInterface_TypeDefinitionIndex = 47121;

	class NativeUploaderInterface : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Uploader::BaseUploaderWorker* m_uploaderWorker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void AliyunInitUploader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNINITUPLOADER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AliyunUploadFile(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AliyunUploadBuffer(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AwsInitUploader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSINITUPLOADER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AwsUploadFile(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AwsUploadBuffer(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
