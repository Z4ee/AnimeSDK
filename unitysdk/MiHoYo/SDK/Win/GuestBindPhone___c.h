#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GuestBindPhone; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184D2F70)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184D2FB0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C__SHOW_B__35_0_OFFSET UNITYSDK_OFFSET(0x184D2FC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindPhone___c_TypeDefinitionIndex = 9151;

	class GuestBindPhone___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone___c_TypeDefinitionIndex)->GetStaticField(0x28AB0);
		}
		static ::MiHoYo::SDK::Win::GuestBindPhone___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GuestBindPhone___c**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone___c_TypeDefinitionIndex)->GetStaticField(0x28AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__35_0(::MiHoYo::SDK::Win::GuestBindPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C__SHOW_B__35_0_OFFSET))(this, a1);
		}
	};
}
