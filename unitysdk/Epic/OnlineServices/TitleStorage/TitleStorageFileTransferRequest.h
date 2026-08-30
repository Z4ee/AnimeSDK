#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_CANCELREQUEST_OFFSET UNITYSDK_OFFSET(0xB166090)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_GETFILENAME_OFFSET UNITYSDK_OFFSET(0xB166190)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_GETFILEREQUESTSTATE_OFFSET UNITYSDK_OFFSET(0xB166110)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_RELEASE_OFFSET UNITYSDK_OFFSET(0xB1663B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB166080)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB166070)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int TitleStorageFileTransferRequest_TypeDefinitionIndex = 45047;

	class TitleStorageFileTransferRequest : public ::Epic::OnlineServices::Handle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CancelRequest()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_CANCELREQUEST_OFFSET))(this);
		}

		::Epic::OnlineServices::Result GetFileRequestState()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_GETFILEREQUESTSTATE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result GetFilename(::System::String*& a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_GETFILENAME_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEFILETRANSFERREQUEST_RELEASE_OFFSET))(this);
		}
	};
}
