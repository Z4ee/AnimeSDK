#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E19CD90)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_GET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E19CD70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1E19CDA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E19CD80)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E19CDB0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int ReceiveMessageFromPeerOptions_TypeDefinitionIndex = 36988;

	class ReceiveMessageFromPeerOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::IntPtr _PeerHandle_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PeerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_GET_PEERHANDLE_OFFSET))(this);
		}

		::System::Void set_PeerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_SET_PEERHANDLE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONS_SET_DATA_OFFSET))(this, value);
		}
	};
}
