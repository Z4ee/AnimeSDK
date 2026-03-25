#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFF7E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__THIRDPARTYACCOUNTBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x15F08000)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__THIRDPARTYACCOUNTBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x15F08240)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass64_0_TypeDefinitionIndex = 7315;

	class LoginManager___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* callback; // 0x10
		::System::String* actionTicket; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void _ThirdpartyAccountBinding_b__0(::System::Int32 retcode, ::System::String* type, ::MiHoYo::SDK::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__THIRDPARTYACCOUNTBINDING_B__0_OFFSET))(this, retcode, type, result);
		}

		::System::Void _ThirdpartyAccountBinding_b__1(::MiHoYo::SDK::Web* webPage, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS64_0__THIRDPARTYACCOUNTBINDING_B__1_OFFSET))(this, webPage, node);
		}
	};
}
