#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Uploader/Provider.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class NativeUploaderInterface; }
namespace MiHoYo::SDK::Uploader { class OnLogAction; }
namespace MiHoYo::SDK::Uploader { class Task; }
namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MIHOYO_SDK_UPLOADER_UPLOADER_GENERATETASKID_OFFSET UNITYSDK_OFFSET(0x1AE35CC0)
#define MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXERRORRETRY_OFFSET UNITYSDK_OFFSET(0x1AE35A40)
#define MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXTASKCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE35B00)
#define MIHOYO_SDK_UPLOADER_UPLOADER_LOG_OFFSET UNITYSDK_OFFSET(0x1AE36230)
#define MIHOYO_SDK_UPLOADER_UPLOADER_NOTIFYUPLOADTASKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AE36560)
#define MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXERRORRETRY_OFFSET UNITYSDK_OFFSET(0x1AE35AA0)
#define MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXTASKCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE35B60)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPDATETASKS_OFFSET UNITYSDK_OFFSET(0x1AE35FE0)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE36360)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1AE35DE0)
#define MIHOYO_SDK_UPLOADER_UPLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE36620)
#define MIHOYO_SDK_UPLOADER_UPLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE35BC0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Uploader_TypeDefinitionIndex = 37035;

	class Uploader : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Uploader::OnLogAction** StaticGet_OnLog()
		{
			return (::MiHoYo::SDK::Uploader::OnLogAction**)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x28110);
		}
		static ::System::String** StaticGet_aid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x28118);
		}
		static ::System::Int32* StaticGet_m_nMaxErrorRetry()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x8760);
		}
		static ::System::Int32* StaticGet_m_nMaxTaskCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x8764);
		}
		static ::System::Int32* StaticGet_sm_nTaskID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x8768);
		}
		::System::Object* m_mutexForTask; // 0x10
		::MiHoYo::SDK::Uploader::NativeUploaderInterface* m_nativeUploader; // 0x18
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::Uploader::Task*>* m_queuePendingTasks; // 0x20
		::System::String* dir; // 0x28
		::MiHoYo::SDK::Uploader::Provider provider; // 0x30
		::System::Int32 m_nRunningTasksCount; // 0x34

		::System::Void _ctor(::System::String* keyId, ::System::String* keySecret, ::System::String* token, ::System::String* endPoint, ::System::String* bucketName, ::System::String* dir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER__CTOR_OFFSET))(this, keyId, keySecret, token, endPoint, bucketName, dir);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_MaxErrorRetry()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXERRORRETRY_OFFSET))();
		}

		static ::System::Void set_MaxErrorRetry(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXERRORRETRY_OFFSET))(value);
		}

		static ::System::Int32 get_MaxTaskCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXTASKCOUNT_OFFSET))();
		}

		static ::System::Void set_MaxTaskCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXTASKCOUNT_OFFSET))(value);
		}

		::System::Int32 GenerateTaskID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GENERATETASKID_OFFSET))(this);
		}

		::System::Int32 UploadFile(::System::String* path, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADFILE_OFFSET))(this, path, callback);
		}

		::System::Int32 UploadBuffer(::Il2CppArray<::System::Byte>* buffer, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADBUFFER_OFFSET))(this, buffer, callback);
		}

		::System::Void NotifyUploadTaskCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_NOTIFYUPLOADTASKCOMPLETED_OFFSET))(this);
		}

		::System::Void UpdateTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPDATETASKS_OFFSET))(this);
		}

		::System::Void Log(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_LOG_OFFSET))(this, message);
		}
	};
}
