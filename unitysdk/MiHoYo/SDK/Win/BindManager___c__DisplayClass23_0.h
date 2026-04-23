#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176BA6D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x176C44F0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x176C4590)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__2_OFFSET UNITYSDK_OFFSET(0x176C46A0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__3_OFFSET UNITYSDK_OFFSET(0x176C4A70)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__4_OFFSET UNITYSDK_OFFSET(0x176C4810)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass23_0_TypeDefinitionIndex = 8140;

	class BindManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__4; // 0x10
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x18
		::MiHoYo::SDK::AccountModel* userData; // 0x20
		::System::String* ticket; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__0_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__1_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__2(::System::String* mail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__2_OFFSET))(this, mail);
		}

		::System::Void _ShowBindMail_b__4(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__4_OFFSET))(this, response);
		}

		::System::Void _ShowBindMail_b__3(::System::String* mail, ::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__3_OFFSET))(this, mail, code);
		}
	};
}
