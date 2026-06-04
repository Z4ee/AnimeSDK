#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADER_TASK_BUFFERTASK_OFFSET UNITYSDK_OFFSET(0xA22AC30)
#define MIHOYO_SDK_UPLOADER_TASK_FILETASK_OFFSET UNITYSDK_OFFSET(0xA22AAF0)
#define MIHOYO_SDK_UPLOADER_TASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA22AD90)
#define MIHOYO_SDK_UPLOADER_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA22AC10)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 44027;

	class Task : public ::System::Object
	{
	public:
		::System::String* m_strFilePath; // 0x10
		::MiHoYo::SDK::Uploader::UploadCallbackAction* callback; // 0x18
		::System::String* key; // 0x20
		::Il2CppArray<::System::Byte>* m_buffer; // 0x28
		::System::Int32 m_nTaskID; // 0x30

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::Uploader::Task* FileTask(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::MiHoYo::SDK::Uploader::Task*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK_FILETASK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::Uploader::Task* BufferTask(::System::Int32 a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a5)
		{
			return ((::MiHoYo::SDK::Uploader::Task*(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_TASK_BUFFERTASK_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
