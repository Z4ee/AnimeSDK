#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class FileDownloadTask; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C54E750)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C54E7D0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C54E1B0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54E190)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadTask_OnProgressChange_TypeDefinitionIndex = 36671;

	class FileDownloadTask_OnProgressChange : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::FileDownloadTask* task, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::FileDownloadTask*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_INVOKE_OFFSET))(this, task, progress);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::FileDownloadTask* task, ::System::Single progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::FileDownloadTask*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_BEGININVOKE_OFFSET))(this, task, progress, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
