#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class FileTransferProgressCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD4660)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD4690)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD4160)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD4140)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnFileTransferProgressCallback_TypeDefinitionIndex = 35437;

	class OnFileTransferProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
