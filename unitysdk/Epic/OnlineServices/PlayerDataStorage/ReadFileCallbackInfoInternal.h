#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x5F470)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x5F5F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x5F580)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int ReadFileCallbackInfoInternal_TypeDefinitionIndex = 35854;

	struct alignas(8) ReadFileCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_Filename; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILECALLBACKINFOINTERNAL_GET_FILENAME_OFFSET))(this);
		}
	};
}
