#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class QueryFileCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83C3900)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83C3930)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83C33B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83C3390)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnQueryFileCompleteCallback_TypeDefinitionIndex = 35352;

	class OnQueryFileCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
