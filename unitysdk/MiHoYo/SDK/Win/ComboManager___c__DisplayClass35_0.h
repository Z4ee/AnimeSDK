#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7A6E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS35_0__LOGOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1BE7A6F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass35_0_TypeDefinitionIndex = 21173;

	class ComboManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS35_0__LOGOUT_B__0_OFFSET))(this, response);
		}
	};
}
