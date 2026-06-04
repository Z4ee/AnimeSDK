#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1840A290)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__1_OFFSET UNITYSDK_OFFSET(0x1840A2C0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__2_OFFSET UNITYSDK_OFFSET(0x1840A2E0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184082A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass59_0_TypeDefinitionIndex = 7998;

	class ProtocolManager___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__0_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__1_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS59_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__2_OFFSET))(this);
		}
	};
}
