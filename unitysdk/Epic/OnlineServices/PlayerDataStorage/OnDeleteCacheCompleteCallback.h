#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class DeleteCacheCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C542860)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C542890)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C542360)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C542340)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnDeleteCacheCompleteCallback_TypeDefinitionIndex = 35431;

	class OnDeleteCacheCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
