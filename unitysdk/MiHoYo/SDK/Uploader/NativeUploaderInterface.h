#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class BaseUploaderWorker; }
namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x19FBBFA0)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x19FBC110)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x19FBC0A0)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x19FBC190)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x19FBBEB0)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x19FBBF30)
#define MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBC290)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int NativeUploaderInterface_TypeDefinitionIndex = 35430;

	class NativeUploaderInterface : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Uploader::BaseUploaderWorker* m_uploaderWorker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void AliyunInitUploader(::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNINITUPLOADER_OFFSET))(this, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		::System::Void AliyunUploadFile(::System::Int32 nTaskID, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADFILE_OFFSET))(this, nTaskID, strFilePath, strFileID, callback);
		}

		::System::Void AliyunUploadBuffer(::System::Int32 nTaskID, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_ALIYUNUPLOADBUFFER_OFFSET))(this, nTaskID, buffer, nSize, strFileID, callback);
		}

		::System::Void AwsInitUploader(::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSINITUPLOADER_OFFSET))(this, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		::System::Void AwsUploadFile(::System::Int32 nTaskID, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADFILE_OFFSET))(this, nTaskID, strFilePath, strFileID, callback);
		}

		::System::Void AwsUploadBuffer(::System::Int32 nTaskID, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_NATIVEUPLOADERINTERFACE_AWSUPLOADBUFFER_OFFSET))(this, nTaskID, buffer, nSize, strFileID, callback);
		}
	};
}
