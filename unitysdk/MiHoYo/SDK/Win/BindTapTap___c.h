#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindTapTap; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDTAPTAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18487610)
#define MIHOYO_SDK_WIN_BINDTAPTAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18487650)
#define MIHOYO_SDK_WIN_BINDTAPTAP___C__SHOW_B__14_0_OFFSET UNITYSDK_OFFSET(0x18487660)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindTapTap___c_TypeDefinitionIndex = 9160;

	class BindTapTap___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindTapTap___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BindTapTap___c**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap___c_TypeDefinitionIndex)->GetStaticField(0x26510);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap___c_TypeDefinitionIndex)->GetStaticField(0x26518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__14_0(::MiHoYo::SDK::Win::BindTapTap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindTapTap*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP___C__SHOW_B__14_0_OFFSET))(this, a1);
		}
	};
}
