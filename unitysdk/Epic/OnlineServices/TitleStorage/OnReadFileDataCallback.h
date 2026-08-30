#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class ReadFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB162BE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB162C10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB162BD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB162AE0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnReadFileDataCallback_TypeDefinitionIndex = 45030;

	class OnReadFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult Invoke(::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo* a1)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
