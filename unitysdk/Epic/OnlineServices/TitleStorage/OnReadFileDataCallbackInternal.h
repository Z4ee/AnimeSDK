#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A9E1800)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9E1850)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A9E1500)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E14F0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnReadFileDataCallbackInternal_TypeDefinitionIndex = 33404;

	class OnReadFileDataCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult Invoke(::System::IntPtr data)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
