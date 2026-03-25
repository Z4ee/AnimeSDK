#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16055680)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS20_0__REQUESTMAILCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1605F450)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass20_0_TypeDefinitionIndex = 7991;

	class BindManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x10
		::System::String* actionType; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestMailCode_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS20_0__REQUESTMAILCODE_B__0_OFFSET))(this, response);
		}
	};
}
