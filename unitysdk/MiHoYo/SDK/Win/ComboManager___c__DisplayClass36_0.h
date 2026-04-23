#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176F8440)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__0_OFFSET UNITYSDK_OFFSET(0x176F8450)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__1_OFFSET UNITYSDK_OFFSET(0x176F84A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__2_OFFSET UNITYSDK_OFFSET(0x176F84F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass36_0_TypeDefinitionIndex = 8179;

	class ComboManager___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchRole_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__0_OFFSET))(this, response);
		}

		::System::Void _SwitchRole_b__1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__1_OFFSET))(this, response);
		}

		::System::Void _SwitchRole_b__2(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS36_0__SWITCHROLE_B__2_OFFSET))(this, response);
		}
	};
}
