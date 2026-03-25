#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class GetProtectMessageOutputLengthOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xE310)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int GetProtectMessageOutputLengthOptionsInternal_TypeDefinitionIndex = 36611;

	struct alignas(4) GetProtectMessageOutputLengthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14

		::System::Void set_DataLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_DATALENGTHBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
