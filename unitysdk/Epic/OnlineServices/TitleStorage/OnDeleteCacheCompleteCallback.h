#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class DeleteCacheCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0FB470)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0FB4A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0FB460)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA0FB370)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnDeleteCacheCompleteCallback_TypeDefinitionIndex = 41977;

	class OnDeleteCacheCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONDELETECACHECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
