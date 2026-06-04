#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class DeleteFileCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA322A40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA322A70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA322A30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA322940)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnDeleteFileCompleteCallback_TypeDefinitionIndex = 42454;

	class OnDeleteFileCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
