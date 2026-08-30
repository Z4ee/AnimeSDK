#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class DatePicker; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DATEPICKER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B836400)
#define MIHOYO_SDK_WIN_DATEPICKER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B836440)
#define MIHOYO_SDK_WIN_DATEPICKER___C__SHOW_B__39_0_OFFSET UNITYSDK_OFFSET(0x1B836450)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker___c_TypeDefinitionIndex = 9227;

	class DatePicker___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::DatePicker___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::DatePicker___c**)Il2CppClass::FromTypeDefinitionIndex(DatePicker___c_TypeDefinitionIndex)->GetStaticField(0x299F0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>**)Il2CppClass::FromTypeDefinitionIndex(DatePicker___c_TypeDefinitionIndex)->GetStaticField(0x299F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__39_0(::MiHoYo::SDK::Win::DatePicker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::DatePicker*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C__SHOW_B__39_0_OFFSET))(this, a1);
		}
	};
}
