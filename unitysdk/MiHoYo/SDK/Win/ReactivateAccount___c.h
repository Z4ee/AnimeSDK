#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ReactivateAccount; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E7C8C0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7C900)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__SHOW_B__12_0_OFFSET UNITYSDK_OFFSET(0x15E7C910)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccount___c_TypeDefinitionIndex = 8149;

	class ReactivateAccount___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::ReactivateAccount*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::ReactivateAccount*>**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount___c_TypeDefinitionIndex)->GetStaticField(0x16E70);
		}
		static ::MiHoYo::SDK::Win::ReactivateAccount___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccount___c**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount___c_TypeDefinitionIndex)->GetStaticField(0x16E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__12_0(::MiHoYo::SDK::Win::ReactivateAccount* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ReactivateAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__SHOW_B__12_0_OFFSET))(this, dialog);
		}
	};
}
