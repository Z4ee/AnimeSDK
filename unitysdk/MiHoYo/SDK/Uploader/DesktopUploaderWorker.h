#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/BaseUploaderWorker.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1C9FA870)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9FAD10)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1C9FA9E0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1C9FB050)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9FB1B0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1C9FB140)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITENV_OFFSET UNITYSDK_OFFSET(0x1C9FB230)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1C9FA960)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADERINTRNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C9FA620)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_CREATEUPLOADERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C9FB840)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_INITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1C9FB4B0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9FB730)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1C9FB620)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9FAD90)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1C9FAA50)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB910)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB8E0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int DesktopUploaderWorker_TypeDefinitionIndex = 37689;

	class DesktopUploaderWorker : public ::MiHoYo::SDK::Uploader::BaseUploaderWorker
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::Uploader::UploadCallbackAction*>** StaticGet_sm_dicUploaderCallback()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::Uploader::UploadCallbackAction*>**)Il2CppClass::FromTypeDefinitionIndex(DesktopUploaderWorker_TypeDefinitionIndex)->GetStaticField(0x2A2A0);
		}
		// static const ::System::String* ALIYUN_UPLOADER_TYPE; // 0x0
		// static const ::System::String* AWS_UPLOADER_TYPE; // 0x0
		// static const ::System::String* CLID_MIHOYO_UPLOADER_SDK; // 0x0
		// static const ::System::String* UPLOADER_MODULE_NAME; // 0x0
		::System::Object* m_mutexInit; // 0x10
		::System::Int32 m_nUploaderHandle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CCTOR_OFFSET))();
		}

		::System::Void AliyunInitUploader(::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNINITUPLOADER_OFFSET))(this, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		::System::Void AliyunUploadFile(::System::Int32 nTaskID, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADFILE_OFFSET))(this, nTaskID, strFilePath, strFileID, callback);
		}

		::System::Void AliyunUploadBuffer(::System::Int32 nTaskID, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADBUFFER_OFFSET))(this, nTaskID, buffer, nSize, strFileID, callback);
		}

		::System::Void AwsInitUploader(::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSINITUPLOADER_OFFSET))(this, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		::System::Void AwsUploadFile(::System::Int32 nTaskID, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADFILE_OFFSET))(this, nTaskID, strFilePath, strFileID, callback);
		}

		::System::Void AwsUploadBuffer(::System::Int32 nTaskID, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADBUFFER_OFFSET))(this, nTaskID, buffer, nSize, strFileID, callback);
		}

		::System::Void InitUploader(::System::String* strType, ::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITUPLOADER_OFFSET))(this, strType, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		::System::Void UploadFile(::System::Int32 nTaskID, ::System::String* strType, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADFILE_OFFSET))(this, nTaskID, strType, strFilePath, strFileID, callback);
		}

		::System::Void UploadBuffer(::System::Int32 nTaskID, ::System::String* strType, ::Il2CppArray<::System::Byte>* buffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADBUFFER_OFFSET))(this, nTaskID, strType, buffer, nSize, strFileID, callback);
		}

		::System::Int32 InitEnv()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITENV_OFFSET))(this);
		}

		static ::System::Void MiHoYoUploaderIntrnalCallback(::System::Int32 nTaskID, ::System::Boolean bIsSuccess, ::System::String* strFileID, ::System::String* strErrorMessage)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADERINTRNALCALLBACK_OFFSET))(nTaskID, bIsSuccess, strFileID, strErrorMessage);
		}

		static ::System::Int32 MiHoYoUploader_CreateUploaderHandle(::System::String* strClassID)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_CREATEUPLOADERHANDLE_OFFSET))(strClassID);
		}

		static ::System::Void MiHoYoUploader_InitUploader(::System::Int32 nHandle, ::System::String* strType, ::System::String* strKeyId, ::System::String* strKeySecret, ::System::String* strToken, ::System::String* strEndPoint, ::System::String* strBucketName, ::System::Int32 nErrorRetryCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_INITUPLOADER_OFFSET))(nHandle, strType, strKeyId, strKeySecret, strToken, strEndPoint, strBucketName, nErrorRetryCount);
		}

		static ::System::Void MiHoYoUploader_UploadFile(::System::Int32 nHandle, ::System::Int32 nTaskID, ::System::String* strType, ::System::String* strFilePath, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADFILE_OFFSET))(nHandle, nTaskID, strType, strFilePath, strFileID, callback);
		}

		static ::System::Void MiHoYoUploader_UploadBuffer(::System::Int32 nHandle, ::System::Int32 nTaskID, ::System::String* strType, ::Il2CppArray<::System::Byte>* lpBuffer, ::System::UInt32 nSize, ::System::String* strFileID, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADBUFFER_OFFSET))(nHandle, nTaskID, strType, lpBuffer, nSize, strFileID, callback);
		}
	};
}
