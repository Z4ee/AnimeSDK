#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class QueryFileListCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CF140)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CF170)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CEC20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CEC00)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnQueryFileListCompleteCallback_TypeDefinitionIndex = 36100;

	class OnQueryFileListCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
