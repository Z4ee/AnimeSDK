#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16048AC0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS6_0__REQUESTCOMBOLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1604ABE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager___c__DisplayClass6_0_TypeDefinitionIndex = 7876;

	class AutoTestLoginManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestComboLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS6_0__REQUESTCOMBOLOGIN_B__0_OFFSET))(this, response);
		}
	};
}
