#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18330390)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__EMAILBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1833A2B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__EMAILBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x1833A430)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass67_0_TypeDefinitionIndex = 8271;

	class LoginManager___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::String* actionTicket; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _EmailBinding_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__EMAILBINDING_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _EmailBinding_b__1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__EMAILBINDING_B__1_OFFSET))(this, a1, a2);
		}
	};
}
