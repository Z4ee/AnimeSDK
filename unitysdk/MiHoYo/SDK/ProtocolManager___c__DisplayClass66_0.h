#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4E5A0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__REQUESTLAUNCHPROTOCOL_B__0_OFFSET UNITYSDK_OFFSET(0x1DD4E5B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass66_0_TypeDefinitionIndex = 20167;

	class ProtocolManager___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLaunchProtocol_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__REQUESTLAUNCHPROTOCOL_B__0_OFFSET))(this, response);
		}
	};
}
