#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class FileTransferProgressCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BEAFF0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BEB020)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BEAAA0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BEAA80)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnFileTransferProgressCallback_TypeDefinitionIndex = 41176;

	class OnFileTransferProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
