#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS_GET_DATALENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1DB79760)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS_SET_DATALENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1DB79770)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79780)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int GetProtectMessageOutputLengthOptions_TypeDefinitionIndex = 46377;

	class GetProtectMessageOutputLengthOptions : public ::System::Object
	{
	public:
		::System::UInt32 _DataLengthBytes_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DataLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS_GET_DATALENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_DataLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_GETPROTECTMESSAGEOUTPUTLENGTHOPTIONS_SET_DATALENGTHBYTES_OFFSET))(this, a1);
		}
	};
}
