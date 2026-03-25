#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class DeleteFileCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86C0FC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86C0FF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86C0A70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86C0A50)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnDeleteFileCompleteCallback_TypeDefinitionIndex = 35825;

	class OnDeleteFileCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
