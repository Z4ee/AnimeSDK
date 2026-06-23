#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1CBCBC10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1CBCBC20)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCBC30)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int UnregisterClientOptions_TypeDefinitionIndex = 36236;

	class UnregisterClientOptions : public ::System::Object
	{
	public:
		::System::IntPtr _ClientHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, value);
		}
	};
}
