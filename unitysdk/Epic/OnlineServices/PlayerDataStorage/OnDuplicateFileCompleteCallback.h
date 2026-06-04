#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class DuplicateFileCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA322C60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA322C90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA322C50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA322B60)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnDuplicateFileCompleteCallback_TypeDefinitionIndex = 42456;

	class OnDuplicateFileCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDUPLICATEFILECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
