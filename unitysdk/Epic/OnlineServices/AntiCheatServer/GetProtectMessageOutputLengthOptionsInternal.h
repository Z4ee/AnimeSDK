#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class GetProtectMessageOutputLengthOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C3DD40)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCC9F0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int GetProtectMessageOutputLengthOptionsInternal_TypeDefinitionIndex = 46283;

	struct alignas(4) GetProtectMessageOutputLengthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14

		::System::Void set_DataLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
