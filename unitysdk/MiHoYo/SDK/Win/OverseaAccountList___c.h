#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8ACE30)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8ACE70)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET UNITYSDK_OFFSET(0x1B8ACE80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList___c_TypeDefinitionIndex = 9244;

	class OverseaAccountList___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountList___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountList___c**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList___c_TypeDefinitionIndex)->GetStaticField(0x34510);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>** StaticGet___9__41_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList___c_TypeDefinitionIndex)->GetStaticField(0x34518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__41_0(::MiHoYo::SDK::Win::OverseaAccountList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET))(this, a1);
		}
	};
}
