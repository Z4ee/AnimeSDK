#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9F2320)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x9F2430)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnMessageToServerCallbackInfoInternal_TypeDefinitionIndex = 36979;

	struct alignas(8) OnMessageToServerCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_MessageData; // 0x18
		::System::UInt32 m_MessageDataSizeBytes; // 0x20

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFOINTERNAL_GET_MESSAGEDATA_OFFSET))(this);
		}
	};
}
