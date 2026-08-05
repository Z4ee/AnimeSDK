#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::TitleStorage { class ReadFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF7FCC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF7FCF0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF7F7A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7F780)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnReadFileDataCallback_TypeDefinitionIndex = 35625;

	class OnReadFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult Invoke(::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo* data)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
