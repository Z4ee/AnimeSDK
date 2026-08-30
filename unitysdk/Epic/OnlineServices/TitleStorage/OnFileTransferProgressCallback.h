#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class FileTransferProgressCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E410)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E440)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E400)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43E310)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnFileTransferProgressCallback_TypeDefinitionIndex = 45022;

	class OnFileTransferProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
