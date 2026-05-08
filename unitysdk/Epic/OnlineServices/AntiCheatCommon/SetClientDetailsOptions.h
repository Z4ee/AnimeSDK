#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientFlags.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientInput.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTFLAGS_OFFSET UNITYSDK_OFFSET(0x1989F380)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1989F360)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1989F3A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTFLAGS_OFFSET UNITYSDK_OFFSET(0x1989F390)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1989F370)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1989F3B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1989F3C0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int SetClientDetailsOptions_TypeDefinitionIndex = 34727;

	class SetClientDetailsOptions : public ::System::Object
	{
	public:
		::System::IntPtr _ClientHandle_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput _ClientInputMethod_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags _ClientFlags_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags get_ClientFlags()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTFLAGS_OFFSET))(this);
		}

		::System::Void set_ClientFlags(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTFLAGS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput get_ClientInputMethod()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTINPUTMETHOD_OFFSET))(this);
		}

		::System::Void set_ClientInputMethod(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTINPUTMETHOD_OFFSET))(this, value);
		}
	};
}
