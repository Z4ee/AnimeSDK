#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindMiHoYo; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMIHOYO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C48C20)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C48C60)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET UNITYSDK_OFFSET(0x15C48C70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindMiHoYo___c_TypeDefinitionIndex = 9166;

	class BindMiHoYo___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo___c_TypeDefinitionIndex)->GetStaticField(0x299E0);
		}
		static ::MiHoYo::SDK::Win::BindMiHoYo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BindMiHoYo___c**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo___c_TypeDefinitionIndex)->GetStaticField(0x299E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__29_0(::MiHoYo::SDK::Win::BindMiHoYo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindMiHoYo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET))(this, a1);
		}
	};
}
