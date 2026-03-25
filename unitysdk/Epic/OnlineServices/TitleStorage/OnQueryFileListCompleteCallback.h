#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class QueryFileListCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83C4220)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83C4250)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83C3CD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83C3CB0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnQueryFileListCompleteCallback_TypeDefinitionIndex = 35354;

	class OnQueryFileListCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
