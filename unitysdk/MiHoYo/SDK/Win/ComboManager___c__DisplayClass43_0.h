#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1B8C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__0_OFFSET UNITYSDK_OFFSET(0x15D2D8A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__1_OFFSET UNITYSDK_OFFSET(0x15D2D9B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__2_OFFSET UNITYSDK_OFFSET(0x15D2DAD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__3_OFFSET UNITYSDK_OFFSET(0x15D2DBF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass43_0_TypeDefinitionIndex = 9371;

	class ComboManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchRole_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__0_OFFSET))(this, a1);
		}

		::System::Void _SwitchRole_b__1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__1_OFFSET))(this, a1);
		}

		::System::Void _SwitchRole_b__2(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__2_OFFSET))(this, a1);
		}

		::System::Void _SwitchRole_b__3(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__SWITCHROLE_B__3_OFFSET))(this, a1);
		}
	};
}
