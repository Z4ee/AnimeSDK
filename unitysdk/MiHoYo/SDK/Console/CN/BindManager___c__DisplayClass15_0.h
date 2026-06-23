#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS15_0__CREATETHIRDPARTYBINDMOBILEACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1BE44BF0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE44BE0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager___c__DisplayClass15_0_TypeDefinitionIndex = 20855;

	class BindManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::CN::BindManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateThirdpartyBindMobileActionTicket_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS15_0__CREATETHIRDPARTYBINDMOBILEACTIONTICKET_B__0_OFFSET))(this, accessToken);
		}
	};
}
