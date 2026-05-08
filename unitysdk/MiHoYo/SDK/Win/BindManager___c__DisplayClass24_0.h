#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19957CF0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS24_0__REQUESTBINDEMAILBYCODE_B__0_OFFSET UNITYSDK_OFFSET(0x19957D00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass24_0_TypeDefinitionIndex = 19968;

	class BindManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* mail; // 0x10
		::MiHoYo::SDK::AccountModel* account; // 0x18
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x20
		::System::String* code; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestBindEmailByCode_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS24_0__REQUESTBINDEMAILBYCODE_B__0_OFFSET))(this, response);
		}
	};
}
