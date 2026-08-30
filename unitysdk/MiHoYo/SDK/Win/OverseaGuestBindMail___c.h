#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaGuestBindMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1876C840)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1876C880)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1876C890)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail___c_TypeDefinitionIndex = 9438;

	class OverseaGuestBindMail___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGuestBindMail___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::OverseaGuestBindMail___c**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x378C0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x378C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::Win::OverseaGuestBindMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET))(this, a1);
		}
	};
}
