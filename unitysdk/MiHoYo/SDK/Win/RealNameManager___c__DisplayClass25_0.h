#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18799110)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS25_0__GETPHONEVERIFYCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1879D380)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass25_0_TypeDefinitionIndex = 9297;

	class RealNameManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::System::String* actionType; // 0x18
		::System::String* actionTicket; // 0x20
		::System::String* mobile; // 0x28
		::System::String* url; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPhoneVerifyCode_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS25_0__GETPHONEVERIFYCODE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
