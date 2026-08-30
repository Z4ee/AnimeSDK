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

#define MIHOYO_SDK_UPLOADER_UPLOADER_GENERATETASKID_OFFSET UNITYSDK_OFFSET(0x1CD50900)
#define MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXERRORRETRY_OFFSET UNITYSDK_OFFSET(0x1CD50780)
#define MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXTASKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD50840)
#define MIHOYO_SDK_UPLOADER_UPLOADER_LOG_OFFSET UNITYSDK_OFFSET(0x1CD50F30)
#define MIHOYO_SDK_UPLOADER_UPLOADER_NOTIFYUPLOADTASKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD4E720)
#define MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXERRORRETRY_OFFSET UNITYSDK_OFFSET(0x1CD507E0)
#define MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXTASKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD508A0)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPDATETASKS_OFFSET UNITYSDK_OFFSET(0x1CD50C50)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD51060)
#define MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CD50A20)
#define MIHOYO_SDK_UPLOADER_UPLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD51290)
#define MIHOYO_SDK_UPLOADER_UPLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4E130)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Uploader_TypeDefinitionIndex = 47127;

	class Uploader : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_aid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x5ECB0);
		}
		static ::MiHoYo::SDK::Uploader::OnLogAction** StaticGet_OnLog()
		{
			return (::MiHoYo::SDK::Uploader::OnLogAction**)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x5ECB8);
		}
		static ::System::Int32* StaticGet_m_nMaxErrorRetry()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x13260);
		}
		static ::System::Int32* StaticGet_sm_nTaskID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x13264);
		}
		static ::System::Int32* StaticGet_m_nMaxTaskCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Uploader_TypeDefinitionIndex)->GetStaticField(0x13268);
		}
		::System::Object* m_mutexForTask; // 0x10
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::Uploader::Task*>* m_queuePendingTasks; // 0x18
		::MiHoYo::SDK::Uploader::NativeUploaderInterface* m_nativeUploader; // 0x20
		::System::String* dir; // 0x28
		::MiHoYo::SDK::Uploader::Provider provider; // 0x30
		::System::Int32 m_nRunningTasksCount; // 0x34

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_MaxErrorRetry()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXERRORRETRY_OFFSET))();
		}

		static ::System::Void set_MaxErrorRetry(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXERRORRETRY_OFFSET))(a1);
		}

		static ::System::Int32 get_MaxTaskCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GET_MAXTASKCOUNT_OFFSET))();
		}

		static ::System::Void set_MaxTaskCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_SET_MAXTASKCOUNT_OFFSET))(a1);
		}

		::System::Int32 GenerateTaskID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_GENERATETASKID_OFFSET))(this);
		}

		::System::Int32 UploadFile(::System::String* a1, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADFILE_OFFSET))(this, a1, a2);
		}

		::System::Int32 UploadBuffer(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPLOADBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyUploadTaskCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_NOTIFYUPLOADTASKCOMPLETED_OFFSET))(this);
		}

		::System::Void UpdateTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_UPDATETASKS_OFFSET))(this);
		}

		::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_UPLOADER_LOG_OFFSET))(this, a1);
		}
	};
}
