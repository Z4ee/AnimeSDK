#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_TASK_BUFFERTASK_OFFSET UNITYSDK_OFFSET(0x1E533380)
#define MIHOYO_SDK_UPLOADER_TASK_FILETASK_OFFSET UNITYSDK_OFFSET(0x1E533220)
#define MIHOYO_SDK_UPLOADER_TASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E533520)
#define MIHOYO_SDK_UPLOADER_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E533360)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 37694;

	class Task : public ::System::Object
	{
	public:
		::System::String* m_strFilePath; // 0x10
		::MiHoYo::SDK::Uploader::UploadCallbackAction* callback; // 0x18
		::Il2CppArray<::System::Byte>* m_buffer; // 0x20
		::System::String* key; // 0x28
		::System::Int32 m_nTaskID; // 0x30

		::System::Void _ctor(::System::Int32 nTaskID, ::System::String* key, ::System::String* strFilePath, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK__CTOR_OFFSET))(this, nTaskID, key, strFilePath, callback);
		}

		::System::Void _ctor_1(::System::Int32 nTaskID, ::System::String* key, ::Il2CppArray<::System::Byte>* buffer, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK__CTOR_1_OFFSET))(this, nTaskID, key, buffer, callback);
		}

		static ::MiHoYo::SDK::Uploader::Task* FileTask(::System::Int32 nTaskID, ::System::String* aid, ::System::String* path, ::System::String* dir, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::MiHoYo::SDK::Uploader::Task*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK_FILETASK_OFFSET))(nTaskID, aid, path, dir, callback);
		}

		static ::MiHoYo::SDK::Uploader::Task* BufferTask(::System::Int32 nTaskID, ::System::String* aid, ::Il2CppArray<::System::Byte>* buffer, ::System::String* dir, ::MiHoYo::SDK::Uploader::UploadCallbackAction* callback)
		{
			return ((::MiHoYo::SDK::Uploader::Task*(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK_BUFFERTASK_OFFSET))(nTaskID, aid, buffer, dir, callback);
		}
	};
}
