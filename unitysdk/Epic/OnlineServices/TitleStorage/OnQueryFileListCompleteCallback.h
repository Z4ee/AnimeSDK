#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class QueryFileListCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E850)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E880)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D43E840)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43E750)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnQueryFileListCompleteCallback_TypeDefinitionIndex = 45026;

	class OnQueryFileListCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONQUERYFILELISTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
