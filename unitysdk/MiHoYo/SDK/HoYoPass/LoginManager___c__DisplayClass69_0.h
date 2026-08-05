#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C2010)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS69_0__REGISTERACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1C7C2020)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass69_0_TypeDefinitionIndex = 20444;

	class LoginManager___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* cBody; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterAccount_b__0(::System::Int32 retcode, ::System::String* type, ::MiHoYo::SDK::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS69_0__REGISTERACCOUNT_B__0_OFFSET))(this, retcode, type, result);
		}
	};
}
