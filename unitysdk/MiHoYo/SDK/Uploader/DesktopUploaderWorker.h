#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/BaseUploaderWorker.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1CD4EA00)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4EEF0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CD4EB70)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSINITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1CD4F280)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4F3E0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CD4F370)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITENV_OFFSET UNITYSDK_OFFSET(0x1CD4F460)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1CD4EAF0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADERINTRNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD4E7F0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_CREATEUPLOADERHANDLE_OFFSET UNITYSDK_OFFSET(0x1CD4FA80)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_INITUPLOADER_OFFSET UNITYSDK_OFFSET(0x1CD4F6F0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4F970)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CD4F860)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4EF70)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CD4EBE0)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD4FB80)
#define MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4FB50)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int DesktopUploaderWorker_TypeDefinitionIndex = 47119;

	class DesktopUploaderWorker : public ::MiHoYo::SDK::Uploader::BaseUploaderWorker
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::Uploader::UploadCallbackAction*>** StaticGet_sm_dicUploaderCallback()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::Uploader::UploadCallbackAction*>**)Il2CppClass::FromTypeDefinitionIndex(DesktopUploaderWorker_TypeDefinitionIndex)->GetStaticField(0x5EBD0);
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

		::System::Void AliyunInitUploader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNINITUPLOADER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AliyunUploadFile(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AliyunUploadBuffer(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_ALIYUNUPLOADBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AwsInitUploader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSINITUPLOADER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AwsUploadFile(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AwsUploadBuffer(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_AWSUPLOADBUFFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void InitUploader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITUPLOADER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void UploadFile(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADFILE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UploadBuffer(::System::Int32 a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::UInt32 a4, ::System::String* a5, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_UPLOADBUFFER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 InitEnv()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_INITENV_OFFSET))(this);
		}

		static ::System::Void MiHoYoUploaderIntrnalCallback(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADERINTRNALCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 MiHoYoUploader_CreateUploaderHandle(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_CREATEUPLOADERHANDLE_OFFSET))(a1);
		}

		static ::System::Void MiHoYoUploader_InitUploader(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_INITUPLOADER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void MiHoYoUploader_UploadFile(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void MiHoYoUploader_UploadBuffer(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::Il2CppArray<::System::Byte>* a4, ::System::UInt32 a5, ::System::String* a6, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a7)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_DESKTOPUPLOADERWORKER_MIHOYOUPLOADER_UPLOADBUFFER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
