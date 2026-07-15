#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAccountListConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171455A0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171455E0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET UNITYSDK_OFFSET(0x171455F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountListConfirm___c_TypeDefinitionIndex = 8972;

	class OverseaAccountListConfirm___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountListConfirm___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountListConfirm___c**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm___c_TypeDefinitionIndex)->GetStaticField(0x2E890);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountListConfirm*>** StaticGet___9__28_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountListConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm___c_TypeDefinitionIndex)->GetStaticField(0x2E898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__28_0(::MiHoYo::SDK::Win::OverseaAccountListConfirm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET))(this, a1);
		}
	};
}
