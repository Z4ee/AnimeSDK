#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientFlags.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientInput.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class SetClientDetailsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A1040)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A0FC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTFLAGS_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x32EC60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9A0F90)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int SetClientDetailsOptionsInternal_TypeDefinitionIndex = 36291;

	struct alignas(8) SetClientDetailsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags m_ClientFlags; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput m_ClientInputMethod; // 0x24

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void set_ClientFlags(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTFLAGS_OFFSET))(this, value);
		}

		::System::Void set_ClientInputMethod(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_CLIENTINPUTMETHOD_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETCLIENTDETAILSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
