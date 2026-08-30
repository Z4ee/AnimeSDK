#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class GetProtectMessageOutputLengthOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x90F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int GetProtectMessageOutputLengthOptionsInternal_TypeDefinitionIndex = 46378;

	struct alignas(4) GetProtectMessageOutputLengthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14

		::System::Void set_DataLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
