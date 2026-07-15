#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindTapTap; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDTAPTAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C497F0)
#define MIHOYO_SDK_WIN_BINDTAPTAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C49830)
#define MIHOYO_SDK_WIN_BINDTAPTAP___C__SHOW_B__14_0_OFFSET UNITYSDK_OFFSET(0x15C49840)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindTapTap___c_TypeDefinitionIndex = 9172;

	class BindTapTap___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap___c_TypeDefinitionIndex)->GetStaticField(0x29A10);
		}
		static ::MiHoYo::SDK::Win::BindTapTap___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BindTapTap___c**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap___c_TypeDefinitionIndex)->GetStaticField(0x29A18);
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
