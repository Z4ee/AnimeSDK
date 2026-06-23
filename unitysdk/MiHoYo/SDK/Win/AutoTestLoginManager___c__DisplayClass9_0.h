#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS9_0__COMBOLOGOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1B6EB830)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6EB820)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager___c__DisplayClass9_0_TypeDefinitionIndex = 21015;

	class AutoTestLoginManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ComboLogout_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS9_0__COMBOLOGOUT_B__0_OFFSET))(this, response);
		}
	};
}
