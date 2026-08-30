#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GuestBindMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABF5D0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABF610)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C__SHOW_B__31_0_OFFSET UNITYSDK_OFFSET(0x18ABF620)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail___c_TypeDefinitionIndex = 9440;

	class GuestBindMail___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x31220);
		}
		static ::MiHoYo::SDK::Win::GuestBindMail___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GuestBindMail___c**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x31228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__31_0(::MiHoYo::SDK::Win::GuestBindMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C__SHOW_B__31_0_OFFSET))(this, a1);
		}
	};
}
