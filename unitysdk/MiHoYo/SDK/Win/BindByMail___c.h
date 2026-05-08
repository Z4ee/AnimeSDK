#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindByMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDBYMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA64610)
#define MIHOYO_SDK_WIN_BINDBYMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA64650)
#define MIHOYO_SDK_WIN_BINDBYMAIL___C__SHOW_B__33_0_OFFSET UNITYSDK_OFFSET(0x1AA64660)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail___c_TypeDefinitionIndex = 20081;

	class BindByMail___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindByMail___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BindByMail___c**)Il2CppClass::FromTypeDefinitionIndex(BindByMail___c_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>** StaticGet___9__33_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>**)Il2CppClass::FromTypeDefinitionIndex(BindByMail___c_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__33_0(::MiHoYo::SDK::Win::BindByMail* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindByMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C__SHOW_B__33_0_OFFSET))(this, dialog);
		}
	};
}
