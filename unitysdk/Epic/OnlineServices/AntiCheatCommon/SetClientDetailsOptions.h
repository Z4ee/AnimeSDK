#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientFlags.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientInput.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTFLAGS_OFFSET UNITYSDK_OFFSET(0x1DF61430)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF61410)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1DF61450)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTFLAGS_OFFSET UNITYSDK_OFFSET(0x1DF61440)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF61420)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1DF61460)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF61470)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int SetClientDetailsOptions_TypeDefinitionIndex = 46354;

	class SetClientDetailsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags _ClientFlags_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput _ClientInputMethod_k__BackingField; // 0x14
		::System::IntPtr _ClientHandle_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags get_ClientFlags()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTFLAGS_OFFSET))(this);
		}

		::System::Void set_ClientFlags(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTFLAGS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput get_ClientInputMethod()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_GET_CLIENTINPUTMETHOD_OFFSET))(this);
		}

		::System::Void set_ClientInputMethod(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONS_SET_CLIENTINPUTMETHOD_OFFSET))(this, a1);
		}
	};
}
