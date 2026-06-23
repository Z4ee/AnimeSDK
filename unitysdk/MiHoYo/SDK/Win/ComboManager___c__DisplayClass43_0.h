#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5E4C40)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__1_OFFSET UNITYSDK_OFFSET(0x1B5E4C90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__2_OFFSET UNITYSDK_OFFSET(0x1B5E4CC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__3_OFFSET UNITYSDK_OFFSET(0x1B5E4D10)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__4_OFFSET UNITYSDK_OFFSET(0x1B5E4D60)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E2700)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass43_0_TypeDefinitionIndex = 21177;

	class ComboManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__0_OFFSET))(this);
		}

		::System::Void _Bind_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__1_OFFSET))(this);
		}

		::System::Void _Bind_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__2_OFFSET))(this);
		}

		::System::Void _Bind_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__3_OFFSET))(this);
		}

		::System::Void _Bind_b__4(::MiHoYo::SDK::NetworkResponseModel* response, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS43_0__BIND_B__4_OFFSET))(this, response, account);
		}
	};
}
