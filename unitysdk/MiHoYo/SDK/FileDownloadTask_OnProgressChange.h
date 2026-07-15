#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class FileDownloadTask; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15388AA0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15388B00)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15388A90)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x153889A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadTask_OnProgressChange_TypeDefinitionIndex = 44556;

	class FileDownloadTask_OnProgressChange : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::FileDownloadTask* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::FileDownloadTask*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::FileDownloadTask* a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::FileDownloadTask*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ONPROGRESSCHANGE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
