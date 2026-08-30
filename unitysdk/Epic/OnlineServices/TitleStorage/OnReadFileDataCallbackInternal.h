#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB162CC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB162D10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xB162CB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB162C40)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int OnReadFileDataCallbackInternal_TypeDefinitionIndex = 45031;

	class OnReadFileDataCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult Invoke(::System::IntPtr a1)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::TitleStorage::ReadResult EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
