#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class DeleteCacheCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83C26C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83C26F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83C2170)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83C2150)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnDeleteCacheCompleteCallback_TypeDefinitionIndex = 35348;

	class OnDeleteCacheCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
