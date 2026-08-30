#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__0_OFFSET UNITYSDK_OFFSET(0x19EB74F0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__1_OFFSET UNITYSDK_OFFSET(0x19EB7520)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__2_OFFSET UNITYSDK_OFFSET(0x19EB7540)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB5230)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass63_0_TypeDefinitionIndex = 8012;

	class ProtocolManager___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__0_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__1_OFFSET))(this);
		}

		::System::Void _CheckShowLaunchProtocolCompliance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS63_0__CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_B__2_OFFSET))(this);
		}
	};
}
