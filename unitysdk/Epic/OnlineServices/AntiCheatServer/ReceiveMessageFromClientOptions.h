#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0D3EA0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA0D3EC0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0D3EB0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0xA0D3ED0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D3EE0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int ReceiveMessageFromClientOptions_TypeDefinitionIndex = 43249;

	class ReceiveMessageFromClientOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::IntPtr _ClientHandle_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONS_SET_DATA_OFFSET))(this, a1);
		}
	};
}
