#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5801B0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__SHOWLAUNCHERPROTOCOL_B__0_OFFSET UNITYSDK_OFFSET(0x1C5801C0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__SHOWLAUNCHERPROTOCOL_B__1_OFFSET UNITYSDK_OFFSET(0x1C5801F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass12_0_TypeDefinitionIndex = 19807;

	class ProtocolManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowLauncherProtocol_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__SHOWLAUNCHERPROTOCOL_B__0_OFFSET))(this);
		}

		::System::Void _ShowLauncherProtocol_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS12_0__SHOWLAUNCHERPROTOCOL_B__1_OFFSET))(this);
		}
	};
}
